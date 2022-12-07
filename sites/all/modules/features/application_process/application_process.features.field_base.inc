<?php

/**
 * @file
 * application_process.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function application_process_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_app_process_icon_thumbnail'.
  $field_bases['field_app_process_icon_thumbnail'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_app_process_icon_thumbnail',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
