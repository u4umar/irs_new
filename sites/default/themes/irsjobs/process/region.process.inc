<?php

/**
 * Implements hook_process_page().
 */
function irsjobs_process_region(&$variables) {
  // You can use process hooks to modify the variables before they are passed to
  // the theme function or template file.

  switch ($variables['region']) {
    // Add additional variables to Header First region.
    case 'header_first':
      $variables['breadcrumb'] =
        theme('breadcrumb', array('breadcrumb' => drupal_get_breadcrumb()));
      break;

    default:
    break;
  }
}
