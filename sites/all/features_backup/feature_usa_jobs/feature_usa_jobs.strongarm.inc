<?php
/**
 * @file
 * feature_usa_jobs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_usa_jobs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_usajobs';
  $strongarm->value = 0;
  $export['comment_anonymous_usajobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_usajobs';
  $strongarm->value = 1;
  $export['comment_default_mode_usajobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_usajobs';
  $strongarm->value = '50';
  $export['comment_default_per_page_usajobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_usajobs';
  $strongarm->value = 1;
  $export['comment_form_location_usajobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_usajobs';
  $strongarm->value = '1';
  $export['comment_preview_usajobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_usajobs';
  $strongarm->value = 1;
  $export['comment_subject_field_usajobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_usajobs';
  $strongarm->value = '2';
  $export['comment_usajobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_irs_jobs_short';
  $strongarm->value = 'm/d/Y';
  $export['date_format_irs_jobs_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__usajobs';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '22',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '20',
        ),
        'redirect' => array(
          'weight' => '21',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__usajobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_usajobs';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_usajobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_usajobs';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_usajobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_usajobs';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_usajobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_usajobs';
  $strongarm->value = '1';
  $export['node_preview_usajobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_usajobs';
  $strongarm->value = 1;
  $export['node_submitted_usajobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_usajobs';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_usajobs'] = $strongarm;

  return $export;
}
