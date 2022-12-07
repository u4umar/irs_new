<?php

/**
 * @file
 * system_pages.features.inc
 */

/**
 * Implements hook_node_info().
 */
function system_pages_node_info() {
  $items = array(
    'system_pages' => array(
      'name' => t('System Pages'),
      'base' => 'node_content',
      'description' => t('This is a clone of the format used for the content type Basic Pages; however, it will only be used for system pages (500, 403, 404, Contact Confirmation) that you do not wish a content contributor to see when accessing data via the Entity Reference field.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
