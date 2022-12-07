<?php

/**
 * @file
 * frequently_asked_questions.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function frequently_asked_questions_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_weight'.
  $field_bases['field_weight'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_weight',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'weight',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'weight',
  );

  return $field_bases;
}
