<?php

/**
 * @file
 * system_pages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function system_pages_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create system_pages content'.
  $permissions['create system_pages content'] = array(
    'name' => 'create system_pages content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any system_pages content'.
  $permissions['delete any system_pages content'] = array(
    'name' => 'delete any system_pages content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own system_pages content'.
  $permissions['delete own system_pages content'] = array(
    'name' => 'delete own system_pages content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any system_pages content'.
  $permissions['edit any system_pages content'] = array(
    'name' => 'edit any system_pages content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own system_pages content'.
  $permissions['edit own system_pages content'] = array(
    'name' => 'edit own system_pages content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish any system_pages content'.
  $permissions['publish any system_pages content'] = array(
    'name' => 'publish any system_pages content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable system_pages content'.
  $permissions['publish editable system_pages content'] = array(
    'name' => 'publish editable system_pages content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own system_pages content'.
  $permissions['publish own system_pages content'] = array(
    'name' => 'publish own system_pages content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any system_pages content'.
  $permissions['unpublish any system_pages content'] = array(
    'name' => 'unpublish any system_pages content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable system_pages content'.
  $permissions['unpublish editable system_pages content'] = array(
    'name' => 'unpublish editable system_pages content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own system_pages content'.
  $permissions['unpublish own system_pages content'] = array(
    'name' => 'unpublish own system_pages content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'view any unpublished system_pages content'.
  $permissions['view any unpublished system_pages content'] = array(
    'name' => 'view any unpublished system_pages content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
