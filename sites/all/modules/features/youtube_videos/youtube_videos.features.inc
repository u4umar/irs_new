<?php

/**
 * @file
 * youtube_videos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function youtube_videos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function youtube_videos_node_info() {
  $items = array(
    'youtube_videos' => array(
      'name' => t('YouTube Videos'),
      'base' => 'node_content',
      'description' => t('YouTube videos imported from http://gdata.youtube.com/feeds/api/playlists/C229B1637C71A518 via Feeds Importers'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
