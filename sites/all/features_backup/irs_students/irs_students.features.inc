<?php
/**
 * @file
 * irs_students.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function irs_students_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function irs_students_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function irs_students_node_info() {
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
  return $items;
}
