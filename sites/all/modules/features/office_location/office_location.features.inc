<?php

/**
 * @file
 * office_location.features.inc
 */

/**
 * Implements hook_node_info().
 */
function office_location_node_info() {
  $items = array(
    'location' => array(
      'name' => t('Office Location'),
      'base' => 'node_content',
      'description' => t('IRS Careers Office location, specified by scope of activity (main vs satellite)'),
      'has_title' => '1',
      'title_label' => t('Location'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
