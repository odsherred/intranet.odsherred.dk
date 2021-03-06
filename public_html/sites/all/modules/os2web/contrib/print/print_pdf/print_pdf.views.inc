<?php

/**
 * @file
 * PDF Version Views integration.
 *
 * @ingroup print
 */

/**
 * Implements hook_views_data().
 */
function print_pdf_views_data() {
  // The 'group' index will be used as a prefix in the UI for any of this
  // table's fields, sort criteria, etc. so it's easy to tell where they came
  // from.
  $data['print_pdf_node_conf']['table']['group'] = t('Printer-friendly version');
  $data['print_pdf_page_counter']['table']['group'] = t('Printer-friendly version');

  // This table references the {node} table. The declaration below creates an
  // 'implicit' relationship to the node table, so that when 'node' is the base
  // table, the fields are automatically available.
  $data['print_pdf_node_conf']['table']['join']['node'] = array(
    // 'left_field' is the primary key in the referenced table.
    // 'field' is the foreign key in this table.
    'left_field' => 'nid',
    'field' => 'nid',
  );
  $data['print_pdf_page_counter']['table']['join']['node'] = array(
    // 'left_field' is the primary key in the referenced table.
    // 'field' is the foreign key in this table.
    'left_field' => 'nid',
    'field' => 'path',
    'handler' => 'print_join_page_counter',
  );

  // print_pdf_node_conf fields.
  $data['print_pdf_node_conf']['link'] = array(
    'title' => t('PDF: Show link'),
    'help' => t('Whether to show the PDF version link.'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
      'label' => t('Active'),
      'type' => 'yes-no',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  $data['print_pdf_node_conf']['comments'] = array(
    'title' => t('PDF: Show link in individual comments'),
    'help' => t('Whether to show the PDF version link in individual comments.'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
      'label' => t('Active'),
      'type' => 'yes-no',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  $data['print_pdf_node_conf']['url_list'] = array(
    'title' => t('PDF: Show Printer-friendly URLs list'),
    'help' => t('Whether to show the URL list.'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
      'label' => t('Active'),
      'type' => 'yes-no',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  $data['print_pdf_node_conf']['size'] = array(
    'title' => t('PDF: Paper size'),
    'help' => t('Configured PDF paper size'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  $data['print_pdf_node_conf']['orientation'] = array(
    'title' => t('PDF: Page orientation'),
    'help' => t('Configured PDF page orientation.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // print_pdf_page_counter fields.
  $data['print_pdf_page_counter']['totalcount'] = array(
    'title' => t('PDF: Number of page accesses'),
    'help' => t('Counter of accesses to the PDF version for this node.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );
  $data['print_pdf_page_counter']['timestamp'] = array(
    'title' => t('PDF: Last access'),
    'help' => t("The date of the last access to the node's PDF version."),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  return $data;
}
