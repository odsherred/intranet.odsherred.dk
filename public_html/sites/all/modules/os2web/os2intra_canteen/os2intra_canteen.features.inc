<?php
/**
 * @file
 * os2intra_canteen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2intra_canteen_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2intra_canteen_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2intra_canteen_node_info() {
  $items = array(
    'os2intra_canteen_menu' => array(
      'name' => t('Dagens ret/menu'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
