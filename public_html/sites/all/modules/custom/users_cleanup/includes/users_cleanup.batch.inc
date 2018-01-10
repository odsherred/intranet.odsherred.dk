<?php
/**
 * Batch processes for users_cleanup module.
 */

/**
 * Definition of users_cleanup_grab batch process.
 */
function batch_users_cleanup_grab($operation_callback) {
  $query = _get_query();
  $users = $query->execute()->fetchAll();
  $_SESSION['matched_users'] = [];
  $_SESSION['excluded_users'] = [];
  $chunks = array_chunk($users, 100);
  $operations = array();
  $progress = 0;
  $limit = 100;
  $max = count($users);

  // Set up our batch operations.
  foreach ($chunks as $chunk) {
    $operations[] = array(
      $operation_callback,
      array(
        $chunk, $progress, $limit, $max,
      ),
    );
    $progress = $progress + $limit;

    $testing_amount = variable_get('users_cleanup_testing_amount', 0);
    if ($testing_amount && $progress >= $testing_amount) {
      break;
    }
  }

  $batch = array(
    'operations' => $operations,
    'title' => t('Grabbing users process'),
    'init_message' => t('Initializing'),
    'error_message' => t('An error occurred'),
    'progress_message' => t('Processed batch #@current out of @total.'),
    'finished' => 'batch_users_cleanup_grab_finished',
  );
  // Get the batch process all ready!
  batch_set($batch);
  $batch =& batch_get();

  // Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;
}

/**
 * Finished function for users_cleanup_grab batch process.
 */
function batch_users_cleanup_grab_finished($success, $results, $operations) {
  if ($success) {
    drupal_set_message(t('@count users processed.', array('@count' => array_pop($results))));
    unset($_SESSION['excluded_users']);
    drupal_goto('admin/people/users_cleanup');
  }
  else {
    $error_operation = reset($operations);
    drupal_set_message(
      t('An error occurred while processing @operation with arguments : @args',
        array(
          '@operation' => $error_operation[0],
          '@args' => print_r($error_operation[0], TRUE),
        )
      )
    );
  }
}

/**
 * Name is equal to Employee id function for users_cleanup_grab batch process.
 */
function batch_users_cleanup_name_equal_employee_id($users, $progress, $limit, $max, &$context) {
  // Set default starting values.
  if (empty($context['sandbox'])) {
    $context['sandbox'] = array();
    $context['sandbox']['progress'] = 0;
    $context['sandbox']['max'] = $limit;
  }

  $matched_users = &$_SESSION['matched_users'];
  $excluded_users = &$_SESSION['excluded_users'];

  if (!empty($users)) {
    foreach ($users as $user) {
      if (in_array($user->uid, $excluded_users)) {
        continue;
      }
      $excluded_users[] = $user->uid;
      $query = _get_query();

      $query->condition('uid', $excluded_users, 'NOT IN');
      $ma_db_or = db_or();
      $ma_db_or->condition('u.name', $user->employee_id);
      $ma_db_or->condition('uma.field_os2intra_employee_id_value', $user->name);
      $query->condition($ma_db_or);
      $res = $query->execute()->fetchAll();
      if (!empty($res)) {
        $matched_users[$user->uid][] = (array) $user;
        foreach ($res as $row) {
          if (!isset($excluded_users[$row->uid])) {
            $excluded_users[$row->uid] = $row->uid;
          }
          $matched_users[$user->uid][] = (array) $row;
        }
      }
    }
  }

  $context['results'][] = $max;
  $context['sandbox']['progress'] += $progress;
  $context['message'] = t('Found @matched_users users', ['@matched_users' => count($matched_users)]);
  // Inform the batch engine that we are not finished,
  // and provide an estimation of the completion level we reached.
  if ($context['sandbox']['progress'] != $context['sandbox']['max']) {
    $context['finished'] = (($context['sandbox']['max'] - $context['sandbox']['progress']) <= $limit) || ($context['sandbox']['progress'] >= $context['sandbox']['max']);
  }
}

/**
 * Outdated timestamp function for users_cleanup_grab batch process.
 */
function users_cleanup_name_by_import_timestamp() {
  $matched_users = &$_SESSION['matched_users'];
  $last_import_time_stamp = variable_get('os2intra_user_import_epoch');
  $query = _get_query();
  $db_or = db_or();
  $db_or->isNull('uit.field_os2intra_import_timestamp_value');
  $db_or->condition('uit.field_os2intra_import_timestamp_value', $last_import_time_stamp, '<');
  $query->condition($db_or);
  $res = $query->execute()->fetchAll();
  if (!empty($res)) {
    foreach ($res as $row) {
      $matched_users[$row->uid] = (array) $row;
    }
  }
}

/**
 * Getter function to define query for grabbing user process.
 */
function _get_query() {
  $query = db_select('users', 'u');
  $query->fields('u', ['uid', 'name', 'mail']);

  $query->join('field_data_field_name_first', 'unf', 'u.uid = unf.entity_id');
  $query->addField('unf', 'field_name_first_value', 'first_name');

  $query->join('field_data_field_name_last', 'unl', 'u.uid = unl.entity_id');
  $query->addField('unl', 'field_name_last_value', 'last_name');

  $query->join('field_data_field_os2intra_employee_id', 'uma', 'u.uid = uma.entity_id');
  $query->addField('uma', 'field_os2intra_employee_id_value', 'employee_id');

  $query->join('field_data_field_os2intra_import_timestamp', 'uit', 'u.uid = uit.entity_id');
  $query->addField('uit', 'field_os2intra_import_timestamp_value', 'import_timestamp');

  $query->addField('u', 'created');
  $query->addField('u', 'login');

  $query->orderBy('u.uid');
  return $query;
}
