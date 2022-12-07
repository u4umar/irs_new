<?php

/**
 * @file
 * irs_feeds.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function irs_feeds_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = TRUE; /* Edit this to true to make a default feeds_importer disabled initially */
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
          'jsonpath_parser:1' => 'ApplyOnlineURL',
          'jsonpath_parser:2' => 'DocumentID',
          'jsonpath_parser:5' => 'JobSummary',
          'jsonpath_parser:6' => 'JobTitle',
          'jsonpath_parser:7' => 'Locations',
          'jsonpath_parser:8' => 'OrganizationName',
          'jsonpath_parser:9' => 'PayPlan',
          'jsonpath_parser:10' => 'SalaryBasis',
          'jsonpath_parser:11' => 'SalaryMax',
          'jsonpath_parser:12' => 'SalaryMin',
          'jsonpath_parser:13' => 'Series',
          'jsonpath_parser:15' => 'WhoMayApplyText',
          'jsonpath_parser:16' => 'WorkSchedule',
          'jsonpath_parser:18' => 'AgencySubElement',
          'jsonpath_parser:19' => 'AnnouncementNumber',
          'jsonpath_parser:20' => 'StartDate',
          'jsonpath_parser:21' => 'WorkType',
          'jsonpath_parser:22' => 'StartDate',
          'jsonpath_parser:23' => 'EndDate',
          'jsonpath_parser:24' => 'EndDate',
          'jsonpath_parser:25' => 'Grade',
          'jsonpath_parser:26' => '',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:5' => 0,
            'jsonpath_parser:6' => 0,
            'jsonpath_parser:7' => 0,
            'jsonpath_parser:8' => 0,
            'jsonpath_parser:9' => 0,
            'jsonpath_parser:10' => 0,
            'jsonpath_parser:11' => 0,
            'jsonpath_parser:12' => 0,
            'jsonpath_parser:13' => 0,
            'jsonpath_parser:15' => 0,
            'jsonpath_parser:16' => 0,
            'jsonpath_parser:18' => 0,
            'jsonpath_parser:19' => 0,
            'jsonpath_parser:20' => 0,
            'jsonpath_parser:21' => 0,
            'jsonpath_parser:22' => 0,
            'jsonpath_parser:23' => 0,
            'jsonpath_parser:24' => 0,
            'jsonpath_parser:25' => 0,
            'jsonpath_parser:26' => 0,
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
            'source' => 'jsonpath_parser:1',
            'target' => 'field_usajobs_url',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'field_usajobs_doc_id',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'body',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'jsonpath_parser:7',
            'target' => 'field_usajobs_locations',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'jsonpath_parser:8',
            'target' => 'field_usajobs_organization',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'jsonpath_parser:9',
            'target' => 'field_usajobs_pay_plan',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'jsonpath_parser:10',
            'target' => 'field_usajobs_salary_base',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'jsonpath_parser:11',
            'target' => 'field_usajobs_salary_max',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'jsonpath_parser:12',
            'target' => 'field_usajobs_salary_min',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'jsonpath_parser:13',
            'target' => 'field_usajobs_series',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'jsonpath_parser:15',
            'target' => 'field_usajobs_who_apply',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'jsonpath_parser:16',
            'target' => 'field_usajobs_work_schedule',
            'unique' => FALSE,
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
            'target' => 'created',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'jsonpath_parser:21',
            'target' => 'field_usajobs_type_specification',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'jsonpath_parser:22',
            'target' => 'field_usajobs_date_start:start',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'jsonpath_parser:23',
            'target' => 'field_usajobs_date_end:start',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'jsonpath_parser:24',
            'target' => 'unpublish_on',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'jsonpath_parser:25',
            'target' => 'field_usajob_gslevel_untagged',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'Blank source 1',
            'target' => 'field_usajobs_gslevel_ref',
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
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['usa_jobs'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'usa_jobs_revised';
  $feeds_importer->config = array(
    'name' => 'USA Jobs (Revised)',
    'description' => 'Revised API processor for the USA Jobs RESTful web service.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcherAppendHeaders',
      'config' => array(
        'append_headers' => 'Authorization-Key|K65xfhZ6VLgMoheYIanmkthk00jvKTgYanb/JBipV1c=
',
        'request_timeout' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.SearchResult.SearchResultItems.*',
        'sources' => array(
          'jsonpath_parser:0' => 'MatchedObjectDescriptor.PositionID',
          'jsonpath_parser:1' => 'MatchedObjectDescriptor.ApplyURI',
          'jsonpath_parser:2' => 'MatchedObjectId',
          'jsonpath_parser:5' => 'MatchedObjectDescriptor.UserArea.Details.MajorDuties',
          'jsonpath_parser:6' => 'MatchedObjectDescriptor.PositionTitle',
          'jsonpath_parser:7' => 'MatchedObjectDescriptor.PositionLocation.*.LocationName',
          'jsonpath_parser:8' => 'MatchedObjectDescriptor.OrganizationName',
          'jsonpath_parser:9' => 'MatchedObjectDescriptor.JobGrade[0].Code',
          'jsonpath_parser:10' => 'MatchedObjectDescriptor.PositionRemuneration[0].RateIntervalCode',
          'jsonpath_parser:11' => 'MatchedObjectDescriptor.PositionRemuneration[0].MaximumRange',
          'jsonpath_parser:12' => 'MatchedObjectDescriptor.PositionRemuneration[0].MinimumRange',
          'jsonpath_parser:13' => 'MatchedObjectDescriptor.JobCategory.*.Code',
          'jsonpath_parser:15' => 'MatchedObjectDescriptor.UserArea.Details.WhoMayApply.Name',
          'jsonpath_parser:16' => 'MatchedObjectDescriptor.PositionSchedule.*.Name',
          'jsonpath_parser:18' => 'MatchedObjectDescriptor.UserArea.Details.SubAgencyName',
          'jsonpath_parser:19' => 'MatchedObjectId',
          'jsonpath_parser:20' => 'MatchedObjectDescriptor.PositionStartDate',
          'jsonpath_parser:21' => 'MatchedObjectDescriptor.PositionOfferingType[0].Name',
          'jsonpath_parser:22' => 'MatchedObjectDescriptor.PositionStartDate',
          'jsonpath_parser:23' => 'MatchedObjectDescriptor.PositionEndDate',
          'jsonpath_parser:24' => 'MatchedObjectDescriptor.PositionEndDate',
          'jsonpath_parser:25' => 'MatchedObjectDescriptor.UserArea.Details.LowGrade',
          'jsonpath_parser:26' => 'MatchedObjectDescriptor.UserArea.Details.LowGrade',
          'jsonpath_parser:27' => 'MatchedObjectDescriptor.UserArea.Details.HighGrade',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:5' => 0,
            'jsonpath_parser:6' => 0,
            'jsonpath_parser:7' => 0,
            'jsonpath_parser:8' => 0,
            'jsonpath_parser:9' => 0,
            'jsonpath_parser:10' => 0,
            'jsonpath_parser:11' => 0,
            'jsonpath_parser:12' => 0,
            'jsonpath_parser:13' => 0,
            'jsonpath_parser:15' => 0,
            'jsonpath_parser:16' => 0,
            'jsonpath_parser:18' => 0,
            'jsonpath_parser:19' => 0,
            'jsonpath_parser:20' => 0,
            'jsonpath_parser:21' => 0,
            'jsonpath_parser:22' => 0,
            'jsonpath_parser:23' => 0,
            'jsonpath_parser:24' => 0,
            'jsonpath_parser:25' => 0,
            'jsonpath_parser:26' => 0,
            'jsonpath_parser:27' => 0,
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
            'source' => 'jsonpath_parser:1',
            'target' => 'field_usajobs_url',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'field_usajobs_doc_id',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'body',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'jsonpath_parser:7',
            'target' => 'field_usajobs_locations',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'jsonpath_parser:8',
            'target' => 'field_usajobs_organization',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'jsonpath_parser:9',
            'target' => 'field_usajobs_pay_plan',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'jsonpath_parser:10',
            'target' => 'field_usajobs_salary_base',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'jsonpath_parser:11',
            'target' => 'field_usajobs_salary_max',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'jsonpath_parser:12',
            'target' => 'field_usajobs_salary_min',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'jsonpath_parser:13',
            'target' => 'field_usajobs_series',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'jsonpath_parser:15',
            'target' => 'field_usajobs_who_apply',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'jsonpath_parser:16',
            'target' => 'field_usajobs_work_schedule',
            'unique' => FALSE,
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
            'target' => 'created',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'jsonpath_parser:21',
            'target' => 'field_usajobs_type_specification',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'jsonpath_parser:22',
            'target' => 'field_usajobs_date_start:start',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'jsonpath_parser:23',
            'target' => 'field_usajobs_date_end:start',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'jsonpath_parser:24',
            'target' => 'unpublish_on',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'jsonpath_parser:25',
            'target' => 'field_usajob_gslevel_untagged',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'jsonpath_parser:26',
            'target' => 'field_usajobs_grade_low',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'jsonpath_parser:27',
            'target' => 'field_usajobs_grade_high',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'usajobs',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['usa_jobs_revised'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'youtube_playlist';
  $feeds_importer->config = array(
    'name' => 'YouTube Playlist',
    'description' => 'Imports the YouTube Playlist with the ID of C229B1637C71A518',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'id',
          'xpathparser:1' => 'title',
          'xpathparser:2' => 'published/text()',
          'xpathparser:3' => 'media:group/media:player/@url',
          'xpathparser:4' => 'media:group/media:thumbnail/@url',
          'xpathparser:5' => 'media:group/media:category/@label',
          'xpathparser:6' => 'media:group/yt:duration/@seconds',
          'xpathparser:7' => 'yt:statistics/@viewCount',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
        ),
        'context' => '//feed/entry',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
          ),
        ),
        'allow_override' => 0,
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
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_youtube_external_link:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_youtube_thumbnail:uri',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_youtube_categories',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_youtube_duration',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_youtube_meta_views',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'youtube_videos',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['youtube_playlist'] = $feeds_importer;

  return $export;
}
