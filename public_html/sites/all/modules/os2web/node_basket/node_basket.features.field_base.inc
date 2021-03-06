<?php
/**
 * @file
 * node_basket.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function node_basket_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_node_basket_description'
  $field_bases['field_node_basket_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_node_basket_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_node_basket_links'
  $field_bases['field_node_basket_links'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_node_basket_links',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_node_basket_references'
  $field_bases['field_node_basket_references'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_node_basket_references',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'answer' => 'answer',
          'event' => 'event',
          'group' => 'group',
          'media' => 'media',
          'node_basket' => 'node_basket',
          'os2intra_base_page' => 'os2intra_base_page',
          'os2intra_canteen_menu' => 'os2intra_canteen_menu',
          'os2intra_message_notification' => 'os2intra_message_notification',
          'os2web_base_contentpage' => 'os2web_base_contentpage',
          'os2web_base_gallery' => 'os2web_base_gallery',
          'os2web_base_iframe' => 'os2web_base_iframe',
          'os2web_base_news' => 'os2web_base_news',
          'os2web_base_rotating_image' => 'os2web_base_rotating_image',
          'os2web_base_selfservice_link' => 'os2web_base_selfservice_link',
          'page' => 'page',
          'poll' => 'poll',
          'post' => 'post',
          'question' => 'question',
          'spotbox' => 'spotbox',
          'webform' => 'webform',
          'wiki' => 'wiki',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_node_basket_toolboxes'
  $field_bases['field_node_basket_toolboxes'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_node_basket_toolboxes',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'node_basket' => 'node_basket',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_node_basket_type'
  $field_bases['field_node_basket_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_node_basket_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'basket' => 'Basket',
        'toolbox' => 'Toolbox',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
