<?php

/**
 * @file
 * irs_feeds.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function irs_feeds_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'usa_jobs-jsonpath_parser_24-math';
  $feeds_tamper->importer = 'usa_jobs';
  $feeds_tamper->source = 'jsonpath_parser:24';
  $feeds_tamper->plugin_id = 'math';
  $feeds_tamper->settings = array(
    'operation' => 'addition',
    'value' => '86399',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Mathematical operation';
  $export['usa_jobs-jsonpath_parser_24-math'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'usa_jobs-jsonpath_parser_24-strtotime';
  $feeds_tamper->importer = 'usa_jobs';
  $feeds_tamper->source = 'jsonpath_parser:24';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['usa_jobs-jsonpath_parser_24-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'usa_jobs-jsonpath_parser_24-timetodate';
  $feeds_tamper->importer = 'usa_jobs';
  $feeds_tamper->source = 'jsonpath_parser:24';
  $feeds_tamper->plugin_id = 'timetodate';
  $feeds_tamper->settings = array(
    'date_format' => 'Y-m-d H:i:s',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Unix timestamp to Date';
  $export['usa_jobs-jsonpath_parser_24-timetodate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'usa_jobs_revised-jsonpath_parser_24-math';
  $feeds_tamper->importer = 'usa_jobs_revised';
  $feeds_tamper->source = 'jsonpath_parser:24';
  $feeds_tamper->plugin_id = 'math';
  $feeds_tamper->settings = array(
    'operation' => 'addition',
    'value' => '86399',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Mathematical operation';
  $export['usa_jobs_revised-jsonpath_parser_24-math'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'usa_jobs_revised-jsonpath_parser_24-strtotime';
  $feeds_tamper->importer = 'usa_jobs_revised';
  $feeds_tamper->source = 'jsonpath_parser:24';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['usa_jobs_revised-jsonpath_parser_24-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'usa_jobs_revised-jsonpath_parser_24-timetodate';
  $feeds_tamper->importer = 'usa_jobs_revised';
  $feeds_tamper->source = 'jsonpath_parser:24';
  $feeds_tamper->plugin_id = 'timetodate';
  $feeds_tamper->settings = array(
    'date_format' => 'Y-m-d H:i:s',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Unix timestamp to Date';
  $export['usa_jobs_revised-jsonpath_parser_24-timetodate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'usa_jobs_revised-jsonpath_parser_25-cast_to_int';
  $feeds_tamper->importer = 'usa_jobs_revised';
  $feeds_tamper->source = 'jsonpath_parser:25';
  $feeds_tamper->plugin_id = 'cast_to_int';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Cast to integer';
  $export['usa_jobs_revised-jsonpath_parser_25-cast_to_int'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'usa_jobs_revised-jsonpath_parser_26-cast_to_int';
  $feeds_tamper->importer = 'usa_jobs_revised';
  $feeds_tamper->source = 'jsonpath_parser:26';
  $feeds_tamper->plugin_id = 'cast_to_int';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Cast to integer';
  $export['usa_jobs_revised-jsonpath_parser_26-cast_to_int'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'usa_jobs_revised-jsonpath_parser_27-cast_to_int';
  $feeds_tamper->importer = 'usa_jobs_revised';
  $feeds_tamper->source = 'jsonpath_parser:27';
  $feeds_tamper->plugin_id = 'cast_to_int';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Cast to integer';
  $export['usa_jobs_revised-jsonpath_parser_27-cast_to_int'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'usa_jobs_revised-jsonpath_parser_6-find_replace';
  $feeds_tamper->importer = 'usa_jobs_revised';
  $feeds_tamper->source = 'jsonpath_parser:6';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '"',
    'replace' => '*',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['usa_jobs_revised-jsonpath_parser_6-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'usa_jobs_revised-jsonpath_parser_6-html_entity_decode';
  $feeds_tamper->importer = 'usa_jobs_revised';
  $feeds_tamper->source = 'jsonpath_parser:6';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'HTML entity decode';
  $export['usa_jobs_revised-jsonpath_parser_6-html_entity_decode'] = $feeds_tamper;

  return $export;
}
