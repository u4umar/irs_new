<?php

/**
 * @file
 * application_process.features.inc
 */

/**
 * Implements hook_node_info().
 */
function application_process_node_info() {
  $items = array(
    'application_process' => array(
      'name' => t('Application Process'),
      'base' => 'node_content',
      'description' => t('Use <em>Application Process</em> to describe steps in the application process within Internal Revenue Service.'),
      'has_title' => '1',
      'title_label' => t('Process Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
