<?php

/**
 * @file
 * usajob_vacancies.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function usajob_vacancies_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create usajobs content'.
  $permissions['create usajobs content'] = array(
    'name' => 'create usajobs content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any usajobs content'.
  $permissions['delete any usajobs content'] = array(
    'name' => 'delete any usajobs content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own usajobs content'.
  $permissions['delete own usajobs content'] = array(
    'name' => 'delete own usajobs content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any usajobs content'.
  $permissions['edit any usajobs content'] = array(
    'name' => 'edit any usajobs content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own usajobs content'.
  $permissions['edit own usajobs content'] = array(
    'name' => 'edit own usajobs content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish any usajobs content'.
  $permissions['publish any usajobs content'] = array(
    'name' => 'publish any usajobs content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable usajobs content'.
  $permissions['publish editable usajobs content'] = array(
    'name' => 'publish editable usajobs content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own usajobs content'.
  $permissions['publish own usajobs content'] = array(
    'name' => 'publish own usajobs content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any usajobs content'.
  $permissions['unpublish any usajobs content'] = array(
    'name' => 'unpublish any usajobs content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable usajobs content'.
  $permissions['unpublish editable usajobs content'] = array(
    'name' => 'unpublish editable usajobs content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own usajobs content'.
  $permissions['unpublish own usajobs content'] = array(
    'name' => 'unpublish own usajobs content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'view any unpublished usajobs content'.
  $permissions['view any unpublished usajobs content'] = array(
    'name' => 'view any unpublished usajobs content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
