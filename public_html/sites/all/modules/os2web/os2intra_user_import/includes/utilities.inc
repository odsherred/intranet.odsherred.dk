<?php

/**
 * Convert numeric values into integers, else return the string as utf8.
 */
function _os2intra_user_import_sanitize_int($str) {
  print_r("\r\n" . '_os2intra_user_import_sanitize_int' . "\r\n");

  if (is_numeric($str)) {
    return (int) $str;
  }
  return utf8_encode($str);
}

/**
 * Helper for user title
 */
function os2intra_user_import_user_title($job_description) {
  print_r("\r\n" . 'os2intra_user_import_user_title' . "\r\n");

  $term = reset(taxonomy_get_term_by_name($job_description));

  // Create new taxonomy term
  if (!is_object($term)) {
    $vocab = taxonomy_vocabulary_machine_name_load('bruger_jobtitel');

    $term = new stdClass();

    $term->name = $job_description;
    $term->vid = $vocab->vid;
    taxonomy_term_save($term);
  }

  return $term->tid;
}

/**
 * Searches for terms by department id and resturns an EntityFieldQuery result.
 */
function os2intra_user_import_query_term_by_department($department_id) {
  print_r("\r\n" . 'os2intra_user_import_query_term_by_department: ' . $department_id . "\r\n");

  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'taxonomy_term');
  $query->fieldCondition('field_os2intra_department_id', 'value', $department_id, '=');
  $result = $query->execute();

  if ($result) {
    $term = taxonomy_term_load(key($result['taxonomy_term']));
  }
  // Returning the array if exists and FALSE if not. 
  if ($term) {
    print_r("\r\n" . 'os2intra_user_import_query_term_by_department: result' . "\r\n");
    return $result;
  } else {
    print_r("\r\n" . 'os2intra_user_import_query_term_by_department: false' . "\r\n");
    return FALSE;
  }
}

/**
 * Get department NID from department ID.
 */
function _os2intra_user_import_get_department_nid($department) {
  print_r("\r\n" . 'test _os2intra_user_import_get_department_nid: ' . $department . "\r\n");

  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'taxonomy_term');
  $query->fieldCondition('field_os2intra_department_id', 'value', $department, '=');
  $result = $query->execute();

  print_r($result);
  print_r("\r\n");
  if (count($result['taxonomy_term']) > 0) {
    $tid = key($result['taxonomy_term']);

    $query = new EntityFieldQuery;
    $query->entityCondition('entity_type', 'node');
    $query->entityCondition('bundle', 'group');
    $query->fieldCondition('field_os2intra_organization', 'tid', $tid, '=');
    $result = $query->execute();

    print_r($result);
    print_r("\r\n");
    if ($result) {
      print_r("result: ");
      print_r(key($result['node']));
      print_r("\r\n");
      return key($result['node']);
    }
  }
  return FALSE;
}
