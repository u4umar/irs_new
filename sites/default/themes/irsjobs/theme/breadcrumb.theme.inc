<?php

/**
 * @file
 * Contains the theme function override for 'breadcrumb'.
 */

/**
 * Returns HTML for a breadcrumb trail.
 *
 * @ingroup themeable
 */
function irsjobs_breadcrumb($variables) {
  if (drupal_is_front_page()) {
    return false;
  }

  $node_path  = current_path();
  $path_alias = drupal_lookup_path('alias', $node_path);

  $home_crumb_array = array(
    l('Home', url('<front>', array('absolute' => TRUE)))
  );

  /* Search Results Breadcrumbs */
  if (preg_match('/^search/', $node_path)) {
    $variables['breadcrumb'] = $home_crumb_array;
  }

  /* Career Path Breadcrumbs */
  if (($found = strpos($path_alias, 'careers')) !== FALSE) {
    $variables['breadcrumb'] = $home_crumb_array;
  }

  /* FAQ Breadcrumbs */
  if (($found = strpos($path_alias, 'frequently-asked-questions')) !== FALSE) {
    $faq_page_url = url('frequently-asked-questions');

    $variables['breadcrumb']    = $home_crumb_array;
    $variables['breadcrumb'][1] = l('FAQs', $faq_page_url);
  }

  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    $current_crumb  = drupal_get_title();
    $crumbs         = '<ul class="breadcrumb">';

    foreach ($breadcrumb as $value) {
      $crumbs .= '<li>' . $value . '</li>';
    }

    $crumbs .= '<li class="active">' . $current_crumb . '</li>';
    $crumbs .= '</ul>';

    return $crumbs;
  }
}
