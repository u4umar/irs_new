<?php

/**
 * @file
 * job_descriptions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function job_descriptions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create job_descriptions content'.
  $permissions['create job_descriptions content'] = array(
    'name' => 'create job_descriptions content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any job_descriptions content'.
  $permissions['delete any job_descriptions content'] = array(
    'name' => 'delete any job_descriptions content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own job_descriptions content'.
  $permissions['delete own job_descriptions content'] = array(
    'name' => 'delete own job_descriptions content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any job_descriptions content'.
  $permissions['edit any job_descriptions content'] = array(
    'name' => 'edit any job_descriptions content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own job_descriptions content'.
  $permissions['edit own job_descriptions content'] = array(
    'name' => 'edit own job_descriptions content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish any job_descriptions content'.
  $permissions['publish any job_descriptions content'] = array(
    'name' => 'publish any job_descriptions content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable job_descriptions content'.
  $permissions['publish editable job_descriptions content'] = array(
    'name' => 'publish editable job_descriptions content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own job_descriptions content'.
  $permissions['publish own job_descriptions content'] = array(
    'name' => 'publish own job_descriptions content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any job_descriptions content'.
  $permissions['unpublish any job_descriptions content'] = array(
    'name' => 'unpublish any job_descriptions content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable job_descriptions content'.
  $permissions['unpublish editable job_descriptions content'] = array(
    'name' => 'unpublish editable job_descriptions content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own job_descriptions content'.
  $permissions['unpublish own job_descriptions content'] = array(
    'name' => 'unpublish own job_descriptions content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'view any unpublished job_descriptions content'.
  $permissions['view any unpublished job_descriptions content'] = array(
    'name' => 'view any unpublished job_descriptions content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
