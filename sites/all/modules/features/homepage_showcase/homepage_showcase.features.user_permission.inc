<?php

/**
 * @file
 * homepage_showcase.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function homepage_showcase_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create showcase content'.
  $permissions['create showcase content'] = array(
    'name' => 'create showcase content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any showcase content'.
  $permissions['delete any showcase content'] = array(
    'name' => 'delete any showcase content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own showcase content'.
  $permissions['delete own showcase content'] = array(
    'name' => 'delete own showcase content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any showcase content'.
  $permissions['edit any showcase content'] = array(
    'name' => 'edit any showcase content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own showcase content'.
  $permissions['edit own showcase content'] = array(
    'name' => 'edit own showcase content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish any showcase content'.
  $permissions['publish any showcase content'] = array(
    'name' => 'publish any showcase content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable showcase content'.
  $permissions['publish editable showcase content'] = array(
    'name' => 'publish editable showcase content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own showcase content'.
  $permissions['publish own showcase content'] = array(
    'name' => 'publish own showcase content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any showcase content'.
  $permissions['unpublish any showcase content'] = array(
    'name' => 'unpublish any showcase content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable showcase content'.
  $permissions['unpublish editable showcase content'] = array(
    'name' => 'unpublish editable showcase content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own showcase content'.
  $permissions['unpublish own showcase content'] = array(
    'name' => 'unpublish own showcase content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'view any unpublished showcase content'.
  $permissions['view any unpublished showcase content'] = array(
    'name' => 'view any unpublished showcase content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
