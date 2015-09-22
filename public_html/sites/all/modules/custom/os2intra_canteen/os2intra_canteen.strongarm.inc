<?php
/**
 * @file
 * os2intra_canteen.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2intra_canteen_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_day';
  $strongarm->value = 'l';
  $export['date_format_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__os2intra_canteen_menu';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__os2intra_canteen_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_os2intra_canteen_menu';
  $strongarm->value = '0';
  $export['language_content_type_os2intra_canteen_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_os2intra_canteen_menu';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_os2intra_canteen_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_os2intra_canteen_menu';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_os2intra_canteen_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_os2intra_canteen_menu';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_os2intra_canteen_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_os2intra_canteen_menu';
  $strongarm->value = '1';
  $export['node_preview_os2intra_canteen_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_os2intra_canteen_menu';
  $strongarm->value = 1;
  $export['node_submitted_os2intra_canteen_menu'] = $strongarm;

  return $export;
}
