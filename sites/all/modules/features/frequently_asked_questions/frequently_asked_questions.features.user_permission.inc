<?php

/**
 * @file
 * frequently_asked_questions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function frequently_asked_questions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create frequently_asked_questions content'.
  $permissions['create frequently_asked_questions content'] = array(
    'name' => 'create frequently_asked_questions content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any frequently_asked_questions content'.
  $permissions['delete any frequently_asked_questions content'] = array(
    'name' => 'delete any frequently_asked_questions content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own frequently_asked_questions content'.
  $permissions['delete own frequently_asked_questions content'] = array(
    'name' => 'delete own frequently_asked_questions content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any frequently_asked_questions content'.
  $permissions['edit any frequently_asked_questions content'] = array(
    'name' => 'edit any frequently_asked_questions content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own frequently_asked_questions content'.
  $permissions['edit own frequently_asked_questions content'] = array(
    'name' => 'edit own frequently_asked_questions content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Developer' => 'Developer',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish any frequently_asked_questions content'.
  $permissions['publish any frequently_asked_questions content'] = array(
    'name' => 'publish any frequently_asked_questions content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable frequently_asked_questions content'.
  $permissions['publish editable frequently_asked_questions content'] = array(
    'name' => 'publish editable frequently_asked_questions content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own frequently_asked_questions content'.
  $permissions['publish own frequently_asked_questions content'] = array(
    'name' => 'publish own frequently_asked_questions content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any frequently_asked_questions content'.
  $permissions['unpublish any frequently_asked_questions content'] = array(
    'name' => 'unpublish any frequently_asked_questions content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable frequently_asked_questions content'.
  $permissions['unpublish editable frequently_asked_questions content'] = array(
    'name' => 'unpublish editable frequently_asked_questions content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own frequently_asked_questions content'.
  $permissions['unpublish own frequently_asked_questions content'] = array(
    'name' => 'unpublish own frequently_asked_questions content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'view any unpublished frequently_asked_questions content'.
  $permissions['view any unpublished frequently_asked_questions content'] = array(
    'name' => 'view any unpublished frequently_asked_questions content',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Content Manager' => 'Content Manager',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
