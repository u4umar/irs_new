<?php

/**
 * @file
 * homepage_showcase.features.inc
 */

/**
 * Implements hook_node_info().
 */
function homepage_showcase_node_info() {
  $items = array(
    'showcase' => array(
      'name' => t('Homepage Showcase'),
      'base' => 'node_content',
      'description' => t('Showcase of an image with supporting text fields and links that will appear in a rotating carousel on the homepage of jobs.irs.gov'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
