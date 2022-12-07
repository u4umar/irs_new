<?php
/**
 * @file
 * irs_students.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function irs_students_context_default_contexts() {
  $export = array();

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
        'views--exp-usajobs-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-usajobs-page_1',
          'region' => 'content',
          'weight' => '-24',
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
  $context->name = 'find_job';
  $context->description = 'Find a Job Page Blocks and Settings';
  $context->tag = 'Blocks Breadcrumbs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'find-job' => 'find-job',
        'find-a-job' => 'find-a-job',
        'node/25217' => 'node/25217',
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
        'views-e1ca96b2b22a99a9c1a0d8540e7caeb5' => array(
          'module' => 'views',
          'delta' => 'e1ca96b2b22a99a9c1a0d8540e7caeb5',
          'region' => 'content',
          'weight' => '-30',
        ),
        'views-basic_pages-block_1' => array(
          'module' => 'views',
          'delta' => 'basic_pages-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-youtube-block' => array(
          'module' => 'views',
          'delta' => 'youtube-block',
          'region' => 'content',
          'weight' => '-7',
        ),
        'irs_calculators-fit_check' => array(
          'module' => 'irs_calculators',
          'delta' => 'fit_check',
          'region' => 'content',
          'weight' => '-6',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'content',
          'weight' => '-35',
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
        'block-10' => array(
          'module' => 'block',
          'delta' => '10',
          'region' => 'content',
          'weight' => '-8',
        ),
        'mefibs-ba54f7be6c6924d39d78efeb9b4c9356' => array(
          'module' => 'mefibs',
          'delta' => 'ba54f7be6c6924d39d78efeb9b4c9356',
          'region' => 'content',
          'weight' => '-7',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'block-9' => array(
          'module' => 'block',
          'delta' => '9',
          'region' => 'postscript_first',
          'weight' => '-9',
        ),
        'views-success_stories-block' => array(
          'module' => 'views',
          'delta' => 'success_stories-block',
          'region' => 'postscript_second',
          'weight' => '-10',
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

  return $export;
}
