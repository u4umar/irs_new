<?php

/**
 * @file
 * salary_table.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function salary_table_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create salary_table content'.
  $permissions['create salary_table content'] = array(
    'name' => 'create salary_table content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any salary_table content'.
  $permissions['delete any salary_table content'] = array(
    'name' => 'delete any salary_table content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own salary_table content'.
  $permissions['delete own salary_table content'] = array(
    'name' => 'delete own salary_table content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any salary_table content'.
  $permissions['edit any salary_table content'] = array(
    'name' => 'edit any salary_table content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own salary_table content'.
  $permissions['edit own salary_table content'] = array(
    'name' => 'edit own salary_table content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish any salary_table content'.
  $permissions['publish any salary_table content'] = array(
    'name' => 'publish any salary_table content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable salary_table content'.
  $permissions['publish editable salary_table content'] = array(
    'name' => 'publish editable salary_table content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own salary_table content'.
  $permissions['publish own salary_table content'] = array(
    'name' => 'publish own salary_table content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any salary_table content'.
  $permissions['unpublish any salary_table content'] = array(
    'name' => 'unpublish any salary_table content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable salary_table content'.
  $permissions['unpublish editable salary_table content'] = array(
    'name' => 'unpublish editable salary_table content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own salary_table content'.
  $permissions['unpublish own salary_table content'] = array(
    'name' => 'unpublish own salary_table content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'view any unpublished salary_table content'.
  $permissions['view any unpublished salary_table content'] = array(
    'name' => 'view any unpublished salary_table content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
