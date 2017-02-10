<?php
/**
 * @file
 * odsherred_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function odsherred_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'odsherred_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_odsherred_intra';
  $view->human_name = 'Odsherred Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'search-result';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Header: Search: Spellcheck */
  $handler->display->display_options['header']['search_api_spellcheck']['id'] = 'search_api_spellcheck';
  $handler->display->display_options['header']['search_api_spellcheck']['table'] = 'search_api_index_odsherred_intra';
  $handler->display->display_options['header']['search_api_spellcheck']['field'] = 'search_api_spellcheck';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<ul>
<li>Kontrollér at stavningen er korrekt eller prøv at fjerne filtre.</li>
<li>Fjern anførselstegn omkring udtryk for at søge efter hvert ord individuelt: <em>"blue drop"</em> giver færre resultater end <em>blue drop</em>.</li>
<li>Du kan forlange eller ekskludere termer med  + og -: <em>big +blue drop</em> kræver at <em>blue</em> findes, mens <em>big blue -drop</em> ekskluderer resultater som indeholder <em>drop</em>.</li>
</ul>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_odsherred_intra';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = 'Rendered Indholdselement';
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_odsherred_intra';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Indtast ord';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
    3 => 0,
    6 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_menu');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_odsherred_intra';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
    3 => 0,
    6 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';
  $handler->display->display_options['inherit_panels_path'] = '0';
  $translatables['odsherred_search'] = array(
    t('Master'),
    t('more'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<ul>
<li>Kontrollér at stavningen er korrekt eller prøv at fjerne filtre.</li>
<li>Fjern anførselstegn omkring udtryk for at søge efter hvert ord individuelt: <em>"blue drop"</em> giver færre resultater end <em>blue drop</em>.</li>
<li>Du kan forlange eller ekskludere termer med  + og -: <em>big +blue drop</em> kræver at <em>blue</em> findes, mens <em>big blue -drop</em> ekskluderer resultater som indeholder <em>drop</em>.</li>
</ul>'),
    t('Node ID'),
    t('.'),
    t(','),
    t('Rendered Indholdselement'),
    t('Indtast ord'),
    t('Content pane'),
    t('Search'),
    t('View panes'),
  );
  $export['odsherred_search'] = $view;

  $view = new view();
  $view->name = 'os2intra_users_elastic_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_odsherred_intra_users';
  $view->human_name = 'OS2intra Users elastic search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'OS2intra Users elastic search';
  $handler->display->display_options['css_class'] = 'userlist';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Søg efter din kollega';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'personkort';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: First name (hidden) */
  $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['table'] = 'search_api_index_odsherred_intra_users';
  $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['ui_name'] = 'First name (hidden)';
  $handler->display->display_options['fields']['field_name_first']['label'] = '';
  $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* Field: First name (hidden) */
  $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['table'] = 'search_api_index_odsherred_intra_users';
  $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['ui_name'] = 'First name (hidden)';
  $handler->display->display_options['fields']['field_name_last']['label'] = '';
  $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* Field: Indexed User: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_odsherred_intra_users';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '[field_name_first] [field_name_last]';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 1;
  /* Field: Indexed User: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'search_api_index_odsherred_intra_users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_entity'] = 0;
  /* Field: Indexed User: Phone */
  $handler->display->display_options['fields']['field_os2intra_phone']['id'] = 'field_os2intra_phone';
  $handler->display->display_options['fields']['field_os2intra_phone']['table'] = 'search_api_index_odsherred_intra_users';
  $handler->display->display_options['fields']['field_os2intra_phone']['field'] = 'field_os2intra_phone';
  $handler->display->display_options['fields']['field_os2intra_phone']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_phone']['element_label_colon'] = FALSE;
  /* Field: User: Rendered User */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'search_preview';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Filter criterion: Indexed User: User ID */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'search_api_index_odsherred_intra_users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = '>';
  $handler->display->display_options['filters']['uid']['value'] = '1';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_odsherred_intra_users';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Navn';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
    3 => 0,
    6 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  /* Filter criterion: Indexed User: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_odsherred_intra_users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = '';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = '';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Search: Spellcheck */
  $handler->display->display_options['header']['search_api_spellcheck']['id'] = 'search_api_spellcheck';
  $handler->display->display_options['header']['search_api_spellcheck']['table'] = 'search_api_index_odsherred_intra_users';
  $handler->display->display_options['header']['search_api_spellcheck']['field'] = 'search_api_spellcheck';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<ul>
<li>Kontrollér at stavningen er korrekt eller prøv at fjerne filtre.</li>
<li>Fjern anførselstegn omkring udtryk for at søge efter hvert ord individuelt: <em>"blue drop"</em> giver færre resultater end <em>blue drop</em>.</li>
<li>Du kan forlange eller ekskludere termer med  + og -: <em>big +blue drop</em> kræver at <em>blue</em> findes, mens <em>big blue -drop</em> ekskluderer resultater som indeholder <em>drop</em>.</li>
</ul>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['os2intra_users_elastic_search'] = array(
    t('Master'),
    t('OS2intra Users elastic search'),
    t('more'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Søg efter din kollega'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« first'),
    t('‹ forrige'),
    t('næste ›'),
    t('last »'),
    t('[field_name_first] [field_name_last]'),
    t('Navn'),
    t('Block'),
    t('Content pane'),
    t('« første'),
    t('sidste »'),
    t('<ul>
<li>Kontrollér at stavningen er korrekt eller prøv at fjerne filtre.</li>
<li>Fjern anførselstegn omkring udtryk for at søge efter hvert ord individuelt: <em>"blue drop"</em> giver færre resultater end <em>blue drop</em>.</li>
<li>Du kan forlange eller ekskludere termer med  + og -: <em>big +blue drop</em> kræver at <em>blue</em> findes, mens <em>big blue -drop</em> ekskluderer resultater som indeholder <em>drop</em>.</li>
</ul>'),
    t('View panes'),
  );
  $export['os2intra_users_elastic_search'] = $view;

  return $export;
}
