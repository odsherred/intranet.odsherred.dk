<?php
/**
 * @file
 * os2intra_canteen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2intra_canteen_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2intra_canteen_menu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OS2Intra canteen menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dagens ret';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der blev ikke fundet noget';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Forbindelse: Indhold: Taksonomitermer på node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'os2intra_canteen' => 'os2intra_canteen',
    'os2intra_organizaiton_tax' => 0,
    'tags' => 0,
  );
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_os2intra_canteen_menu_date']['id'] = 'field_os2intra_canteen_menu_date';
  $handler->display->display_options['fields']['field_os2intra_canteen_menu_date']['table'] = 'field_data_field_os2intra_canteen_menu_date';
  $handler->display->display_options['fields']['field_os2intra_canteen_menu_date']['field'] = 'field_os2intra_canteen_menu_date';
  $handler->display->display_options['fields']['field_os2intra_canteen_menu_date']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_canteen_menu_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_canteen_menu_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Date (field_os2intra_canteen_menu_date) */
  $handler->display->display_options['sorts']['field_os2intra_canteen_menu_date_value']['id'] = 'field_os2intra_canteen_menu_date_value';
  $handler->display->display_options['sorts']['field_os2intra_canteen_menu_date_value']['table'] = 'field_data_field_os2intra_canteen_menu_date';
  $handler->display->display_options['sorts']['field_os2intra_canteen_menu_date_value']['field'] = 'field_os2intra_canteen_menu_date_value';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2intra_canteen_menu' => 'os2intra_canteen_menu',
  );
  /* Filterkriterie: Indhold: Har taksonomitermer (med dybde) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Vælg Kantine:';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'os2intra_canteen';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';
  /* Filterkriterie: Indhold: Date (field_os2intra_canteen_menu_date) */
  $handler->display->display_options['filters']['field_os2intra_canteen_menu_date_value']['id'] = 'field_os2intra_canteen_menu_date_value';
  $handler->display->display_options['filters']['field_os2intra_canteen_menu_date_value']['table'] = 'field_data_field_os2intra_canteen_menu_date';
  $handler->display->display_options['filters']['field_os2intra_canteen_menu_date_value']['field'] = 'field_os2intra_canteen_menu_date_value';
  $handler->display->display_options['filters']['field_os2intra_canteen_menu_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_os2intra_canteen_menu_date_value']['default_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['os2intra_canteen_menu'] = array(
    t('Master'),
    t('Dagens ret'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Der blev ikke fundet noget'),
    t('term'),
    t('Vælg Kantine:'),
    t('Block'),
  );
  $export['os2intra_canteen_menu'] = $view;

  return $export;
}
