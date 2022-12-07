<?php

/**
 * @file
 * featured_subpage_imagery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function featured_subpage_imagery_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create featured_subpage_imagery content'.
  $permissions['create featured_subpage_imagery content'] = array(
    'name' => 'create featured_subpage_imagery content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any featured_subpage_imagery content'.
  $permissions['delete any featured_subpage_imagery content'] = array(
    'name' => 'delete any featured_subpage_imagery content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own featured_subpage_imagery content'.
  $permissions['delete own featured_subpage_imagery content'] = array(
    'name' => 'delete own featured_subpage_imagery content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any featured_subpage_imagery content'.
  $permissions['edit any featured_subpage_imagery content'] = array(
    'name' => 'edit any featured_subpage_imagery content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own featured_subpage_imagery content'.
  $permissions['edit own featured_subpage_imagery content'] = array(
    'name' => 'edit own featured_subpage_imagery content',
    'roles' => array(
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish any featured_subpage_imagery content'.
  $permissions['publish any featured_subpage_imagery content'] = array(
    'name' => 'publish any featured_subpage_imagery content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable featured_subpage_imagery content'.
  $permissions['publish editable featured_subpage_imagery content'] = array(
    'name' => 'publish editable featured_subpage_imagery content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own featured_subpage_imagery content'.
  $permissions['publish own featured_subpage_imagery content'] = array(
    'name' => 'publish own featured_subpage_imagery content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any featured_subpage_imagery content'.
  $permissions['unpublish any featured_subpage_imagery content'] = array(
    'name' => 'unpublish any featured_subpage_imagery content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable featured_subpage_imagery content'.
  $permissions['unpublish editable featured_subpage_imagery content'] = array(
    'name' => 'unpublish editable featured_subpage_imagery content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own featured_subpage_imagery content'.
  $permissions['unpublish own featured_subpage_imagery content'] = array(
    'name' => 'unpublish own featured_subpage_imagery content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'view any unpublished featured_subpage_imagery content'.
  $permissions['view any unpublished featured_subpage_imagery content'] = array(
    'name' => 'view any unpublished featured_subpage_imagery content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
