<?php

/**
 * @file
 * featured_subpage_imagery.features.inc
 */

/**
 * Implements hook_node_info().
 */
function featured_subpage_imagery_node_info() {
  $items = array(
    'featured_subpage_imagery' => array(
      'name' => t('Featured Subpage Imagery'),
      'base' => 'node_content',
      'description' => t('This content type is a DEVELOPER ONLY option used to manage the selection of header imagery presented above the page title in the header. If no image is selected for an individual page, it will default to the content type with the "Make this default" radio field enabled.'),
      'has_title' => '1',
      'title_label' => t('Internal Title Reference'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
