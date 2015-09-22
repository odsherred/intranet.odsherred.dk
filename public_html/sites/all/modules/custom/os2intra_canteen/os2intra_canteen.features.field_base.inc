<?php
/**
 * @file
 * os2intra_canteen.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function os2intra_canteen_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_os2intra_canteen_canteen'
  $field_bases['field_os2intra_canteen_canteen'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2intra_canteen_canteen',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'os2intra_canteen',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => '_taxonomy_access_term_options',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_os2intra_canteen_menu_date'
  $field_bases['field_os2intra_canteen_menu_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2intra_canteen_menu_date',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  return $field_bases;
}
