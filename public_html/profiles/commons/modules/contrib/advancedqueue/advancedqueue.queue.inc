<?php

/**
 * Defintion of AdvancedQueue.
 */

/**
 * Extended queue.
 */
class AdvancedQueue implements DrupalReliableQueueInterface {
  /**
   * The name of the queue this instance is working with.
   *
   * @var string
   */
  protected $name;

  public function __construct($name) {
    $this->name = $name;
  }

  public function createItem($data) {
    return $this->createUniqueItem($data);
  }

  /**
   * Allows the creation of uniquely-keyed items within a single queue.
   *
   * @param array $data
   *   The data for the queue item.
   * @param mixed $key
   *   If present, the unique key for the queue item.
   * @param bool $overwrite
   *   Whether the new item should replace the old item in the queue. Defaults
   *   to TRUE. Used for queue-but-don't-replace-existing logic.
   */
  public function createUniqueItem($data, $key = NULL) {
    // Make sure that queue items cannot break the title column.
    $schema = drupal_get_schema('advancedqueue');
    $title_max = $schema['fields']['title']['length'];
    $title_raw = is_array($data) && isset($data['title']) ? $data['title'] : t('Unnamed item');

    $fields = array(
      'name' => $this->name,
      'uid' => is_array($data) && isset($data['uid']) ? $data['uid'] : $GLOBALS['user']->uid,
      'title' => truncate_utf8($title_raw, $title_max, FALSE, TRUE),
      'data' => serialize($data),
      // We cannot rely on REQUEST_TIME because many items might be created
      // by a single request which takes longer than 1 second. However we allow
      // the creator to post-date their queue items as with the UID and title
      // properties.
      'created' => !empty($data['created']) ? $data['created'] : time(),
      'status' => ADVANCEDQUEUE_STATUS_QUEUED,
    );
    if ($key) {
      // Merge onto the existing item. This updates *all* properties, meaning
      // that if "created" is set into the future and an item is updated too
      // frequently, it might never get to run. Be careful!
      $fields['item_key'] = $key;
      $query = db_merge('advancedqueue')
        ->key(array('item_key' => $key))
        ->fields($fields);
    }
    else {
      // No key means just insert a new item!
      $query = db_insert('advancedqueue')
        ->fields($fields);
    }

    return (bool) $query->execute();
  }

  public function numberOfItems() {
    return db_query('SELECT COUNT(item_id) FROM {advancedqueue} WHERE name = :name AND status <= 0', array(':name' => $this->name))->fetchField();
  }

  public function claimItem($lease_time = 30) {
    // Claim an item by updating its expire fields. If claim is not successful
    // another thread may have claimed the item in the meantime. Therefore loop
    // until an item is successfully claimed or we are reasonably sure there
    // are no unclaimed items left.
    while (TRUE) {
      $data = array(
        ':created' => time(),
        ':name' => $this->name,
      );
      $item = db_query_range('SELECT item_id, item_key, created, uid, title, data FROM {advancedqueue} q WHERE status = -1 AND expire = 0 AND name = :name AND created <= :created ORDER BY created ASC', 0, 1, $data)->fetchObject();
      if ($item) {
        // Try to update the item. Only one thread can succeed in UPDATEing the
        // same row. We cannot rely on REQUEST_TIME because items might be
        // claimed by a single consumer which runs longer than 1 second. If we
        // continue to use REQUEST_TIME instead of the current time(), we steal
        // time from the lease, and will tend to reset items before the lease
        // should really expire.
        $update = db_update('advancedqueue')
          ->fields(array(
            'status' => ADVANCEDQUEUE_STATUS_PROCESSING,
            'expire' => time() + $lease_time,
          ))
          ->condition('item_id', $item->item_id)
          ->condition('expire', 0);
        // If there are affected rows, this update succeeded.
        if ($update->execute()) {
          $item->data = unserialize($item->data);
          return $item;
        }
      }
      else {
        // No items currently available to claim.
        return FALSE;
      }
    }
  }

  /**
   * Requeue an item in case of failure.
   */
  public function requeueItem($item) {
    $update = db_update('advancedqueue')
      ->fields(array(
        'expire' => 0,
        'status' => ADVANCEDQUEUE_STATUS_QUEUED,
        'created' => $item->created,
        'data' => serialize($item->data),
      ))
      ->condition('item_id', $item->item_id);
    return $update->execute();
  }

  public function releaseItem($item) {
    $update = db_update('advancedqueue')
      ->fields(array(
        'expire' => 0,
        'status' => ADVANCEDQUEUE_STATUS_QUEUED,
      ))
      ->condition('item_id', $item->item_id);
    return $update->execute();
  }

  public function deleteItem($item) {
    db_update('advancedqueue')
      ->fields(array(
        'expire' => 0,
        'status' => isset($item->status) ? $item->status : ADVANCEDQUEUE_STATUS_SUCCESS,
        'result' => serialize(isset($item->result) ? $item->result : array()),
        'processed' => time(),
      ))
      ->condition('item_id', $item->item_id)
      ->execute();
  }

  public function createQueue() {
    // All tasks are stored in a single database table (which is created when
    // Drupal is first installed) so there is nothing we need to do to create
    // a new queue.
  }

  public function deleteQueue() {
    db_delete('advancedqueue')
      ->condition('name', $this->name)
      ->execute();
  }
}
