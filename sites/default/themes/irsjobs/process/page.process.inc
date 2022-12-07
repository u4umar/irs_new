<?php

/**
 * Implements hook_process_page().
 */
function irsjobs_process_page(&$variables) {
  // You can use process hooks to modify the variables before they are passed to
  // the theme function or template file.

  // Process Main Menu Object to Javascript for Mobile Navigation
  // @see js/mobileNav.behaviors.js
  //
  // Normally we could call this using module_invoke('menu_block', 'block_view', 1)
  // to generate duplicate rendered output of the target menu system with
  // the Menu Block module; however, since we modified the central
  // navigation for multiple display variants using hook_menu_block_tree_alter()
  // in our custom "Irsjobs Nav" module, we have to directly call menu_build_tree()
  //
  // @see the Menu module and API for more information.

  $tree = menu_build_tree('main-menu');

  if ($output = menu_tree_output($tree)) {
    $irsjobsMainMenuLinks = render($output);

    drupal_add_js(array('irsjobsMobileNavigation' => $irsjobsMainMenuLinks),
                  array('type' => 'setting'));
  }

  // Process Search Form to Javascript for Mobile Navigation
  if ($irsjobsMobileSearch = drupal_get_form('search_block_form')) {
    $irsjobsMobileSearch = render($irsjobsMobileSearch);

    drupal_add_js(array('irsjobsMobileSearch' => $irsjobsMobileSearch),
                  array('type' => 'setting'));
  }

  // Add variables for mobile branding
  drupal_add_js(array('irsjobsMobileBranding' => $variables['logo']),
                array('type' => 'setting'));
  drupal_add_js(array('irsjobsMobileHomeText' => t('Home')),
                array('type' => 'setting'));
}
