<?php

/**
 * @file
 * success_story.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function success_story_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create success_story content'.
  $permissions['create success_story content'] = array(
    'name' => 'create success_story content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any success_story content'.
  $permissions['delete any success_story content'] = array(
    'name' => 'delete any success_story content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own success_story content'.
  $permissions['delete own success_story content'] = array(
    'name' => 'delete own success_story content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any success_story content'.
  $permissions['edit any success_story content'] = array(
    'name' => 'edit any success_story content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own success_story content'.
  $permissions['edit own success_story content'] = array(
    'name' => 'edit own success_story content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish any success_story content'.
  $permissions['publish any success_story content'] = array(
    'name' => 'publish any success_story content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable success_story content'.
  $permissions['publish editable success_story content'] = array(
    'name' => 'publish editable success_story content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own success_story content'.
  $permissions['publish own success_story content'] = array(
    'name' => 'publish own success_story content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any success_story content'.
  $permissions['unpublish any success_story content'] = array(
    'name' => 'unpublish any success_story content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable success_story content'.
  $permissions['unpublish editable success_story content'] = array(
    'name' => 'unpublish editable success_story content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own success_story content'.
  $permissions['unpublish own success_story content'] = array(
    'name' => 'unpublish own success_story content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'view any unpublished success_story content'.
  $permissions['view any unpublished success_story content'] = array(
    'name' => 'view any unpublished success_story content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
