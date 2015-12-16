<?php
/**
 * @file
 * commons_search_solr_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commons_search_solr_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => "3");
  }
}
