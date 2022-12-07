<?php
/**
 * @file
 * feature_usa_jobs.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feature_usa_jobs_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'usa_jobs';
  $feeds_importer->config = array(
    'name' => 'USA Jobs',
    'description' => 'USA Jobs feed importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.JobData.*',
        'sources' => array(
          'jsonpath_parser:0' => 'AnnouncementNumber',
          'jsonpath_parser:2' => 'DocumentID',
          'jsonpath_parser:6' => 'JobTitle',
          'jsonpath_parser:8' => 'OrganizationName',
          'jsonpath_parser:4' => 'Grade',
          'jsonpath_parser:7' => 'Locations',
          'jsonpath_parser:9' => 'PayPlan',
          'jsonpath_parser:10' => 'SalaryBasis',
          'jsonpath_parser:11' => 'SalaryMax',
          'jsonpath_parser:12' => 'SalaryMin',
          'jsonpath_parser:13' => 'Series',
          'jsonpath_parser:15' => 'WhoMayApplyText',
          'jsonpath_parser:16' => 'WorkSchedule',
          'jsonpath_parser:17' => 'WorkType',
          'jsonpath_parser:18' => 'AgencySubElement',
          'jsonpath_parser:19' => 'AnnouncementNumber',
          'jsonpath_parser:20' => 'JobSummary',
          'jsonpath_parser:21' => 'StartDate',
          'jsonpath_parser:22' => 'EndDate',
          'jsonpath_parser:23' => 'ApplyOnlineURL',
          'jsonpath_parser:24' => 'EndDate',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:6' => 0,
            'jsonpath_parser:8' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:7' => 0,
            'jsonpath_parser:9' => 0,
            'jsonpath_parser:10' => 0,
            'jsonpath_parser:11' => 0,
            'jsonpath_parser:12' => 0,
            'jsonpath_parser:13' => 0,
            'jsonpath_parser:15' => 0,
            'jsonpath_parser:16' => 0,
            'jsonpath_parser:17' => 0,
            'jsonpath_parser:18' => 0,
            'jsonpath_parser:19' => 0,
            'jsonpath_parser:20' => 0,
            'jsonpath_parser:21' => 0,
            'jsonpath_parser:22' => 0,
            'jsonpath_parser:23' => 0,
            'jsonpath_parser:24' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'field_usajobs_no',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'field_usajobs_doc_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:8',
            'target' => 'field_usajobs_organization',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_usajobs_grade',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'jsonpath_parser:7',
            'target' => 'field_usajobs_locations',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'jsonpath_parser:9',
            'target' => 'field_usajobs_pay_plan',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'jsonpath_parser:10',
            'target' => 'field_usajobs_salary_base',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'jsonpath_parser:11',
            'target' => 'field_usajobs_salary_max',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'jsonpath_parser:12',
            'target' => 'field_usajobs_salary_min',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'jsonpath_parser:13',
            'target' => 'field_usajobs_series',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'jsonpath_parser:15',
            'target' => 'field_usajobs_who_apply',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'jsonpath_parser:16',
            'target' => 'field_usajobs_work_schedule',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          13 => array(
            'source' => 'jsonpath_parser:17',
            'target' => 'field_usajobs_work_type',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          14 => array(
            'source' => 'jsonpath_parser:18',
            'target' => 'field_usajobs_agency',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'jsonpath_parser:19',
            'target' => 'guid',
            'unique' => 1,
          ),
          16 => array(
            'source' => 'jsonpath_parser:20',
            'target' => 'field_usajobs_import_summary',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'jsonpath_parser:21',
            'target' => 'field_usajobs_date_start:start',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'jsonpath_parser:22',
            'target' => 'field_usajobs_date_end:start',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'jsonpath_parser:23',
            'target' => 'field_usajobs_url:url',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'jsonpath_parser:24',
            'target' => 'unpublish_on',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'usajobs',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['usa_jobs'] = $feeds_importer;

  return $export;
}
