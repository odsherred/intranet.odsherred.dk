<?php
/**
 * @file
 * os2intra_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2intra_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2intra_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_homebox().
 */
function os2intra_base_homebox() {
  $homeboxes = array();

  $homeboxes['os2intra_homebox_front'] = array (
    'regions' => 1,
    'cache' => 0,
    'color' => 0,
    'colors' => 
    array (
      0 => '#ffffff',
      1 => '#ffffff',
      2 => '#ffffff',
      3 => '#ffffff',
      4 => '#ffffff',
      5 => '#ffffff',
    ),
    'blocks' => 
    array (
      'views_e63027de301d7e4fb4a803451a676d7c' => 
      array (
        'module' => 'views',
        'delta' => 'e63027de301d7e4fb4a803451a676d7c',
        'region' => 1,
        'movable' => 1,
        'status' => 0,
        'open' => 1,
        'closable' => 1,
        'title' => 'Kommende begivenheder',
        'weight' => -61,
      ),
      'views_os2intra_user_groups-block_1' => 
      array (
        'module' => 'views',
        'delta' => 'os2intra_user_groups-block_1',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Dine grupper',
        'weight' => -60,
      ),
      'views_399dbbd76989e9acb636c964a1d286b5' => 
      array (
        'module' => 'views',
        'delta' => '399dbbd76989e9acb636c964a1d286b5',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Find din kollega',
        'weight' => -58,
      ),
      'views_os2intra_widgets-block_1' => 
      array (
        'module' => 'views',
        'delta' => 'os2intra_widgets-block_1',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Markedsplads',
        'weight' => -57,
      ),
      'views_os2intra_canteen_menu-block' => 
      array (
        'module' => 'views',
        'delta' => 'os2intra_canteen_menu-block',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Dagens ret',
        'weight' => -56,
      ),
      'views_os2intra_users_content-block' => 
      array (
        'module' => 'views',
        'delta' => 'os2intra_users_content-block',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Indlæg du har oprettet',
        'weight' => -55,
      ),
    ),
    'widths' => 
    array (
      1 => 100,
    ),
    'title' => 'Din forside',
    'path' => 'front',
    'menu' => 0,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 0,
    'roles' => 
    array (
      0 => 'authenticated user',
    ),
  );

  $homeboxes['os2intra_homebox_group'] = array (
    'regions' => 2,
    'cache' => 0,
    'color' => 0,
    'colors' => 
    array (
      0 => '#ffffff',
      1 => '#ffffff',
      2 => '#ffffff',
      3 => '#ffffff',
      4 => '#ffffff',
      5 => '#ffffff',
    ),
    'blocks' => 
    array (
      'views_os2intra_group_documents-block' => 
      array (
        'module' => 'views',
        'delta' => 'os2intra_group_documents-block',
        'region' => 1,
        'movable' => 0,
        'status' => 1,
        'open' => 1,
        'closable' => 0,
        'title' => 'Dokumenter',
        'weight' => -50,
      ),
      'homebox_custom' => 
      array (
        'module' => 'homebox',
        'delta' => 'custom',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Mine notater',
        'weight' => -47,
      ),
      'views_os2intra_group_members-block' => 
      array (
        'module' => 'views',
        'delta' => 'os2intra_group_members-block',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Medlemmer',
        'weight' => -50,
      ),
      'views_13f4c793db1c934a1e6735527564e620' => 
      array (
        'module' => 'views',
        'delta' => '13f4c793db1c934a1e6735527564e620',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Begivenheder',
        'weight' => -51,
      ),
    ),
    'widths' => 
    array (
      1 => 50,
      2 => 50,
    ),
    'title' => 'Din gruppe',
    'path' => 'dingruppe',
    'menu' => 0,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 0,
    'roles' => 
    array (
      0 => 'authenticated user',
    ),
  );


  return $homeboxes;
}
