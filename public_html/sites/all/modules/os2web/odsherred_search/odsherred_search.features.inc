<?php
/**
 * @file
 * odsherred_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function odsherred_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elasticsearch_connector" && $api == "elasticsearch_connector_defaults") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function odsherred_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function odsherred_search_default_search_api_index() {
  $items = array();
  $items['odsherred_intra'] = entity_import('search_api_index', '{
    "name" : "Odsherred Intra",
    "machine_name" : "odsherred_intra",
    "description" : null,
    "server" : "odsherred_intra",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "index_name" : { "index" : "odsherred_intra", "cluster_id" : "odsherred_intra" },
      "collect_index_statistics" : 0,
      "log_only_not_found" : 0,
      "index_statistics_ttl" : "365d",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_location" : { "type" : "string" },
        "field_os2intra_canteen_menu_date" : { "type" : "date" },
        "field_os2intra_grouptype" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_os2intra_message_sticky" : { "type" : "boolean" },
        "field_os2web_base_field_edi_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_os2web_base_field_edi_tags:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_topics" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "nid" : { "type" : "integer" },
        "og_group_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "title" : { "type" : "text" },
        "title_field" : { "type" : "text" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "poll" : "poll",
              "event" : "event",
              "os2web_base_rotating_image" : "os2web_base_rotating_image",
              "os2web_base_gallery" : "os2web_base_gallery",
              "group" : "group",
              "os2web_base_contentpage" : "os2web_base_contentpage",
              "post" : "post",
              "os2intra_base_page" : "os2intra_base_page",
              "os2web_base_news" : "os2web_base_news",
              "page" : "page",
              "question" : "question",
              "answer" : "answer",
              "webform" : "webform",
              "wiki" : "wiki",
              "os2web_base_iframe" : "os2web_base_iframe"
            }
          }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : { "status" : 0, "weight" : "15", "settings" : { "fields" : [] } },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        },
        "search_api_elasticsearch_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "excerpt_fragments" : "3",
            "concatenator" : "...",
            "highlight" : "always"
          }
        },
        "search_api_elasticsearch_prefix_search" : { "status" : 0, "weight" : "35", "settings" : { "fields" : [] } }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['odsherred_intra_users'] = entity_import('search_api_index', '{
    "name" : "Odsherred Intra Users",
    "machine_name" : "odsherred_intra_users",
    "description" : null,
    "server" : "odsherred_intra",
    "item_type" : "user",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "index_name" : { "index" : "odsherred_intra_users", "cluster_id" : "odsherred_intra" },
      "collect_index_statistics" : 0,
      "log_only_not_found" : 0,
      "index_statistics_ttl" : "365d",
      "fields" : {
        "field_name_first" : { "type" : "text" },
        "field_name_last" : { "type" : "text" },
        "field_os2intra_department_ref" : { "type" : "integer", "entity_type" : "node" },
        "field_os2intra_import_groups" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_os2intra_user_interests" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_os2intra_user_titles" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "name" : { "type" : "text" },
        "roles" : { "type" : "list\\u003Cinteger\\u003E" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "uid" : { "type" : "integer" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_role_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "roles" : [] }
        },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_user_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Realname",
                "type" : "fulltext",
                "fields" : [ "field_name_first", "field_name_last" ],
                "description" : "A Fulltext aggregation of the following fields: First Name, Last Name."
              }
            }
          }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "name" : true, "field_name_first" : true, "field_name_last" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "name" : true, "field_name_first" : true, "field_name_last" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : { "name" : true, "field_name_first" : true, "field_name_last" : true } }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "name" : true, "field_name_first" : true, "field_name_last" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "name" : true, "field_name_first" : true, "field_name_last" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        },
        "search_api_elasticsearch_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "excerpt_fragments" : "3",
            "concatenator" : "...",
            "highlight" : "always"
          }
        },
        "search_api_elasticsearch_prefix_search" : {
          "status" : 0,
          "weight" : "35",
          "settings" : { "fields" : { "name" : true, "field_name_first" : true, "field_name_last" : true } }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function odsherred_search_default_search_api_server() {
  $items = array();
  $items['odsherred_intra'] = entity_import('search_api_server', '{
    "name" : "Odsherred Intra",
    "machine_name" : "odsherred_intra",
    "description" : "",
    "class" : "search_api_elasticsearch_connector",
    "options" : { "cluster" : "odsherred_intra", "facet_limit" : "10" },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
