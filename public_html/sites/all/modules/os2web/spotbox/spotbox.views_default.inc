<?php
/**
 * @file
 * spotbox.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function spotbox_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'spotbox';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'spotbox';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit own spotbox content';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'intrabox-single';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Indhold: Link til side */
  $handler->display->display_options['fields']['field_spotbox_link']['id'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['table'] = 'field_data_field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['field'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['label'] = 'URL';
  $handler->display->display_options['fields']['field_spotbox_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotbox_link']['type'] = 'link_plain';
  /* Felt: Indhold: Link til side */
  $handler->display->display_options['fields']['field_spotbox_link_1']['id'] = 'field_spotbox_link_1';
  $handler->display->display_options['fields']['field_spotbox_link_1']['table'] = 'field_data_field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link_1']['field'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link_1']['label'] = 'Titel';
  $handler->display->display_options['fields']['field_spotbox_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotbox_link_1']['type'] = 'link_title_plain';
  /* Felt: Indhold: Spotbillede */
  $handler->display->display_options['fields']['field_spotbox_image']['id'] = 'field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['table'] = 'field_data_field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['field'] = 'field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['path'] = '[field_spotbox_link]';
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['alt'] = '[field_spotbox_link_1]';
  $handler->display->display_options['fields']['field_spotbox_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_spotbox_image']['element_class'] = 'billede';
  $handler->display->display_options['fields']['field_spotbox_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotbox_image']['settings'] = array(
    'image_style' => 'os2intra_spotbox',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'titel';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Ekstra tekst */
  $handler->display->display_options['fields']['field_spotbox_text']['id'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['table'] = 'field_data_field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['field'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['text'] = '<span class="titel"><a href="[field_spotbox_link]">[title]</a></span>
<span class="resten"><a href="[field_spotbox_link]">[field_spotbox_text]</a></span>';
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['alt'] = '[field_spotbox_link_1]';
  $handler->display->display_options['fields']['field_spotbox_text']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_spotbox_text']['element_class'] = 'ekstratekst';
  $handler->display->display_options['fields']['field_spotbox_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_text']['element_default_classes'] = FALSE;
  /* Sorteringskriterie: Indhold: Spotbokse (field_os2intra_base_spotboxes:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_os2intra_base_spotboxes';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
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
    'spotbox' => 'spotbox',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'spotbox' => 'spotbox',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'intraboxes';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'kontaktblok:block_1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Entity Reference: Refererende entity */
  $handler->display->display_options['relationships']['reverse_field_os2intra_base_spotboxes_node']['id'] = 'reverse_field_os2intra_base_spotboxes_node';
  $handler->display->display_options['relationships']['reverse_field_os2intra_base_spotboxes_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_os2intra_base_spotboxes_node']['field'] = 'reverse_field_os2intra_base_spotboxes_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Link til side */
  $handler->display->display_options['fields']['field_spotbox_link']['id'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['table'] = 'field_data_field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['field'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['label'] = 'URL';
  $handler->display->display_options['fields']['field_spotbox_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotbox_link']['type'] = 'link_plain';
  /* Felt: Indhold: Link til side */
  $handler->display->display_options['fields']['field_spotbox_link_1']['id'] = 'field_spotbox_link_1';
  $handler->display->display_options['fields']['field_spotbox_link_1']['table'] = 'field_data_field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link_1']['field'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link_1']['relationship'] = 'field_spotbox_target_id';
  $handler->display->display_options['fields']['field_spotbox_link_1']['label'] = 'Titel';
  $handler->display->display_options['fields']['field_spotbox_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotbox_link_1']['type'] = 'link_title_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'titel';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Spotbillede */
  $handler->display->display_options['fields']['field_spotbox_image']['id'] = 'field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['table'] = 'field_data_field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['field'] = 'field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['path'] = '[field_spotbox_link]';
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['alt'] = '[field_spotbox_link_1]';
  $handler->display->display_options['fields']['field_spotbox_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_spotbox_image']['element_class'] = 'billede';
  $handler->display->display_options['fields']['field_spotbox_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotbox_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Felt: Indhold: Ekstra tekst */
  $handler->display->display_options['fields']['field_spotbox_text']['id'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['table'] = 'field_data_field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['field'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['text'] = '<span class="titel"><a href="[field_spotbox_link]">[title]</a></span>
<span class="resten"><a href="[field_spotbox_link]">[field_spotbox_text]</a></span>';
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['path'] = '[field_spotbox_link]';
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['alt'] = '[field_spotbox_link_1]';
  $handler->display->display_options['fields']['field_spotbox_text']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_spotbox_text']['element_class'] = 'ekstratekst';
  $handler->display->display_options['fields']['field_spotbox_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_os2intra_base_spotboxes_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'group' => 'group',
    'os2intra_base_page' => 'os2intra_base_page',
  );
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Spotbox pane';
  $handler->display->display_options['pane_description'] = 'Viser de spotboxe der er relateret til en intranetside';
  $handler->display->display_options['pane_category']['name'] = 'OS2intra';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Side */
  $handler = $view->new_display('page', 'Side', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_spotbox_link' => 'field_spotbox_link',
    'field_spotbox_link_1' => 'field_spotbox_link_1',
    'field_spotbox_image' => 'field_spotbox_image',
    'title' => 'title',
    'field_spotbox_text' => 'field_spotbox_text',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'field_os2intra_frontpagespot' => 'field_os2intra_frontpagespot',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_spotbox_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_spotbox_link_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_spotbox_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_spotbox_text' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2intra_frontpagespot' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<nav class="actions-wrapper menu-wrapper clearfix">
              <ul class="action-links clearfix">
                <li><a href="/node/add/spotbox">Opret ny spotboks</a></li>
              </ul>
            </nav>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Masse-handlinger: Indhold */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::commons_content_moderation_delete_node_block_user' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::panelizer_set_status_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Felt: Indhold: Link til side */
  $handler->display->display_options['fields']['field_spotbox_link']['id'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['table'] = 'field_data_field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['field'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['label'] = 'URL';
  $handler->display->display_options['fields']['field_spotbox_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotbox_link']['type'] = 'link_plain';
  /* Felt: Indhold: Link til side */
  $handler->display->display_options['fields']['field_spotbox_link_1']['id'] = 'field_spotbox_link_1';
  $handler->display->display_options['fields']['field_spotbox_link_1']['table'] = 'field_data_field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link_1']['field'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link_1']['label'] = 'Link titel';
  $handler->display->display_options['fields']['field_spotbox_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotbox_link_1']['type'] = 'link_title_plain';
  /* Felt: Indhold: Spotbillede */
  $handler->display->display_options['fields']['field_spotbox_image']['id'] = 'field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['table'] = 'field_data_field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['field'] = 'field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['label'] = 'Billede';
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['path'] = '[field_spotbox_link]';
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['alt'] = '[field_spotbox_link_1]';
  $handler->display->display_options['fields']['field_spotbox_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_spotbox_image']['element_class'] = 'billede';
  $handler->display->display_options['fields']['field_spotbox_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotbox_image']['settings'] = array(
    'image_style' => 'os2intra_spotbox',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'titel';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Ekstra tekst */
  $handler->display->display_options['fields']['field_spotbox_text']['id'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['table'] = 'field_data_field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['field'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['text'] = '<span class="titel"><a href="[field_spotbox_link]">[title]</a></span>
<span class="resten"><a href="[field_spotbox_link]">[field_spotbox_text]</a></span>';
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['alt'] = '[field_spotbox_link_1]';
  $handler->display->display_options['fields']['field_spotbox_text']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_spotbox_text']['element_class'] = 'ekstratekst';
  $handler->display->display_options['fields']['field_spotbox_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_text']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Redigér';
  /* Felt: Indhold: Slet-link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Slet';
  /* Felt: Indhold: Vis på forside */
  $handler->display->display_options['fields']['field_os2intra_frontpagespot']['id'] = 'field_os2intra_frontpagespot';
  $handler->display->display_options['fields']['field_os2intra_frontpagespot']['table'] = 'field_data_field_os2intra_frontpagespot';
  $handler->display->display_options['fields']['field_os2intra_frontpagespot']['field'] = 'field_os2intra_frontpagespot';
  $handler->display->display_options['fields']['field_os2intra_frontpagespot']['label'] = 'På forside';
  $handler->display->display_options['fields']['field_os2intra_frontpagespot']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Oprettelsesdato';
  $handler->display->display_options['path'] = 'admin/content/spotboxe';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Spotsbokse';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Content';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Forside spotbokse */
  $handler = $view->new_display('block', 'Forside spotbokse', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'intraboxes';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'intrabox-single';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Link til side */
  $handler->display->display_options['fields']['field_spotbox_link']['id'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['table'] = 'field_data_field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['field'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['label'] = 'URL';
  $handler->display->display_options['fields']['field_spotbox_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotbox_link']['type'] = 'link_plain';
  /* Felt: Indhold: Link til side */
  $handler->display->display_options['fields']['field_spotbox_link_1']['id'] = 'field_spotbox_link_1';
  $handler->display->display_options['fields']['field_spotbox_link_1']['table'] = 'field_data_field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link_1']['field'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link_1']['label'] = 'Titel';
  $handler->display->display_options['fields']['field_spotbox_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotbox_link_1']['type'] = 'link_title_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_spotbox_link]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'titel';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Spotbillede */
  $handler->display->display_options['fields']['field_spotbox_image']['id'] = 'field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['table'] = 'field_data_field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['field'] = 'field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['path'] = '[field_spotbox_link]';
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['alt'] = '[field_spotbox_link_1]';
  $handler->display->display_options['fields']['field_spotbox_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_spotbox_image']['element_class'] = 'billede';
  $handler->display->display_options['fields']['field_spotbox_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotbox_image']['settings'] = array(
    'image_style' => 'os2intra_spotbox',
    'image_link' => '',
  );
  /* Felt: Indhold: Ekstra tekst */
  $handler->display->display_options['fields']['field_spotbox_text']['id'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['table'] = 'field_data_field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['field'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['text'] = '<span class="titel"><a href="[field_spotbox_link]">[title]</a></span>
<span class="resten"><a href="[field_spotbox_link]">[field_spotbox_text]</a></span>';
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['alt'] = '[field_spotbox_link_1]';
  $handler->display->display_options['fields']['field_spotbox_text']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_spotbox_text']['element_class'] = 'ekstratekst';
  $handler->display->display_options['fields']['field_spotbox_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_text']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'spotbox' => 'spotbox',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filterkriterie: Indhold: Vis på forside (field_os2intra_frontpagespot) */
  $handler->display->display_options['filters']['field_os2intra_frontpagespot_value']['id'] = 'field_os2intra_frontpagespot_value';
  $handler->display->display_options['filters']['field_os2intra_frontpagespot_value']['table'] = 'field_data_field_os2intra_frontpagespot';
  $handler->display->display_options['filters']['field_os2intra_frontpagespot_value']['field'] = 'field_os2intra_frontpagespot_value';
  $handler->display->display_options['filters']['field_os2intra_frontpagespot_value']['value'] = array(
    1 => '1',
  );
  $translatables['spotbox'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('URL'),
    t('Titel'),
    t('[field_spotbox_link_1]'),
    t('<span class="titel"><a href="[field_spotbox_link]">[title]</a></span>
<span class="resten"><a href="[field_spotbox_link]">[field_spotbox_text]</a></span>'),
    t('Block'),
    t('Content pane'),
    t('Indhold refererer til Indhold fra field_os2intra_base_spotboxes'),
    t('Alle'),
    t('Spotbox pane'),
    t('Viser de spotboxe der er relateret til en intranetside'),
    t('OS2intra'),
    t('Side'),
    t('<nav class="actions-wrapper menu-wrapper clearfix">
              <ul class="action-links clearfix">
                <li><a href="/node/add/spotbox">Opret ny spotboks</a></li>
              </ul>
            </nav>'),
    t('Indhold'),
    t('Link titel'),
    t('Billede'),
    t('Navn'),
    t('Redigér'),
    t('Slet'),
    t('På forside'),
    t('Oprettelsesdato'),
    t('Forside spotbokse'),
  );
  $export['spotbox'] = $view;

  return $export;
}
