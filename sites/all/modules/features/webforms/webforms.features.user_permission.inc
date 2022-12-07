<?php

/**
 * @file
 * webforms.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function webforms_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'publish any webform content'.
  $permissions['publish any webform content'] = array(
    'name' => 'publish any webform content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable webform content'.
  $permissions['publish editable webform content'] = array(
    'name' => 'publish editable webform content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own webform content'.
  $permissions['publish own webform content'] = array(
    'name' => 'publish own webform content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any webform content'.
  $permissions['unpublish any webform content'] = array(
    'name' => 'unpublish any webform content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable webform content'.
  $permissions['unpublish editable webform content'] = array(
    'name' => 'unpublish editable webform content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own webform content'.
  $permissions['unpublish own webform content'] = array(
    'name' => 'unpublish own webform content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'view any unpublished webform content'.
  $permissions['view any unpublished webform content'] = array(
    'name' => 'view any unpublished webform content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
