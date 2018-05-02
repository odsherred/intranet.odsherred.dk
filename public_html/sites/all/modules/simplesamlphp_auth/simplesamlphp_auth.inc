<?php

// Helper functions --------------------------------------

/**
 * Checks to see if authentication via SimpleSAMLphp should be activated.
 *
 * @param bool $show_inactive_msg
 *   Whether to display the "module not activated" message
 *
 * @return bool
 *   TRUE/FALSE
 */
function _simplesamlphp_auth_isEnabled($show_inactive_msg = FALSE) {
  global $user;

  $failure      = NULL;
  $is_activated = variable_get('simplesamlphp_auth_activate');
  $basedir      = variable_get('simplesamlphp_auth_installdir', '/var/simplesamlphp');

  if ($is_activated) {
    // Make sure we know where SimpleSAMLphp is.
    if (!file_exists($basedir)) {
      $failure = t('SimpleSAMLphp could not be found at %basedir . The simplesamlphp_auth module cannot function until the path to the local SimpleSAMLphp instance is configured.', array('%basedir' => $basedir));
      watchdog('simplesamlphp_auth', $failure, NULL, WATCHDOG_WARNING);
    }
  }

  // If there were no failures, then it should be activated.
  if (!$failure) {
    return TRUE;
  }
  else {

    // Communicate but don't be too annoying.
    if ($show_inactive_msg && (1 == $user->uid || user_access('access administration pages')) && (preg_match('/admin\/people/', request_uri()) || preg_match('/admin\/modules/', request_uri()) || preg_match('/admin\/config/', request_uri()))) {
      drupal_set_message($failure);
    }
  }
  return FALSE;
}