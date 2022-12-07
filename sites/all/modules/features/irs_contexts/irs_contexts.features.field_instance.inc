<?php

/**
 * @file
 * irs_contexts.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function irs_contexts_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-application_process-field_weight'.
  $field_instances['node-application_process-field_weight'] = array(
    'bundle' => 'application_process',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_weight',
    'label' => 'Weight',
    'required' => FALSE,
    'settings' => array(
      'range' => 20,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'weight',
      'settings' => array(),
      'type' => 'weight_selector',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-frequently_asked_questions-field_weight'.
  $field_instances['node-frequently_asked_questions-field_weight'] = array(
    'bundle' => 'frequently_asked_questions',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_weight',
    'label' => 'Weight',
    'required' => FALSE,
    'settings' => array(
      'range' => 20,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'weight',
      'settings' => array(),
      'type' => 'weight_selector',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Weight');

  return $field_instances;
}
