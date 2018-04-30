<?php
/**
 * @file
 * Departments taxonomy terms cleanup.
 */

$import_data = get_import_data();
if (empty($import_data)) {
  print_r('No data.');
  return;
}
foreach ($import_data as $row) {
  $res = db_select('taxonomy_term_data', 'term')
    ->fields('term', array('tid'))
    ->condition('tid', $row[0])
    ->execute()
    ->fetchAssoc();
  // Remove term record if it exist.
  if (!empty($res)) {
    db_delete('taxonomy_term_data')
      ->condition('tid', $row[0])
      ->execute();
  }

  // Generate new term entity.
  $new_term = entity_create('taxonomy_term', array(
    'name' => (string) $row[1],
    'tid' => (int) $row[0],
    'vid' => 2,
    'parent' => (int) $row[2],
    'vocabulary_machine_name' => 'os2intra_organizaiton_tax',
    'description' => '',
    'weight' => (int) $row[6],
    'format' => 'filtered_html',
    'field_os2intra_department_id' => array(
      LANGUAGE_NONE => array(
        array('value' => $row[8]),
      ),
    ),
  ));

  // Save term.
  _taxonomy_specific_term_save($new_term);
}

/**
 * Get import data.
 */
function get_import_data() {
  $import_data = &drupal_static(__FUNCTION__);
  if (empty($import_data)) {
    $csv_array = file('../import/organization-tree.csv');
    foreach ($csv_array as $line) {
      $import_data[] = str_getcsv($line);
    }
  }

  return $import_data;
}

/**
 * Customized taxonomy term function to create term with specific id.
 *
 * @see taxonomy_term_save($term)
 */
function _taxonomy_specific_term_save($term) {
  // Prevent leading and trailing spaces in term names.
  $term->name = trim($term->name);
  field_attach_presave('taxonomy_term', $term);
  module_invoke_all('taxonomy_term_presave', $term);
  module_invoke_all('entity_presave', $term, 'taxonomy_term');

  $op = 'update';
  $status = drupal_write_record('taxonomy_term_data', $term);
  field_attach_update('taxonomy_term', $term);

  if (isset($term->parent)) {
    db_delete('taxonomy_term_hierarchy')
      ->condition('tid', $term->tid)
      ->execute();

    if (!is_array($term->parent)) {
      $term->parent = array($term->parent);
    }
    $query = db_insert('taxonomy_term_hierarchy')
      ->fields(array('tid', 'parent'));
    foreach ($term->parent as $parent) {
      if (is_array($parent)) {
        foreach ($parent as $tid) {
          $query->values(array(
            'tid' => $term->tid,
            'parent' => $tid,
          ));
        }
      }
      else {
        $query->values(array(
          'tid' => $term->tid,
          'parent' => $parent,
        ));
      }
    }
    $query->execute();
  }

  // Reset the taxonomy term static variables.
  taxonomy_terms_static_reset();

  // Invoke the taxonomy hooks.
  module_invoke_all("taxonomy_term_$op", $term);
  module_invoke_all("entity_$op", $term, 'taxonomy_term');

  return $status;
}
