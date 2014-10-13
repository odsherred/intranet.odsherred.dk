<?php
/**
 * @file
 * os2intra_kle.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2intra_kle_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2web_kle_related_pages';
  $view->description = '';
  $view->tag = 'OS2web';
  $view->base_table = 'node';
  $view->human_name = 'OS2web - KLE Related pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'OS2web - KLE Related pages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: KL Emneord (field_os2web_base_field_kle_ref) */
  $handler->display->display_options['arguments']['field_os2web_base_field_kle_ref_tid']['id'] = 'field_os2web_base_field_kle_ref_tid';
  $handler->display->display_options['arguments']['field_os2web_base_field_kle_ref_tid']['table'] = 'field_data_field_os2web_base_field_kle_ref';
  $handler->display->display_options['arguments']['field_os2web_base_field_kle_ref_tid']['field'] = 'field_os2web_base_field_kle_ref_tid';
  $handler->display->display_options['arguments']['field_os2web_base_field_kle_ref_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_os2web_base_field_kle_ref_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_os2web_base_field_kle_ref_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_os2web_base_field_kle_ref_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_os2web_base_field_kle_ref_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_os2web_base_field_kle_ref_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_os2web_base_field_kle_ref_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_os2web_base_field_kle_ref_tid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_os2web_base_field_kle_ref_tid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_os2web_base_field_kle_ref',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: KL Emneord (field_os2web_base_field_kle_ref)',
    ),
  );
  $translatables['os2web_kle_related_pages'] = array(
    t('Master'),
    t('OS2web - KLE Related pages'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Alle'),
    t('Block'),
    t('Content pane'),
    t('View panes'),
  );
  $export['os2web_kle_related_pages'] = $view;

  return $export;
}
