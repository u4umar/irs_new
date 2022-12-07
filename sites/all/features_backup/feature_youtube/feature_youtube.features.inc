<?php
/**
 * @file
 * feature_youtube.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_youtube_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_youtube_node_info() {
  $items = array(
    'youtube' => array(
      'name' => t('Youtube'),
      'base' => 'node_content',
      'description' => t('Feeds from the IRS Careers Youtube Playlist'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
