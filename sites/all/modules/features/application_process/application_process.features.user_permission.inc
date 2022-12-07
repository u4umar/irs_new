<?php

/**
 * @file
 * application_process.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function application_process_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create application_process content'.
  $permissions['create application_process content'] = array(
    'name' => 'create application_process content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any application_process content'.
  $permissions['delete any application_process content'] = array(
    'name' => 'delete any application_process content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own application_process content'.
  $permissions['delete own application_process content'] = array(
    'name' => 'delete own application_process content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any application_process content'.
  $permissions['edit any application_process content'] = array(
    'name' => 'edit any application_process content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own application_process content'.
  $permissions['edit own application_process content'] = array(
    'name' => 'edit own application_process content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish any application_process content'.
  $permissions['publish any application_process content'] = array(
    'name' => 'publish any application_process content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable application_process content'.
  $permissions['publish editable application_process content'] = array(
    'name' => 'publish editable application_process content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own application_process content'.
  $permissions['publish own application_process content'] = array(
    'name' => 'publish own application_process content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any application_process content'.
  $permissions['unpublish any application_process content'] = array(
    'name' => 'unpublish any application_process content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable application_process content'.
  $permissions['unpublish editable application_process content'] = array(
    'name' => 'unpublish editable application_process content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own application_process content'.
  $permissions['unpublish own application_process content'] = array(
    'name' => 'unpublish own application_process content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'view any unpublished application_process content'.
  $permissions['view any unpublished application_process content'] = array(
    'name' => 'view any unpublished application_process content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
