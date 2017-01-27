<?php
/**
 * @file
 * odsherred_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function odsherred_search_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra::changed';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = '';
  $facet->facet = 'changed';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'date',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'date_granularity' => 'DAY',
  );
  $export['search_api@odsherred_intra::changed'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra::created';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = '';
  $facet->facet = 'created';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'date',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'date_granularity' => 'DAY',
  );
  $export['search_api@odsherred_intra::created'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:author';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'author';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:author'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:bm_message_subscribe_email';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'bm_message_subscribe_email';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:bm_message_subscribe_email'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:changed';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'changed';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'ranges' => array(
      'past_hour' => array(
        'label' => 'Past hour',
        'machine_name' => 'past_hour',
        'date_range_start_op' => '-',
        'date_range_start_amount' => '1',
        'date_range_start_unit' => 'HOUR',
        'date_range_end_op' => 'NOW',
        'date_range_end_amount' => '',
        'date_range_end_unit' => 'HOUR',
        'weight' => '0',
        'delete' => 0,
      ),
      'past_24_hours' => array(
        'label' => 'Past 24 hours',
        'machine_name' => 'past_24_hours',
        'date_range_start_op' => '-',
        'date_range_start_amount' => '24',
        'date_range_start_unit' => 'HOUR',
        'date_range_end_op' => 'NOW',
        'date_range_end_amount' => '',
        'date_range_end_unit' => 'HOUR',
        'weight' => '1',
        'delete' => 0,
      ),
      'past_week' => array(
        'label' => 'Past week',
        'machine_name' => 'past_week',
        'date_range_start_op' => '-',
        'date_range_start_amount' => '7',
        'date_range_start_unit' => 'DAY',
        'date_range_end_op' => 'NOW',
        'date_range_end_amount' => '',
        'date_range_end_unit' => 'HOUR',
        'weight' => '2',
        'delete' => 0,
      ),
      'past_month' => array(
        'label' => 'Past month',
        'machine_name' => 'past_month',
        'date_range_start_op' => '-',
        'date_range_start_amount' => '1',
        'date_range_start_unit' => 'MONTH',
        'date_range_end_op' => 'NOW',
        'date_range_end_amount' => '',
        'date_range_end_unit' => 'HOUR',
        'weight' => '3',
        'delete' => 0,
      ),
      'past_year' => array(
        'label' => 'Past year',
        'machine_name' => 'past_year',
        'date_range_start_op' => '-',
        'date_range_start_amount' => '1',
        'date_range_start_unit' => 'YEAR',
        'date_range_end_op' => 'NOW',
        'date_range_end_amount' => '',
        'date_range_end_unit' => 'HOUR',
        'weight' => '4',
        'delete' => 0,
      ),
    ),
    'date_ranges' => array(
      'add_range' => 'Add a new date range',
    ),
    'empty_text' => array(
      'value' => '',
      'format' => 'filtered_html',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@odsherred_intra:block:changed'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:created';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'created';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'ranges' => array(
      'past_hour' => array(
        'label' => 'Past hour',
        'machine_name' => 'past_hour',
        'date_range_start_op' => '-',
        'date_range_start_amount' => '1',
        'date_range_start_unit' => 'HOUR',
        'date_range_end_op' => 'NOW',
        'date_range_end_amount' => '',
        'date_range_end_unit' => 'HOUR',
        'weight' => '0',
        'delete' => 0,
      ),
      'past_24_hours' => array(
        'label' => 'Past 24 hours',
        'machine_name' => 'past_24_hours',
        'date_range_start_op' => '-',
        'date_range_start_amount' => '24',
        'date_range_start_unit' => 'HOUR',
        'date_range_end_op' => 'NOW',
        'date_range_end_amount' => '',
        'date_range_end_unit' => 'HOUR',
        'weight' => '1',
        'delete' => 0,
      ),
      'past_week' => array(
        'label' => 'Past week',
        'machine_name' => 'past_week',
        'date_range_start_op' => '-',
        'date_range_start_amount' => '7',
        'date_range_start_unit' => 'DAY',
        'date_range_end_op' => 'NOW',
        'date_range_end_amount' => '',
        'date_range_end_unit' => 'HOUR',
        'weight' => '2',
        'delete' => 0,
      ),
      'past_month' => array(
        'label' => 'Past month',
        'machine_name' => 'past_month',
        'date_range_start_op' => '-',
        'date_range_start_amount' => '1',
        'date_range_start_unit' => 'MONTH',
        'date_range_end_op' => 'NOW',
        'date_range_end_amount' => '',
        'date_range_end_unit' => 'HOUR',
        'weight' => '3',
        'delete' => 0,
      ),
      'past_year' => array(
        'label' => 'Past year',
        'machine_name' => 'past_year',
        'date_range_start_op' => '-',
        'date_range_start_amount' => '1',
        'date_range_start_unit' => 'YEAR',
        'date_range_end_op' => 'NOW',
        'date_range_end_amount' => '',
        'date_range_end_unit' => 'HOUR',
        'weight' => '4',
        'delete' => 0,
      ),
    ),
    'date_ranges' => array(
      'add_range' => 'Add a new date range',
    ),
    'empty_text' => array(
      'value' => '<p>empty</p>
',
      'format' => 'filtered_html',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@odsherred_intra:block:created'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:dm_field_os2intra_birthday';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_os2intra_birthday';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:dm_field_os2intra_birthday'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:dm_field_os2intra_termination_da';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_os2intra_termination_da';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:dm_field_os2intra_termination_da'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:field_location';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'field_location';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:field_location'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:field_os2intra_canteen_menu_date';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'field_os2intra_canteen_menu_date';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:field_os2intra_canteen_menu_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:field_os2intra_grouptype';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'field_os2intra_grouptype';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:field_os2intra_grouptype'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:field_os2intra_message_sticky';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'field_os2intra_message_sticky';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:field_os2intra_message_sticky'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:field_topics';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'field_topics';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:field_topics'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:im_field_os2intra_user_competenc';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'im_field_os2intra_user_competenc';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:im_field_os2intra_user_competenc'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:im_field_os2intra_user_interests';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'im_field_os2intra_user_interests';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:im_field_os2intra_user_interests'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:im_field_os2intra_user_titles';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'im_field_os2intra_user_titles';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:im_field_os2intra_user_titles'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:rid';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'rid';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:rid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:search_api_access_node';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'search_api_access_node';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:search_api_access_node'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:search_api_language';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:sm_field_node_basket_toolboxes';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_node_basket_toolboxes';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:sm_field_node_basket_toolboxes'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:sm_field_os2intra_department_ref';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_os2intra_department_ref';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:sm_field_os2intra_department_ref'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:sm_field_os2intra_import_groups';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_os2intra_import_groups';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:sm_field_os2intra_import_groups'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:sm_og_user_node';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'sm_og_user_node';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:sm_og_user_node'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:sm_user_trusted_contacts';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'sm_user_trusted_contacts';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:sm_user_trusted_contacts'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:status';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:title';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'title';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:title'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:title_field';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'title_field';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:title_field'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@odsherred_intra:block:type';
  $facet->searcher = 'search_api@odsherred_intra';
  $facet->realm = 'block';
  $facet->facet = 'type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@odsherred_intra:block:type'] = $facet;

  return $export;
}
