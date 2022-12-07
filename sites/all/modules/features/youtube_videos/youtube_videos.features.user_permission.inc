<?php

/**
 * @file
 * youtube_videos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function youtube_videos_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create youtube_videos content'.
  $permissions['create youtube_videos content'] = array(
    'name' => 'create youtube_videos content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any youtube_videos content'.
  $permissions['delete any youtube_videos content'] = array(
    'name' => 'delete any youtube_videos content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own youtube_videos content'.
  $permissions['delete own youtube_videos content'] = array(
    'name' => 'delete own youtube_videos content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any youtube_videos content'.
  $permissions['edit any youtube_videos content'] = array(
    'name' => 'edit any youtube_videos content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own youtube_videos content'.
  $permissions['edit own youtube_videos content'] = array(
    'name' => 'edit own youtube_videos content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish any youtube_videos content'.
  $permissions['publish any youtube_videos content'] = array(
    'name' => 'publish any youtube_videos content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable youtube_videos content'.
  $permissions['publish editable youtube_videos content'] = array(
    'name' => 'publish editable youtube_videos content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own youtube_videos content'.
  $permissions['publish own youtube_videos content'] = array(
    'name' => 'publish own youtube_videos content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any youtube_videos content'.
  $permissions['unpublish any youtube_videos content'] = array(
    'name' => 'unpublish any youtube_videos content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable youtube_videos content'.
  $permissions['unpublish editable youtube_videos content'] = array(
    'name' => 'unpublish editable youtube_videos content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own youtube_videos content'.
  $permissions['unpublish own youtube_videos content'] = array(
    'name' => 'unpublish own youtube_videos content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'view any unpublished youtube_videos content'.
  $permissions['view any unpublished youtube_videos content'] = array(
    'name' => 'view any unpublished youtube_videos content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
