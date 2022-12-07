<?php
/**
 * @file
 * feature_usa_jobs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_usa_jobs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_usa_jobs_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_usa_jobs_node_info() {
  $items = array(
    'usajobs' => array(
      'name' => t('USAJobs'),
      'base' => 'node_content',
      'description' => t('Jobs content from the USAJobs feed'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
