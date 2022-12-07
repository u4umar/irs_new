<?php

/**
 * @file
 * salary_table.features.inc
 */

/**
 * Implements hook_node_info().
 */
function salary_table_node_info() {
  $items = array(
    'salary_table' => array(
      'name' => t('Salary Table'),
      'base' => 'node_content',
      'description' => t('Use <em>Salary Tables</em> to create a salary table for a locality with an effective date.'),
      'has_title' => '1',
      'title_label' => t('Locality'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
