<?php

/**
 * @file
 * download.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function download_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create download content'.
  $permissions['create download content'] = array(
    'name' => 'create download content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'define view for terms in download_category'.
  $permissions['define view for terms in download_category'] = array(
    'name' => 'define view for terms in download_category',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary download_category'.
  $permissions['define view for vocabulary download_category'] = array(
    'name' => 'define view for vocabulary download_category',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'delete any download content'.
  $permissions['delete any download content'] = array(
    'name' => 'delete any download content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own download content'.
  $permissions['delete own download content'] = array(
    'name' => 'delete own download content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in download_category'.
  $permissions['delete terms in download_category'] = array(
    'name' => 'delete terms in download_category',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any download content'.
  $permissions['edit any download content'] = array(
    'name' => 'edit any download content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own download content'.
  $permissions['edit own download content'] = array(
    'name' => 'edit own download content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in download_category'.
  $permissions['edit terms in download_category'] = array(
    'name' => 'edit terms in download_category',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'publish any download content'.
  $permissions['publish any download content'] = array(
    'name' => 'publish any download content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable download content'.
  $permissions['publish editable download content'] = array(
    'name' => 'publish editable download content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own download content'.
  $permissions['publish own download content'] = array(
    'name' => 'publish own download content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any download content'.
  $permissions['unpublish any download content'] = array(
    'name' => 'unpublish any download content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable download content'.
  $permissions['unpublish editable download content'] = array(
    'name' => 'unpublish editable download content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own download content'.
  $permissions['unpublish own download content'] = array(
    'name' => 'unpublish own download content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'view any unpublished download content'.
  $permissions['view any unpublished download content'] = array(
    'name' => 'view any unpublished download content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
