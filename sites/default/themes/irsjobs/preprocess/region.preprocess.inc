<?php

/**
 * @file
 * Contains a pre-process hook for 'region'.
 */

/**
 * Note:
 * Omega follows the BEM naming convention model for CSS Classes.
 * @see https://css-tricks.com/bem-101/ for more information.
 */

/**
 * Implements hook_preprocess_region().
 */
function irsjobs_preprocess_region(&$variables) {
  // Revert the class naming conventions for regional constructs

  // Use BEM syntax for the modifier class.
  $css_region_name = drupal_clean_css_identifier($variables['region']);
  $variables['classes_array'] =
    preg_replace('/^l-region--' . $css_region_name . '$/',
                 'region--' . $css_region_name,
                 $variables['classes_array']);

  // Use the prefix "l-" on region class names as described in SMACSS.
  $variables['classes_array'] =
    preg_replace('/^l-region$/',
                 'region',
                 $variables['classes_array']);

  switch ($variables['region']) {
    // Add additional variables to Branding region
    case 'branding':
      $variables['front_page']  = url();
      $variables['logo']        = theme_get_setting('logo');
      $variables['site_name']   = (theme_get_setting('toggle_name') ? filter_xss_admin(variable_get('site_name', 'Drupal')) : '');
      $variables['site_slogan'] = (theme_get_setting('toggle_slogan') ? filter_xss_admin(variable_get('site_slogan', '')) : '');
      break;

    // Add additional variables to Header First region.
    case 'header_first':
      $variables['title']      = drupal_get_title();
      $variables['breadcrumb'] = menu_get_active_breadcrumb();
      $region_node = node_load(arg(1));
      if (isset($region_node->field_tagline['und'][0]['value'])) {
        $variables['page_tagline'] = $region_node->field_tagline['und'][0]['value'];
      }
      break;

    default:
      break;
  }
}
