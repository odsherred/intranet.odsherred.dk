<?php
/**
 * @file
 * os2intra_menubar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2intra_menubar_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function os2intra_menubar_image_default_styles() {
  $styles = array();

  // Exported image style: left_menubar_icon.
  $styles['left_menubar_icon'] = array(
    'name' => 'left_menubar_icon',
    'label' => 'left menubar icon',
    'effects' => array(
      1 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 32,
          'height' => 32,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
