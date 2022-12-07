<?php

/**
 * @file
 * success_story.features.inc
 */

/**
 * Implements hook_node_info().
 */
function success_story_node_info() {
  $items = array(
    'success_story' => array(
      'name' => t('Success Story'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Person Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
