<?php

/**
 * @file
 * usajob_vacancies.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function usajob_vacancies_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_locations|node|usajobs|form';
  $field_group->group_name = 'group_locations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'usajobs';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vacancy_info';
  $field_group->data = array(
    'label' => 'Work Locations',
    'weight' => '7',
    'children' => array(
      0 => 'field_usajobs_locations',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-locations field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_salary|node|usajobs|form';
  $field_group->group_name = 'group_salary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'usajobs';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vacancy_info';
  $field_group->data = array(
    'label' => 'Remuneration / Salary',
    'weight' => '6',
    'children' => array(
      0 => 'field_usajobs_pay_plan',
      1 => 'field_usajobs_salary_base',
      2 => 'field_usajobs_salary_max',
      3 => 'field_usajobs_salary_min',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-salary field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vacancy_details|node|usajobs|form';
  $field_group->group_name = 'group_vacancy_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'usajobs';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vacancy_info';
  $field_group->data = array(
    'label' => 'Vacancy Details',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_usajobs_doc_id',
      2 => 'field_usajobs_who_apply',
      3 => 'field_usajobs_date_start',
      4 => 'field_usajobs_date_end',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vacancy-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vacancy_info|node|usajobs|form';
  $field_group->group_name = 'group_vacancy_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'usajobs';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vacancy Information',
    'weight' => '0',
    'children' => array(
      0 => 'group_vacancy_overview',
      1 => 'group_vacancy_details',
      2 => 'group_salary',
      3 => 'group_worktype',
      4 => 'group_locations',
      5 => 'group_work_series',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-vacancy-info field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vacancy_overview|node|usajobs|form';
  $field_group->group_name = 'group_vacancy_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'usajobs';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vacancy_info';
  $field_group->data = array(
    'label' => 'Vacancy Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_usajobs_no',
      1 => 'field_usajobs_category_ref',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vacancy-overview field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_work_series|node|usajobs|form';
  $field_group->group_name = 'group_work_series';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'usajobs';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vacancy_info';
  $field_group->data = array(
    'label' => 'Work Series / Grade',
    'weight' => '3',
    'children' => array(
      0 => 'field_usajobs_agency',
      1 => 'field_usajobs_organization',
      2 => 'field_usajobs_series',
      3 => 'field_usajobs_gslevel_ref',
      4 => 'field_usajob_gslevel_untagged',
      5 => 'field_usajobs_grade_low',
      6 => 'field_usajobs_grade_high',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-work-series field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_worktype|node|usajobs|form';
  $field_group->group_name = 'group_worktype';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'usajobs';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vacancy_info';
  $field_group->data = array(
    'label' => 'Work Type Information',
    'weight' => '4',
    'children' => array(
      0 => 'field_usajobs_work_schedule',
      1 => 'field_usajobs_type_specification',
      2 => 'field_field_usajobs_work_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-worktype field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Remuneration / Salary');
  t('Vacancy Details');
  t('Vacancy Information');
  t('Work Locations');
  t('Work Series / Grade');
  t('Work Type Information');

  return $field_groups;
}
