<?php

/**
 * @file
 * download.features.inc
 */

/**
 * Implements hook_node_info().
 */
function download_node_info() {
  $items = array(
    'download' => array(
      'name' => t('Download'),
      'base' => 'node_content',
      'description' => t('A file available for public download through the downloads page.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
