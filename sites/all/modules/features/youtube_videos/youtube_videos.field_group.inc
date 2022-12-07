<?php

/**
 * @file
 * youtube_videos.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function youtube_videos_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_yt_metadata_group|node|youtube_videos|form';
  $field_group->group_name = 'group_yt_metadata_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'youtube_videos';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_yt_overview';
  $field_group->data = array(
    'label' => 'Video Metadata',
    'weight' => '21',
    'children' => array(
      0 => 'field_youtube_external_link',
      1 => 'field_youtube_duration',
      2 => 'field_youtube_meta_views',
      3 => 'field_youtube_video_object',
      4 => 'field_youtube_id',
      5 => 'field_youtube_embed',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-yt-metadata-group field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_yt_overview_group|node|youtube_videos|form';
  $field_group->group_name = 'group_yt_overview_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'youtube_videos';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_yt_overview';
  $field_group->data = array(
    'label' => 'Video Overview',
    'weight' => '15',
    'children' => array(
      0 => 'body',
      1 => 'field_youtube_thumbnail',
      2 => 'field_youtube_categories',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-yt-overview-group field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_yt_overview|node|youtube_videos|form';
  $field_group->group_name = 'group_yt_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'youtube_videos';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video Overview',
    'weight' => '0',
    'children' => array(
      0 => 'group_yt_metadata_group',
      1 => 'group_yt_overview_group',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Video Metadata');
  t('Video Overview');

  return $field_groups;
}
