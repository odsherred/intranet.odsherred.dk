<?php
/**
 * @file
 * commons_notify.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commons_notify_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function commons_notify_default_message_type() {
  $items = array();
  $items['commons_notify_comment_created'] = entity_import('message_type', '{
    "name" : "commons_notify_comment_created",
    "description" : "Commons Notify: Comment created",
    "argument_keys" : [],
    "argument" : [],
    "category" : "commons_notify",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : {
      "da" : [
        {
          "value" : "Ny kommentar p\\u00e5 [message:field-target-nodes:0:title] i [message:field-target-nodes:0:og-group-ref:0:title]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003ENy kommentar p\\u00e5 [message:field-target-nodes:0:title] i [message:field-target-nodes:0:og-group-ref:0:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Hej [message:user:name],\\r\\n\\r\\n[message:field-target-comments:0:author] kommenterede p\\u00e5 [message:field-target-nodes:0:title] [commons-groups:in-groups-text]:\\r\\n\\r\\n[message:field-target-comments:0:body]\\r\\n\\r\\nBesvar: [message:field-target-comments:0:url]\\r\\nOpdater dine indstillinger: [site:url]\\/notification-settings",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EHej [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-comments:0:author] kommenterede p\\u00e5 [message:field-target-nodes:0:title] [commons-groups:in-groups-text]:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-comments:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EBesvar: [message:field-target-comments:0:url]\\u003Cbr \\/\\u003E\\nOpdater dine indstillinger: [site:url]\\/notification-settings\\u003C\\/p\\u003E\\n"
        }
      ],
      "en" : [
        {
          "value" : "Ny kommentar p\\u00e5 [message:field-target-nodes:0:title] i [message:field-target-nodes:0:og-group-ref:0:title]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003ENy kommentar p\\u00e5 [message:field-target-nodes:0:title] i [message:field-target-nodes:0:og-group-ref:0:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Hej [message:user:name],\\r\\n\\r\\n[message:field-target-comments:0:author] kommenterede p\\u00e5 [message:field-target-nodes:0:title] [commons-groups:in-groups-text]:\\r\\n\\r\\n[message:field-target-comments:0:body]\\r\\n\\r\\nBesvar: [message:field-target-comments:0:url]\\r\\nOpdater dine indstillinger: [site:url]\\/notification-settings",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EHej [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-comments:0:author] kommenterede p\\u00e5 [message:field-target-nodes:0:title] [commons-groups:in-groups-text]:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-comments:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EBesvar: [message:field-target-comments:0:url]\\u003Cbr \\/\\u003E\\nOpdater dine indstillinger: [site:url]\\/notification-settings\\u003C\\/p\\u003E\\n"
        }
      ],
      "und" : [
        {
          "value" : "Ny kommentar p\\u00e5 [message:field-target-nodes:0:title] i [message:field-target-nodes:0:og-group-ref:0:title]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003ENy kommentar p\\u00e5 [message:field-target-nodes:0:title] i [message:field-target-nodes:0:og-group-ref:0:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Hej [message:user:name],\\r\\n\\r\\n[message:field-target-comments:0:author] kommenterede p\\u00e5 [message:field-target-nodes:0:title] [commons-groups:in-groups-text]:[message:field-target-comments:0:body]\\r\\n\\r\\nBesvar: [message:field-target-comments:0:url]\\r\\nOpdater dine indstillinger: [site:url]\\/notification-settings",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EHej [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-comments:0:author] kommenterede p\\u00e5 [message:field-target-nodes:0:title] [commons-groups:in-groups-text]:[message:field-target-comments:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EBesvar: [message:field-target-comments:0:url]\\u003Cbr \\/\\u003E\\nOpdater dine indstillinger: [site:url]\\/notification-settings\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['commons_notify_node_created'] = entity_import('message_type', '{
    "name" : "commons_notify_node_created",
    "description" : "The notification sent when a user creates a node.",
    "argument_keys" : [],
    "argument" : [],
    "category" : "commons_notify",
    "data" : { "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" } },
    "language" : "",
    "arguments" : null,
    "message_text" : {
      "da" : [
        {
          "value" : "Ny [message:field-target-nodes:0:content-type] i [message:field-target-nodes:0:og-group-ref:0:title]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003ENy [message:field-target-nodes:0:content-type] i [message:field-target-nodes:0:og-group-ref:0:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Hej [message:user:name],\\r\\n\\r\\n[message:field-target-nodes:0:author] oprettede [message:field-target-nodes:0:content-type] \\u201c[message:field-target-nodes:0:title]\\u201d p\\u00e5 [site:name] [commons-groups:in-groups-text] i [message:field-target-nodes:0:created]:\\r\\n\\r\\n[message:field-target-nodes:0:body]\\r\\n\\r\\n\\r\\nPermalink: [message:field-target-nodes:0:url]\\r\\nTilf\\u00f8j kommentar: [message:field-target-nodes:0:url]#comment-form\\r\\n\\r\\nOpdater email indstillinger [site:url]user\\/[message:user:uid]\\/notification-settings",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EHej [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:0:author] oprettede [message:field-target-nodes:0:content-type] \\u201c[message:field-target-nodes:0:title]\\u201d p\\u00e5 [site:name] [commons-groups:in-groups-text] i [message:field-target-nodes:0:created]:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EPermalink: [message:field-target-nodes:0:url]\\u003Cbr \\/\\u003E\\nTilf\\u00f8j kommentar: [message:field-target-nodes:0:url]#comment-form\\u003C\\/p\\u003E\\n\\u003Cp\\u003EOpdater email indstillinger [site:url]user\\/[message:user:uid]\\/notification-settings\\u003C\\/p\\u003E\\n"
        }
      ],
      "und" : [
        {
          "value" : "Ny [message:field-target-nodes:0:content-type] i [message:field-target-nodes:0:og-group-ref:0:title]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003ENy [message:field-target-nodes:0:content-type] i [message:field-target-nodes:0:og-group-ref:0:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Hej [message:user:name],\\r\\n\\r\\n[message:field-target-nodes:0:author] oprettede [message:field-target-nodes:0:content-type] \\u201c[message:field-target-nodes:0:title]\\u201d p\\u00e5 [site:name] [commons-groups:in-groups-text] i [message:field-target-nodes:0:created]:\\r\\n\\r\\n[message:field-target-nodes:0:body]\\r\\n\\r\\n\\r\\nPermalink: [message:field-target-nodes:0:url]\\r\\nTilf\\u00f8j kommentar: [message:field-target-nodes:0:url]#comment-form\\r\\n\\r\\nOpdater email indstillinger [site:url]user\\/[message:user:uid]\\/notification-settings",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EHej [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:0:author] oprettede [message:field-target-nodes:0:content-type] \\u201c[message:field-target-nodes:0:title]\\u201d p\\u00e5 [site:name] [commons-groups:in-groups-text] i [message:field-target-nodes:0:created]:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EPermalink: [message:field-target-nodes:0:url]\\u003Cbr \\/\\u003E\\nTilf\\u00f8j kommentar: [message:field-target-nodes:0:url]#comment-form\\u003C\\/p\\u003E\\n\\u003Cp\\u003EOpdater email indstillinger [site:url]user\\/[message:user:uid]\\/notification-settings\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['commons_notify_node_created_no_groups'] = entity_import('message_type', '{
    "name" : "commons_notify_node_created_no_groups",
    "description" : "The notification sent when a user creates a node that is not in any groups",
    "argument_keys" : [],
    "argument" : [],
    "category" : "commons_notify",
    "data" : { "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" } },
    "language" : "",
    "arguments" : null,
    "message_text" : {
      "da" : [
        {
          "value" : "Ny [message:field-target-nodes:0:content-type] p\\u00e5 [site:name]: [message:field-target-nodes:0:title]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003ENy [message:field-target-nodes:0:content-type] p\\u00e5 [site:name]: [message:field-target-nodes:0:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Hej [message:user:name],\\r\\n\\r\\n[message:field-target-nodes:0:author] oprettede [message:field-target-nodes:0:content-type] \\u201c[message:field-target-nodes:0:title]\\u201d p\\u00e5 [site:name] [commons-groups:in-groups-text] i [message:field-target-nodes:0:created]:\\r\\n\\r\\n[message:field-target-nodes:0:body]\\r\\n\\r\\n\\r\\nPermalink: [message:field-target-nodes:0:url]\\r\\nTilf\\u00f8j kommentar [message:field-target-nodes:0:url]#comment-form\\r\\n\\r\\nOpdater email indstillinger [site:url]user\\/[message:user:uid]\\/notification-settings",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EHej [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:0:author] oprettede [message:field-target-nodes:0:content-type] \\u201c[message:field-target-nodes:0:title]\\u201d p\\u00e5 [site:name] [commons-groups:in-groups-text] i [message:field-target-nodes:0:created]:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EPermalink: [message:field-target-nodes:0:url]\\u003Cbr \\/\\u003E\\nTilf\\u00f8j kommentar [message:field-target-nodes:0:url]#comment-form\\u003C\\/p\\u003E\\n\\u003Cp\\u003EOpdater email indstillinger [site:url]user\\/[message:user:uid]\\/notification-settings\\u003C\\/p\\u003E\\n"
        }
      ],
      "und" : [
        {
          "value" : "Ny [message:field-target-nodes:0:content-type] p\\u00e5 [site:name]: [message:field-target-nodes:0:title]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003ENy [message:field-target-nodes:0:content-type] p\\u00e5 [site:name]: [message:field-target-nodes:0:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Hej [message:user:name],\\r\\n\\r\\n[message:field-target-nodes:0:author] oprettede [message:field-target-nodes:0:content-type] \\u201c[message:field-target-nodes:0:title]\\u201d p\\u00e5 [site:name] [commons-groups:in-groups-text] i [message:field-target-nodes:0:created]:\\r\\n\\r\\n[message:field-target-nodes:0:body]\\r\\n\\r\\n\\r\\nPermalink: [message:field-target-nodes:0:url]\\r\\nTilf\\u00f8j kommentar [message:field-target-nodes:0:url]#comment-form\\r\\n\\r\\nOpdater email indstillinger [site:url]user\\/[message:user:uid]\\/notification-settings",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EHej [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:0:author] oprettede [message:field-target-nodes:0:content-type] \\u201c[message:field-target-nodes:0:title]\\u201d p\\u00e5 [site:name] [commons-groups:in-groups-text] i [message:field-target-nodes:0:created]:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EPermalink: [message:field-target-nodes:0:url]\\u003Cbr \\/\\u003E\\nTilf\\u00f8j kommentar [message:field-target-nodes:0:url]#comment-form\\u003C\\/p\\u003E\\n\\u003Cp\\u003EOpdater email indstillinger [site:url]user\\/[message:user:uid]\\/notification-settings\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_message_type_category().
 */
function commons_notify_default_message_type_category() {
  $items = array();
  $items['commons_notify'] = entity_import('message_type_category', '{
    "category" : "commons_notify",
    "description" : "Commons Notify",
    "language" : "und",
    "rdf_mapping" : []
  }');
  return $items;
}
