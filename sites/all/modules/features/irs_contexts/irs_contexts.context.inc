<?php

/**
 * @file
 * irs_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function irs_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about';
  $context->description = 'Overview page for the About section of the IRS Jobs website.';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
        'node/2' => 'node/2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-basic_pages-block_5' => array(
          'module' => 'views',
          'delta' => 'basic_pages-block_5',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-office_locations-block' => array(
          'module' => 'views',
          'delta' => 'office_locations-block',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  t('Overview page for the About section of the IRS Jobs website.');
  $export['about'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'application_process';
  $context->description = 'Flexslider block on main Application Process page';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'application-process' => 'application-process',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-61ab2ff73e40fb5ed58ca8696f797b83' => array(
          'module' => 'views',
          'delta' => '61ab2ff73e40fb5ed58ca8696f797b83',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  t('Flexslider block on main Application Process page');
  $export['application_process'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'authenticated_assets';
  $context->description = '';
  $context->tag = 'Delta';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user' => 'user',
        'user/*' => 'user/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'administrative_assets',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Delta');
  $export['authenticated_assets'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'careers';
  $context->description = '';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'usajobs:page_1' => 'usajobs:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-e1ca96b2b22a99a9c1a0d8540e7caeb5' => array(
          'module' => 'views',
          'delta' => 'e1ca96b2b22a99a9c1a0d8540e7caeb5',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views--exp-usajobs-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-usajobs-page_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-8',
        ),
        'webform-client-block-404' => array(
          'module' => 'webform',
          'delta' => 'client-block-404',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  $export['careers'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'careers_contextual';
  $context->description = '';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'usajobs:page_2' => 'usajobs:page_2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-usajobs-page_2' => array(
          'module' => 'views',
          'delta' => '-exp-usajobs-page_2',
          'region' => 'content',
          'weight' => '-24',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  $export['careers_contextual'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'careers_contextual_work_type';
  $context->description = '';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'usajobs:page_3' => 'usajobs:page_3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-usajobs-page_3' => array(
          'module' => 'views',
          'delta' => '-exp-usajobs-page_3',
          'region' => 'content',
          'weight' => '-24',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  $export['careers_contextual_work_type'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'clone_of_careers_contextual_job_category';
  $context->description = '';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'usajobs:page_4' => 'usajobs:page_4',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-usajobs-page_4' => array(
          'module' => 'views',
          'delta' => '-exp-usajobs-page_4',
          'region' => 'content',
          'weight' => '-31',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  $export['clone_of_careers_contextual_job_category'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'employment_office';
  $context->description = '';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/610' => 'node/610',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-office_locations-block_3' => array(
          'module' => 'views',
          'delta' => 'office_locations-block_3',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  $export['employment_office'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'find_job';
  $context->description = 'Find a Job Page Blocks and Settings';
  $context->tag = 'Blocks Breadcrumbs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'find-job' => 'find-job',
        'find-a-job' => 'find-a-job',
        'node/26298' => 'node/26298',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'mefibs-ba54f7be6c6924d39d78efeb9b4c9356' => array(
          'module' => 'mefibs',
          'delta' => 'ba54f7be6c6924d39d78efeb9b4c9356',
          'region' => 'content',
          'weight' => '-33',
        ),
        'views-youtube-block' => array(
          'module' => 'views',
          'delta' => 'youtube-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'irs_calculators-fit_check' => array(
          'module' => 'irs_calculators',
          'delta' => 'fit_check',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks Breadcrumbs');
  t('Find a Job Page Blocks and Settings');
  $export['find_job'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = '';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-showcases-block_1' => array(
          'module' => 'views',
          'delta' => 'showcases-block_1',
          'region' => 'header_first',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-e1ca96b2b22a99a9c1a0d8540e7caeb5' => array(
          'module' => 'views',
          'delta' => 'e1ca96b2b22a99a9c1a0d8540e7caeb5',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-basic_pages-block_1' => array(
          'module' => 'views',
          'delta' => 'basic_pages-block_1',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-youtube-block' => array(
          'module' => 'views',
          'delta' => 'youtube-block',
          'region' => 'content',
          'weight' => '-6',
        ),
        'irs_calculators-fit_check' => array(
          'module' => 'irs_calculators',
          'delta' => 'fit_check',
          'region' => 'content',
          'weight' => '-5',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'frontpage',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  $export['frontpage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'locations_overview';
  $context->description = '';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/46' => 'node/46',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-office_locations-block' => array(
          'module' => 'views',
          'delta' => 'office_locations-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  $export['locations_overview'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'office_location';
  $context->description = '';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'location' => 'location',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  $export['office_location'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'open_positions';
  $context->description = '';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'application_process' => 'application_process',
        'article' => 'article',
        'award' => 'award',
        'frequently_asked_questions' => 'frequently_asked_questions',
        'job_descriptions' => 'job_descriptions',
        'location' => 'location',
        'page' => 'page',
        'system_pages' => 'system_pages',
        'usajobs' => 'usajobs',
        'webform' => 'webform',
        'youtube_videos' => 'youtube_videos',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~find-job*' => '~find-job*',
        '~resources/job-descriptions/office-chief-counsel' => '~resources/job-descriptions/office-chief-counsel',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  $export['open_positions'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'profiles';
  $context->description = 'Youtube Playlist on Employee Profile';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about/who/employee-profiles' => 'about/who/employee-profiles',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-youtube-block_playlist' => array(
          'module' => 'views',
          'delta' => 'youtube-block_playlist',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  t('Youtube Playlist on Employee Profile');
  $export['profiles'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'regional_offices';
  $context->description = '';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/47' => 'node/47',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-office_locations-block_2' => array(
          'module' => 'views',
          'delta' => 'office_locations-block_2',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  $export['regional_offices'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources';
  $context->description = '';
  $context->tag = 'block';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/5' => 'node/5',
        'resources' => 'resources',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-basic_pages-block_3' => array(
          'module' => 'views',
          'delta' => 'basic_pages-block_3',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('block');
  $export['resources'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = '';
  $context->tag = 'Blocks Breadcrumbs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
      ),
    ),
    'breadcrumb' => 'search',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks Breadcrumbs');
  $export['search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitemap';
  $context->description = '';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'basic_pages:page_1' => 'basic_pages:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-basic_pages-block_2' => array(
          'module' => 'views',
          'delta' => 'basic_pages-block_2',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  $export['sitemap'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'students';
  $context->description = 'Students Page Blocks and Settings';
  $context->tag = 'Blocks Breadcrumbs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'find-job/students' => 'find-job/students',
        'find-a-job/students' => 'find-a-job/students',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-e1ca96b2b22a99a9c1a0d8540e7caeb5' => array(
          'module' => 'views',
          'delta' => 'e1ca96b2b22a99a9c1a0d8540e7caeb5',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-success_stories-block' => array(
          'module' => 'views',
          'delta' => 'success_stories-block',
          'region' => 'content',
          'weight' => '-7',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'content',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks Breadcrumbs');
  t('Students Page Blocks and Settings');
  $export['students'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'understanding_gs';
  $context->description = '';
  $context->tag = 'Block';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'gs_schedules' => 'gs_schedules',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-gs_schedules-page' => array(
          'module' => 'views',
          'delta' => '-exp-gs_schedules-page',
          'region' => 'content',
          'weight' => '-32',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Block');
  $export['understanding_gs'] = $context;

  return $export;
}
