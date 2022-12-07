<?php

/**
 * @file
 * frequently_asked_questions.features.inc
 */

/**
 * Implements hook_node_info().
 */
function frequently_asked_questions_node_info() {
  $items = array(
    'frequently_asked_questions' => array(
      'name' => t('Frequently Asked Questions'),
      'base' => 'node_content',
      'description' => t('Use <em>Frequently Asked Questions</em> to create question and answer responses related to the IRS Careers website.'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
