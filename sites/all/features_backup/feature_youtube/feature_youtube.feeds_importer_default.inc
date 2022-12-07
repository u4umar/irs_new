<?php
/**
 * @file
 * feature_youtube.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feature_youtube_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'irs_careers_youtube_playlist';
  $feeds_importer->config = array(
    'name' => 'IRS Careers Youtube Videos',
    'description' => 'Import content from the Youtube video list',
    'fetcher' => array(
      'plugin_key' => 'FeedsCrawler',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'crawler' => array(
          'num_pages' => '10',
          'delay' => '2',
          'first_run' => '1',
          'auto' => '0',
          'xpath' => '',
          'url' => array(
            'url_pattern' => 'http://gdata.youtube.com/feeds/api/videos?author=irsvideos&v=2&alt=json&start-index=$index&max-results=25',
            'initial' => '24',
            'increment' => '25',
          ),
        ),
        'crawled' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.entry.*',
        'sources' => array(
          'jsonpath_parser:0' => 'title.$t',
          'jsonpath_parser:4' => 'gd$etag',
          'jsonpath_parser:5' => 'id.$t',
          'jsonpath_parser:7' => 'updated.$t',
          'jsonpath_parser:26' => 'published.$t',
          'jsonpath_parser:8' => 'category.1.term',
          'jsonpath_parser:9' => 'category.1.label',
          'jsonpath_parser:10' => 'link.0.href',
          'jsonpath_parser:11' => 'link.1.href',
          'jsonpath_parser:12' => 'author.0.yt$userId',
          'jsonpath_parser:13' => 'author.0.name',
          'jsonpath_parser:14' => 'media$group.media$description.$t',
          'jsonpath_parser:15' => 'media$group.media$thumbnail.0.url',
          'jsonpath_parser:16' => 'media$group.media$thumbnail.3.url',
          'jsonpath_parser:17' => 'media$group.media$thumbnail.4.url',
          'jsonpath_parser:18' => 'media$group.media$thumbnail.5.url',
          'jsonpath_parser:19' => 'media$group.media$thumbnail.1.url',
          'jsonpath_parser:20' => 'media$group.media$thumbnail.2.url',
          'jsonpath_parser:21' => 'media$group.yt$duration.seconds',
          'jsonpath_parser:22' => 'media$group.yt$videoid.$t',
          'jsonpath_parser:23' => 'yt$statistics.viewCount',
          'jsonpath_parser:24' => 'yt$statistics.favoriteCount',
          'jsonpath_parser:25' => 'media$group.yt$videoid.$t',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:5' => 0,
            'jsonpath_parser:7' => 0,
            'jsonpath_parser:26' => 0,
            'jsonpath_parser:8' => 0,
            'jsonpath_parser:9' => 0,
            'jsonpath_parser:10' => 0,
            'jsonpath_parser:11' => 0,
            'jsonpath_parser:12' => 0,
            'jsonpath_parser:13' => 0,
            'jsonpath_parser:14' => 0,
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
            'jsonpath_parser:25' => 0,
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
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_youtube_etag',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'field_youtube_urn_id',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:7',
            'target' => 'field_youtube_updated',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jsonpath_parser:26',
            'target' => 'field_youtube_published',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'jsonpath_parser:8',
            'target' => 'field_youtube_category_term',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'jsonpath_parser:9',
            'target' => 'field_youtube_category_label',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'jsonpath_parser:10',
            'target' => 'field_youtube_link_html',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'jsonpath_parser:11',
            'target' => 'field_youtube_link_mobile',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'jsonpath_parser:12',
            'target' => 'field_youtube_author_id',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'jsonpath_parser:13',
            'target' => 'field_youtube_author_name',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'jsonpath_parser:14',
            'target' => 'field_youtube_summary',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'jsonpath_parser:15',
            'target' => 'field_youtube_thumb_120x90',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'jsonpath_parser:16',
            'target' => 'field_youtube_thumb_120x90_start',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'jsonpath_parser:17',
            'target' => 'field_youtube_thumb_120x90_mid',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'jsonpath_parser:18',
            'target' => 'field_youtube_thumb_120x90_end',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'jsonpath_parser:19',
            'target' => 'field_youtube_thumb_320x180',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'jsonpath_parser:20',
            'target' => 'field_youtube_thumb_480x360',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'jsonpath_parser:21',
            'target' => 'field_youtube_duration_seconds',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'jsonpath_parser:22',
            'target' => 'field_youtube_video_id',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'jsonpath_parser:23',
            'target' => 'field_youtube_count_view',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'jsonpath_parser:24',
            'target' => 'field_count_favorite',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'jsonpath_parser:25',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'youtube',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['irs_careers_youtube_playlist'] = $feeds_importer;

  return $export;
}
