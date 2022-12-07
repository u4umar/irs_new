<?php
/**
 * @file
 * irs_students.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function irs_students_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'success_stories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Success Stories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Success Stories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Intro Text';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Lorem ipsum dolor sit amet, quo ut bonorum minimum complectitur. Commodo inciderint ne his, eum in ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Footer: Clear Floating */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['ui_name'] = 'Clear Floating';
  $handler->display->display_options['footer']['php']['empty'] = TRUE;
  $handler->display->display_options['footer']['php']['php_output'] = '<div style="clear:both;"></div>';
  /* Field: Content: Headshot Image */
  $handler->display->display_options['fields']['field_headshot_image']['id'] = 'field_headshot_image';
  $handler->display->display_options['fields']['field_headshot_image']['table'] = 'field_data_field_headshot_image';
  $handler->display->display_options['fields']['field_headshot_image']['field'] = 'field_headshot_image';
  $handler->display->display_options['fields']['field_headshot_image']['label'] = '';
  $handler->display->display_options['fields']['field_headshot_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headshot_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_headshot_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Read More Link */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Read More Link';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Read [field_first_name]\'s Story';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'button';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'success_story' => 'success_story',
  );

  /* Display: Success Stories */
  $handler = $view->new_display('block', 'Success Stories', 'block');
  $handler->display->display_options['block_description'] = 'Success Stories';
  $export['success_stories'] = $view;

  $view = new view();
  $view->name = 'usajobs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'USAJobs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'USAJobs';
  $handler->display->display_options['css_class'] = 'USAJobs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'usajobs' => 'usajobs',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Block - Homepage Featured Jobs */
  $handler = $view->new_display('block', 'Block - Homepage Featured Jobs', 'irs_homepage_featured_jobs_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Jobs';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'USAJobs block homepage refresh';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['php_output'] = '<div style="clear:both;"></div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Locations */
  $handler->display->display_options['fields']['field_usajobs_locations']['id'] = 'field_usajobs_locations';
  $handler->display->display_options['fields']['field_usajobs_locations']['table'] = 'field_data_field_usajobs_locations';
  $handler->display->display_options['fields']['field_usajobs_locations']['field'] = 'field_usajobs_locations';
  $handler->display->display_options['fields']['field_usajobs_locations']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_locations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_locations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_usajobs_locations']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_usajobs_locations']['delta_offset'] = '0';
  /* Field: Content: Locations (field_usajobs_locations:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_usajobs_locations';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delta']['separator'] = '';
  /* Field: Conditional: Processed Locations */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['ui_name'] = 'Conditional: Processed Locations';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'delta';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '0';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_usajobs_locations]';
  $handler->display->display_options['fields']['views_conditional']['or'] = 'Multiple Locations';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_usajobs_url']['id'] = 'field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['table'] = 'field_data_field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['field'] = 'field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_usajobs_date_end']['id'] = 'field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end']['table'] = 'field_data_field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end']['field'] = 'field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_date_end']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_date_end']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_usajobs_date_end']['settings'] = array(
    'format_type' => 'm_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_usajobs_date_start']['id'] = 'field_usajobs_date_start';
  $handler->display->display_options['fields']['field_usajobs_date_start']['table'] = 'field_data_field_usajobs_date_start';
  $handler->display->display_options['fields']['field_usajobs_date_start']['field'] = 'field_usajobs_date_start';
  $handler->display->display_options['fields']['field_usajobs_date_start']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_date_start']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_date_start']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_usajobs_date_start']['settings'] = array(
    'format_type' => 'm_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Custom: Open and Closing Dates */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Open and Closing Dates';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Open and Closing Dates';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Open [field_usajobs_date_start] to [field_usajobs_date_end]';
  $handler->display->display_options['fields']['nothing_1']['element_label_type'] = 'div';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<strong>Description</strong>—[body-value]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '182';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '170',
  );
  /* Field: Custom: Apply and Share Links */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Apply and Share Links';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_usajobs_url]" class="button" target="_blank">Apply</a><a href="" class="button irs-share-link" id="sharethis-trigger">Share</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'usajobs' => 'usajobs',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page status */
  $handler->display->display_options['filters']['promote_1']['id'] = 'promote_1';
  $handler->display->display_options['filters']['promote_1']['table'] = 'node';
  $handler->display->display_options['filters']['promote_1']['field'] = 'promote';
  $handler->display->display_options['filters']['promote_1']['value'] = '1';
  $handler->display->display_options['filters']['promote_1']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Homepage - Featured Jobs';

  /* Display: Block - Students Page Featured Jobs */
  $handler = $view->new_display('block', 'Block - Students Page Featured Jobs', 'irs_students_page_featured_jobs_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Jobs';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'USAJobs block homepage refresh';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['php_output'] = '<div style="clear:both;"></div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Locations */
  $handler->display->display_options['fields']['field_usajobs_locations']['id'] = 'field_usajobs_locations';
  $handler->display->display_options['fields']['field_usajobs_locations']['table'] = 'field_data_field_usajobs_locations';
  $handler->display->display_options['fields']['field_usajobs_locations']['field'] = 'field_usajobs_locations';
  $handler->display->display_options['fields']['field_usajobs_locations']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_locations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_locations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_usajobs_locations']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_usajobs_locations']['delta_offset'] = '0';
  /* Field: Content: Locations (field_usajobs_locations:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_usajobs_locations';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delta']['separator'] = '';
  /* Field: Conditional: Processed Locations */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['ui_name'] = 'Conditional: Processed Locations';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'delta';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '0';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_usajobs_locations]';
  $handler->display->display_options['fields']['views_conditional']['or'] = 'Multiple Locations';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_usajobs_url']['id'] = 'field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['table'] = 'field_data_field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['field'] = 'field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_usajobs_date_end']['id'] = 'field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end']['table'] = 'field_data_field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end']['field'] = 'field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_date_end']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_date_end']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_usajobs_date_end']['settings'] = array(
    'format_type' => 'm_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_usajobs_date_start']['id'] = 'field_usajobs_date_start';
  $handler->display->display_options['fields']['field_usajobs_date_start']['table'] = 'field_data_field_usajobs_date_start';
  $handler->display->display_options['fields']['field_usajobs_date_start']['field'] = 'field_usajobs_date_start';
  $handler->display->display_options['fields']['field_usajobs_date_start']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_date_start']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_date_start']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_usajobs_date_start']['settings'] = array(
    'format_type' => 'm_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Custom: Open and Closing Dates */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Open and Closing Dates';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Open and Closing Dates';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Open [field_usajobs_date_start] to [field_usajobs_date_end]';
  $handler->display->display_options['fields']['nothing_1']['element_label_type'] = 'div';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<strong>Description</strong>—[body-value]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '182';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '170',
  );
  /* Field: Custom: Apply and Share Links */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Apply and Share Links';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_usajobs_url]" class="button" target="_blank">Apply</a><a href="" class="button" id="sharethis-trigger">Share</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'usajobs' => 'usajobs',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page status */
  $handler->display->display_options['filters']['promote_1']['id'] = 'promote_1';
  $handler->display->display_options['filters']['promote_1']['table'] = 'node';
  $handler->display->display_options['filters']['promote_1']['field'] = 'promote';
  $handler->display->display_options['filters']['promote_1']['value'] = '1';
  $handler->display->display_options['filters']['promote_1']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Students Page - Featured Jobs';

  /* Display: Block - Homepage Featured Random Job */
  $handler = $view->new_display('block', 'Block - Homepage Featured Random Job', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Job';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'USAJobs block homepage random';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_usajobs_url']['id'] = 'field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['table'] = 'field_data_field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['field'] = 'field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Locations */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Content: Locations';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return " ";
';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="job-info"><span class="heading">Featured Job</span> - [title] [php] <span class="actions"><a href="[field_usajobs_url]" target="_blank">Apply</a><a href="" id="sharethis-trigger">Share</a></span></div>
<div class="social-sharing">[sharethis]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'usajobs' => 'usajobs',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page status */
  $handler->display->display_options['filters']['promote_1']['id'] = 'promote_1';
  $handler->display->display_options['filters']['promote_1']['table'] = 'node';
  $handler->display->display_options['filters']['promote_1']['field'] = 'promote';
  $handler->display->display_options['filters']['promote_1']['value'] = '1';
  $handler->display->display_options['filters']['promote_1']['group'] = 1;

  /* Display: Page - Careers by Post Date */
  $handler = $view->new_display('page', 'Page - Careers by Post Date', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Careers';
  $handler->display->display_options['display_comment'] = 'test';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'USAJobs page by-date';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear Filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_usajobs_category_ref_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_usajobs_gslevel_ref_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_field_usajobs_work_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_usajobs_no' => 'field_usajobs_no',
    'title' => 'title',
    'body' => 'body',
    'field_usajobs_salary_base' => 'field_usajobs_salary_base',
    'field_usajobs_salary_min' => 'field_usajobs_salary_min',
    'field_usajobs_salary_max' => 'field_usajobs_salary_max',
    'field_usajobs_gslevel_ref' => 'field_usajobs_gslevel_ref',
    'nothing_1' => 'nothing_1',
    'created' => 'created',
    'field_usajobs_date_end_1' => 'field_usajobs_date_end_1',
    'php' => 'php',
    'field_usajobs_locations' => 'field_usajobs_locations',
    'field_usajobs_url' => 'field_usajobs_url',
    'sharethis' => 'sharethis',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_no' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_salary_base' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_salary_min' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_salary_max' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_gslevel_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_date_end_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_locations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sharethis' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'ShareThis AJAX Workaround';
  $handler->display->display_options['header']['area']['content'] = '<!-- Note: This is a work around since the ShareThis library does not use proper Drupal Behaviors for AJAX integration -->
<script type=\'text/javascript\'>stLight.readyRun = false;</script>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Open Positions';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>There are no open positions at this time</h2>
<p>Currently, there are no open positions available for display. If you have selected a filter criteria, please adjust your settings to display additional postings.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Announcement Number */
  $handler->display->display_options['fields']['field_usajobs_no']['id'] = 'field_usajobs_no';
  $handler->display->display_options['fields']['field_usajobs_no']['table'] = 'field_data_field_usajobs_no';
  $handler->display->display_options['fields']['field_usajobs_no']['field'] = 'field_usajobs_no';
  $handler->display->display_options['fields']['field_usajobs_no']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_no']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_no']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Position';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span data-guid="[field_usajobs_no]">[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'position';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_class'] = 'desc';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '255',
  );
  /* Field: Content: Salary Basis */
  $handler->display->display_options['fields']['field_usajobs_salary_base']['id'] = 'field_usajobs_salary_base';
  $handler->display->display_options['fields']['field_usajobs_salary_base']['table'] = 'field_data_field_usajobs_salary_base';
  $handler->display->display_options['fields']['field_usajobs_salary_base']['field'] = 'field_usajobs_salary_base';
  $handler->display->display_options['fields']['field_usajobs_salary_base']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_salary_base']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_salary_base']['element_label_colon'] = FALSE;
  /* Field: Content: Salary Min */
  $handler->display->display_options['fields']['field_usajobs_salary_min']['id'] = 'field_usajobs_salary_min';
  $handler->display->display_options['fields']['field_usajobs_salary_min']['table'] = 'field_data_field_usajobs_salary_min';
  $handler->display->display_options['fields']['field_usajobs_salary_min']['field'] = 'field_usajobs_salary_min';
  $handler->display->display_options['fields']['field_usajobs_salary_min']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_salary_min']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_salary_min']['element_label_colon'] = FALSE;
  /* Field: Content: Salary Max */
  $handler->display->display_options['fields']['field_usajobs_salary_max']['id'] = 'field_usajobs_salary_max';
  $handler->display->display_options['fields']['field_usajobs_salary_max']['table'] = 'field_data_field_usajobs_salary_max';
  $handler->display->display_options['fields']['field_usajobs_salary_max']['field'] = 'field_usajobs_salary_max';
  $handler->display->display_options['fields']['field_usajobs_salary_max']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_salary_max']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_salary_max']['element_label_colon'] = FALSE;
  /* Field: Content: Grade */
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['id'] = 'field_usajobs_gslevel_ref';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['table'] = 'field_data_field_usajobs_gslevel_ref';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['field'] = 'field_usajobs_gslevel_ref';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['alter']['text'] = '<div>[field_usajobs_gslevel_ref]</div>
<div>[field_usajobs_salary_min]-[field_usajobs_salary_max]</div>
<div>([field_usajobs_salary_base])</div>';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['delta_first_last'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['separator'] = '/';
  /* Field: Custom: Grade */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Grade';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Grade';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div>[field_usajobs_gslevel_ref]</div>
<div>[field_usajobs_salary_min]-[field_usajobs_salary_max]</div>
<div>([field_usajobs_salary_base])</div>
';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Post Date';
  $handler->display->display_options['fields']['created']['element_class'] = 'post-date';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'm/d/Y';
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['id'] = 'field_usajobs_date_end_1';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['table'] = 'field_data_field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['field'] = 'field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['label'] = 'Closing Date';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['empty'] = '[created]';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['settings'] = array(
    'format_type' => 'm_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content : Locations */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Content : Locations';
  $handler->display->display_options['fields']['php']['label'] = 'Locations';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$node = node_load($row->nid);
foreach($node->field_usajobs_locations[\'und\'] as $key=>$value){
$tempString = $value[\'value\'];
$exploded = explode(";",$tempString);
if(sizeof($exploded)>1){
return "Multiple Locations (".sizeof($exploded).")";
}
else{
return $tempString;
}
}';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Locations */
  $handler->display->display_options['fields']['field_usajobs_locations']['id'] = 'field_usajobs_locations';
  $handler->display->display_options['fields']['field_usajobs_locations']['table'] = 'field_data_field_usajobs_locations';
  $handler->display->display_options['fields']['field_usajobs_locations']['field'] = 'field_usajobs_locations';
  $handler->display->display_options['fields']['field_usajobs_locations']['delta_limit'] = '10';
  $handler->display->display_options['fields']['field_usajobs_locations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_usajobs_locations']['separator'] = ';';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_usajobs_url']['id'] = 'field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['table'] = 'field_data_field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['field'] = 'field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['text'] = 'Apply';
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['path'] = '[field_usajobs_url]';
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['rel'] = 'nofollow';
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_usajobs_url']['element_label_colon'] = FALSE;
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['exclude'] = TRUE;
  /* Field: Custom Field: Actions */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom Field: Actions';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_usajobs_url]
<ul class="action-items no-js">
<!-- <li class="item job-info">Job Information</li> -->
<li class="item social-sharing">Share</li>
<!-- <li class="item contact">Contact</li> -->
</ul>
<div class="sharethis">[sharethis]</div>';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'actions';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_usajobs_category_ref']['id'] = 'field_usajobs_category_ref';
  $handler->display->display_options['fields']['field_usajobs_category_ref']['table'] = 'field_data_field_usajobs_category_ref';
  $handler->display->display_options['fields']['field_usajobs_category_ref']['field'] = 'field_usajobs_category_ref';
  $handler->display->display_options['fields']['field_usajobs_category_ref']['label'] = 'Category (Staging only)';
  $handler->display->display_options['fields']['field_usajobs_category_ref']['exclude'] = TRUE;
  /* Field: Content: Work Type Category */
  $handler->display->display_options['fields']['field_field_usajobs_work_type']['id'] = 'field_field_usajobs_work_type';
  $handler->display->display_options['fields']['field_field_usajobs_work_type']['table'] = 'field_data_field_field_usajobs_work_type';
  $handler->display->display_options['fields']['field_field_usajobs_work_type']['field'] = 'field_field_usajobs_work_type';
  $handler->display->display_options['fields']['field_field_usajobs_work_type']['label'] = 'Work Type Category (Staging only)';
  $handler->display->display_options['fields']['field_field_usajobs_work_type']['exclude'] = TRUE;
  /* Field: Content: Who May Apply */
  $handler->display->display_options['fields']['field_usajobs_who_apply']['id'] = 'field_usajobs_who_apply';
  $handler->display->display_options['fields']['field_usajobs_who_apply']['table'] = 'field_data_field_usajobs_who_apply';
  $handler->display->display_options['fields']['field_usajobs_who_apply']['field'] = 'field_usajobs_who_apply';
  $handler->display->display_options['fields']['field_usajobs_who_apply']['label'] = 'Who May Apply (Staging only)';
  $handler->display->display_options['fields']['field_usajobs_who_apply']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Search: Search Terms */
  $handler->display->display_options['arguments']['keys']['id'] = 'keys';
  $handler->display->display_options['arguments']['keys']['table'] = 'search_index';
  $handler->display->display_options['arguments']['keys']['field'] = 'keys';
  $handler->display->display_options['arguments']['keys']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['keys']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['keys']['breadcrumb'] = 'Careers - Filtering for "%1"';
  $handler->display->display_options['arguments']['keys']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['keys']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['keys']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['keys']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'usajobs' => 'usajobs',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Category (field_usajobs_category_ref) */
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['id'] = 'field_usajobs_category_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['table'] = 'field_data_field_usajobs_category_ref';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['field'] = 'field_usajobs_category_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['operator_id'] = 'field_usajobs_category_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['operator'] = 'field_usajobs_category_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['identifier'] = 'field_usajobs_category_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['vocabulary'] = 'usa_jobs_categories';
  /* Filter criterion: Content: Grade (field_usajobs_gslevel_ref) */
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['id'] = 'field_usajobs_gslevel_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['table'] = 'field_data_field_usajobs_gslevel_ref';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['field'] = 'field_usajobs_gslevel_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['operator_id'] = 'field_usajobs_gslevel_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['label'] = 'Grade';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['operator'] = 'field_usajobs_gslevel_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['identifier'] = 'field_usajobs_gslevel_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['vocabulary'] = 'government_schedule';
  /* Filter criterion: Content: Work Type Category (field_field_usajobs_work_type) */
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['id'] = 'field_field_usajobs_work_type_tid';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['table'] = 'field_data_field_field_usajobs_work_type';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['field'] = 'field_field_usajobs_work_type_tid';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['operator_id'] = 'field_field_usajobs_work_type_tid_op';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['label'] = 'Job Type';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['operator'] = 'field_field_usajobs_work_type_tid_op';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['identifier'] = 'field_field_usajobs_work_type_tid';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['vocabulary'] = 'usa_jobs_work_type';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Job Title, Keyword';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'keywords';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
  );
  $handler->display->display_options['mefibs'] = array(
    'blocks' => array(
      0 => array(
        'name' => 'Keyword Search',
        'machine_name' => 'keyword_search',
        'submit_button' => 'Search Jobs',
        'reset_button' => NULL,
        'reset_button_label' => 'Reset',
        'autosubmit' => NULL,
        'autosubmit_hide' => NULL,
      ),
    ),
    'extras' => array(
      'sort' => -1,
      'items_per_page' => -1,
    ),
    'page_1' => array(
      'filter' => array(
        'combine' => array(
          0 => 'keyword_search',
        ),
        'field_usajobs_category_ref_tid' => array(
          0 => 'default',
        ),
        'field_usajobs_gslevel_ref_tid' => array(
          0 => 'default',
        ),
        'field_field_usajobs_work_type_tid' => array(
          0 => 'default',
        ),
      ),
      'sort_block' => array(
        0 => 'default',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'careers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Careers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page - Careers by Government Schedule */
  $handler = $view->new_display('page', 'Page - Careers by Government Schedule', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Careers';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'USAJobs page by-date';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear Filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_usajobs_category_ref_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_usajobs_gslevel_ref_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_field_usajobs_work_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'body' => 'body',
    'field_usajobs_salary_base' => 'field_usajobs_salary_base',
    'field_usajobs_salary_min' => 'field_usajobs_salary_min',
    'field_usajobs_salary_max' => 'field_usajobs_salary_max',
    'field_usajobs_gslevel_ref' => 'field_usajobs_gslevel_ref',
    'created' => 'created',
    'field_usajobs_date_end_1' => 'field_usajobs_date_end_1',
    'php' => 'php',
    'field_usajobs_url' => 'field_usajobs_url',
    'sharethis' => 'sharethis',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'field_usajobs_date_end_1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_salary_base' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_salary_min' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_salary_max' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_gslevel_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_date_end_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sharethis' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'ShareThis AJAX Workaround';
  $handler->display->display_options['header']['area']['content'] = '<!-- Note: This is a work around since the ShareThis library does not use proper Drupal Behaviors for AJAX integration -->
<script type=\'text/javascript\'>stLight.readyRun = false;</script>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Open Positions';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>There are no open positions at this time</h2>
<p>Currently, there are no open positions available for display. If you have selected a filter criteria, please adjust your settings to display additional postings.</p>
<p>If you would like to be notified when positions become available, please <a href="#">contact a recruiter</a> to be placed on a notification list.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Announcement Number */
  $handler->display->display_options['fields']['field_usajobs_no']['id'] = 'field_usajobs_no';
  $handler->display->display_options['fields']['field_usajobs_no']['table'] = 'field_data_field_usajobs_no';
  $handler->display->display_options['fields']['field_usajobs_no']['field'] = 'field_usajobs_no';
  $handler->display->display_options['fields']['field_usajobs_no']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_no']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_no']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Position';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span data-guid="[field_usajobs_no]">[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'position';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['element_class'] = 'desc';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '255',
  );
  /* Field: Content: Salary Basis */
  $handler->display->display_options['fields']['field_usajobs_salary_base']['id'] = 'field_usajobs_salary_base';
  $handler->display->display_options['fields']['field_usajobs_salary_base']['table'] = 'field_data_field_usajobs_salary_base';
  $handler->display->display_options['fields']['field_usajobs_salary_base']['field'] = 'field_usajobs_salary_base';
  $handler->display->display_options['fields']['field_usajobs_salary_base']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_salary_base']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_salary_base']['element_label_colon'] = FALSE;
  /* Field: Content: Salary Min */
  $handler->display->display_options['fields']['field_usajobs_salary_min']['id'] = 'field_usajobs_salary_min';
  $handler->display->display_options['fields']['field_usajobs_salary_min']['table'] = 'field_data_field_usajobs_salary_min';
  $handler->display->display_options['fields']['field_usajobs_salary_min']['field'] = 'field_usajobs_salary_min';
  $handler->display->display_options['fields']['field_usajobs_salary_min']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_salary_min']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_salary_min']['element_label_colon'] = FALSE;
  /* Field: Content: Salary Max */
  $handler->display->display_options['fields']['field_usajobs_salary_max']['id'] = 'field_usajobs_salary_max';
  $handler->display->display_options['fields']['field_usajobs_salary_max']['table'] = 'field_data_field_usajobs_salary_max';
  $handler->display->display_options['fields']['field_usajobs_salary_max']['field'] = 'field_usajobs_salary_max';
  $handler->display->display_options['fields']['field_usajobs_salary_max']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_salary_max']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_salary_max']['element_label_colon'] = FALSE;
  /* Field: Content: Grade */
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['id'] = 'field_usajobs_gslevel_ref';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['table'] = 'field_data_field_usajobs_gslevel_ref';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['field'] = 'field_usajobs_gslevel_ref';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['alter']['text'] = '<div>[field_usajobs_gslevel_ref]</div>
<div>[field_usajobs_salary_min]-[field_usajobs_salary_max]</div>
<div>([field_usajobs_salary_base])</div>';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['delta_first_last'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['separator'] = '/';
  /* Field: Custom: Grade */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Grade';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Grade';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div>[field_usajobs_gslevel_ref]</div>
<div>[field_usajobs_salary_min]-[field_usajobs_salary_max]</div>
<div>([field_usajobs_salary_base])</div>
';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Post Date';
  $handler->display->display_options['fields']['created']['element_class'] = 'post-date';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'm/d/Y';
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['id'] = 'field_usajobs_date_end_1';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['table'] = 'field_data_field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['field'] = 'field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['label'] = 'Closing Date';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['empty'] = '[created]';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['settings'] = array(
    'format_type' => 'm_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content : Locations */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Content : Locations';
  $handler->display->display_options['fields']['php']['label'] = 'Locations';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$node = node_load($row->nid);
foreach($node->field_usajobs_locations[\'und\'] as $key=>$value){
$tempString = $value[\'value\'];
$exploded = explode(";",$tempString);
if(sizeof($exploded)>1){
return "Multiple Locations (".sizeof($exploded).")";
}
else{
return $tempString;
}
}';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_usajobs_url']['id'] = 'field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['table'] = 'field_data_field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['field'] = 'field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['text'] = 'Apply';
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['path'] = '[field_usajobs_url]';
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['rel'] = 'nofollow';
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_usajobs_url']['element_label_colon'] = FALSE;
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['exclude'] = TRUE;
  /* Field: Custom Field: Actions */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom Field: Actions';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_usajobs_url]
<ul class="action-items no-js">
<li class="item job-info">Job Information</li>
<li class="item social-sharing">Share</li>
<li class="item contact">Contact</li>
</ul>
<div class="sharethis">[sharethis]</div>';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'actions';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Grade (field_usajobs_gslevel_ref) */
  $handler->display->display_options['arguments']['field_usajobs_gslevel_ref_tid']['id'] = 'field_usajobs_gslevel_ref_tid';
  $handler->display->display_options['arguments']['field_usajobs_gslevel_ref_tid']['table'] = 'field_data_field_usajobs_gslevel_ref';
  $handler->display->display_options['arguments']['field_usajobs_gslevel_ref_tid']['field'] = 'field_usajobs_gslevel_ref_tid';
  $handler->display->display_options['arguments']['field_usajobs_gslevel_ref_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_usajobs_gslevel_ref_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_usajobs_gslevel_ref_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_usajobs_gslevel_ref_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'usajobs' => 'usajobs',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Category (field_usajobs_category_ref) */
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['id'] = 'field_usajobs_category_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['table'] = 'field_data_field_usajobs_category_ref';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['field'] = 'field_usajobs_category_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['operator_id'] = 'field_usajobs_category_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['operator'] = 'field_usajobs_category_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['identifier'] = 'field_usajobs_category_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['vocabulary'] = 'usa_jobs_categories';
  /* Filter criterion: Content: Grade (field_usajobs_gslevel_ref) */
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['id'] = 'field_usajobs_gslevel_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['table'] = 'field_data_field_usajobs_gslevel_ref';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['field'] = 'field_usajobs_gslevel_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['operator_id'] = 'field_usajobs_gslevel_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['label'] = 'Grade';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['operator'] = 'field_usajobs_gslevel_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['identifier'] = 'field_usajobs_gslevel_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['vocabulary'] = 'government_schedule';
  /* Filter criterion: Content: Work Type Category (field_field_usajobs_work_type) */
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['id'] = 'field_field_usajobs_work_type_tid';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['table'] = 'field_data_field_field_usajobs_work_type';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['field'] = 'field_field_usajobs_work_type_tid';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['operator_id'] = 'field_field_usajobs_work_type_tid_op';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['label'] = 'Job Type';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['operator'] = 'field_field_usajobs_work_type_tid_op';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['identifier'] = 'field_field_usajobs_work_type_tid';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['vocabulary'] = 'usa_jobs_work_type';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'careers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Careers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page - Careers by Work type */
  $handler = $view->new_display('page', 'Page - Careers by Work type', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Careers';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'USAJobs page by-date';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear Filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_usajobs_category_ref_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_usajobs_gslevel_ref_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_field_usajobs_work_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'body' => 'body',
    'field_usajobs_salary_base' => 'field_usajobs_salary_base',
    'field_usajobs_salary_min' => 'field_usajobs_salary_min',
    'field_usajobs_salary_max' => 'field_usajobs_salary_max',
    'field_usajobs_gslevel_ref' => 'field_usajobs_gslevel_ref',
    'created' => 'created',
    'field_usajobs_date_end_1' => 'field_usajobs_date_end_1',
    'php' => 'php',
    'field_usajobs_url' => 'field_usajobs_url',
    'sharethis' => 'sharethis',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'field_usajobs_date_end_1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_salary_base' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_salary_min' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_salary_max' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_gslevel_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_date_end_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sharethis' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'ShareThis AJAX Workaround';
  $handler->display->display_options['header']['area']['content'] = '<!-- Note: This is a work around since the ShareThis library does not use proper Drupal Behaviors for AJAX integration -->
<script type=\'text/javascript\'>stLight.readyRun = false;</script>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Open Positions';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>There are no open positions at this time</h2>
<p>Currently, there are no open positions available for display. If you have selected a filter criteria, please adjust your settings to display additional postings.</p>
<p>If you would like to be notified when positions become available, please <a href="#">contact a recruiter</a> to be placed on a notification list.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Announcement Number */
  $handler->display->display_options['fields']['field_usajobs_no']['id'] = 'field_usajobs_no';
  $handler->display->display_options['fields']['field_usajobs_no']['table'] = 'field_data_field_usajobs_no';
  $handler->display->display_options['fields']['field_usajobs_no']['field'] = 'field_usajobs_no';
  $handler->display->display_options['fields']['field_usajobs_no']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_no']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_no']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Position';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span data-guid="[field_usajobs_no]">[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'position';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['element_class'] = 'desc';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '255',
  );
  /* Field: Content: Salary Basis */
  $handler->display->display_options['fields']['field_usajobs_salary_base']['id'] = 'field_usajobs_salary_base';
  $handler->display->display_options['fields']['field_usajobs_salary_base']['table'] = 'field_data_field_usajobs_salary_base';
  $handler->display->display_options['fields']['field_usajobs_salary_base']['field'] = 'field_usajobs_salary_base';
  $handler->display->display_options['fields']['field_usajobs_salary_base']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_salary_base']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_salary_base']['element_label_colon'] = FALSE;
  /* Field: Content: Salary Min */
  $handler->display->display_options['fields']['field_usajobs_salary_min']['id'] = 'field_usajobs_salary_min';
  $handler->display->display_options['fields']['field_usajobs_salary_min']['table'] = 'field_data_field_usajobs_salary_min';
  $handler->display->display_options['fields']['field_usajobs_salary_min']['field'] = 'field_usajobs_salary_min';
  $handler->display->display_options['fields']['field_usajobs_salary_min']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_salary_min']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_salary_min']['element_label_colon'] = FALSE;
  /* Field: Content: Salary Max */
  $handler->display->display_options['fields']['field_usajobs_salary_max']['id'] = 'field_usajobs_salary_max';
  $handler->display->display_options['fields']['field_usajobs_salary_max']['table'] = 'field_data_field_usajobs_salary_max';
  $handler->display->display_options['fields']['field_usajobs_salary_max']['field'] = 'field_usajobs_salary_max';
  $handler->display->display_options['fields']['field_usajobs_salary_max']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_salary_max']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_salary_max']['element_label_colon'] = FALSE;
  /* Field: Content: Grade */
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['id'] = 'field_usajobs_gslevel_ref';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['table'] = 'field_data_field_usajobs_gslevel_ref';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['field'] = 'field_usajobs_gslevel_ref';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['alter']['text'] = '<div>[field_usajobs_gslevel_ref]</div>
<div>[field_usajobs_salary_min]-[field_usajobs_salary_max]</div>
<div>([field_usajobs_salary_base])</div>';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['delta_first_last'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['separator'] = '/';
  /* Field: Custom: Grade */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Grade';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Grade';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div>[field_usajobs_gslevel_ref]</div>
<div>[field_usajobs_salary_min]-[field_usajobs_salary_max]</div>
<div>([field_usajobs_salary_base])</div>
';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Post Date';
  $handler->display->display_options['fields']['created']['element_class'] = 'post-date';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'm/d/Y';
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['id'] = 'field_usajobs_date_end_1';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['table'] = 'field_data_field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['field'] = 'field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['label'] = 'Closing Date';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['empty'] = '[created]';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['settings'] = array(
    'format_type' => 'm_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content : Locations */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Content : Locations';
  $handler->display->display_options['fields']['php']['label'] = 'Locations';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$node = node_load($row->nid);
foreach($node->field_usajobs_locations[\'und\'] as $key=>$value){
$tempString = $value[\'value\'];
$exploded = explode(";",$tempString);
if(sizeof($exploded)>1){
return "Multiple Locations (".sizeof($exploded).")";
}
else{
return $tempString;
}
}';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_usajobs_url']['id'] = 'field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['table'] = 'field_data_field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['field'] = 'field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['text'] = 'Apply';
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['path'] = '[field_usajobs_url]';
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['rel'] = 'nofollow';
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_usajobs_url']['element_label_colon'] = FALSE;
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['exclude'] = TRUE;
  /* Field: Custom Field: Actions */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom Field: Actions';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_usajobs_url]
<ul class="action-items no-js">
<li class="item job-info">Job Information</li>
<li class="item social-sharing">Share</li>
<li class="item contact">Contact</li>
</ul>
<div class="sharethis">[sharethis]</div>';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'actions';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Work Type Category (field_field_usajobs_work_type) */
  $handler->display->display_options['arguments']['field_field_usajobs_work_type_tid']['id'] = 'field_field_usajobs_work_type_tid';
  $handler->display->display_options['arguments']['field_field_usajobs_work_type_tid']['table'] = 'field_data_field_field_usajobs_work_type';
  $handler->display->display_options['arguments']['field_field_usajobs_work_type_tid']['field'] = 'field_field_usajobs_work_type_tid';
  $handler->display->display_options['arguments']['field_field_usajobs_work_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_field_usajobs_work_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_field_usajobs_work_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_field_usajobs_work_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'usajobs' => 'usajobs',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Category (field_usajobs_category_ref) */
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['id'] = 'field_usajobs_category_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['table'] = 'field_data_field_usajobs_category_ref';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['field'] = 'field_usajobs_category_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['operator_id'] = 'field_usajobs_category_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['operator'] = 'field_usajobs_category_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['identifier'] = 'field_usajobs_category_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['vocabulary'] = 'usa_jobs_categories';
  /* Filter criterion: Content: Grade (field_usajobs_gslevel_ref) */
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['id'] = 'field_usajobs_gslevel_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['table'] = 'field_data_field_usajobs_gslevel_ref';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['field'] = 'field_usajobs_gslevel_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['operator_id'] = 'field_usajobs_gslevel_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['label'] = 'Grade';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['operator'] = 'field_usajobs_gslevel_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['identifier'] = 'field_usajobs_gslevel_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['vocabulary'] = 'government_schedule';
  /* Filter criterion: Content: Work Type Category (field_field_usajobs_work_type) */
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['id'] = 'field_field_usajobs_work_type_tid';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['table'] = 'field_data_field_field_usajobs_work_type';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['field'] = 'field_field_usajobs_work_type_tid';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['operator_id'] = 'field_field_usajobs_work_type_tid_op';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['label'] = 'Job Type';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['operator'] = 'field_field_usajobs_work_type_tid_op';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['identifier'] = 'field_field_usajobs_work_type_tid';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['vocabulary'] = 'usa_jobs_work_type';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'careers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Careers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page - Careers by Job Category */
  $handler = $view->new_display('page', 'Page - Careers by Job Category', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Careers';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'USAJobs page by-date';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear Filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_usajobs_category_ref_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_usajobs_gslevel_ref_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_field_usajobs_work_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'body' => 'body',
    'field_usajobs_salary_base' => 'field_usajobs_salary_base',
    'field_usajobs_salary_min' => 'field_usajobs_salary_min',
    'field_usajobs_salary_max' => 'field_usajobs_salary_max',
    'field_usajobs_gslevel_ref' => 'field_usajobs_gslevel_ref',
    'created' => 'created',
    'field_usajobs_date_end_1' => 'field_usajobs_date_end_1',
    'php' => 'php',
    'field_usajobs_url' => 'field_usajobs_url',
    'sharethis' => 'sharethis',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'field_usajobs_date_end_1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_salary_base' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_salary_min' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_salary_max' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_gslevel_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_date_end_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sharethis' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'ShareThis AJAX Workaround';
  $handler->display->display_options['header']['area']['content'] = '<!-- Note: This is a work around since the ShareThis library does not use proper Drupal Behaviors for AJAX integration -->
<script type=\'text/javascript\'>stLight.readyRun = false;</script>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Open Positions';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>There are no open positions at this time</h2>
<p>Currently, there are no open positions available for display. If you have selected a filter criteria, please adjust your settings to display additional postings.</p>
<p>If you would like to be notified when positions become available, please <a href="#">contact a recruiter</a> to be placed on a notification list.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Announcement Number */
  $handler->display->display_options['fields']['field_usajobs_no']['id'] = 'field_usajobs_no';
  $handler->display->display_options['fields']['field_usajobs_no']['table'] = 'field_data_field_usajobs_no';
  $handler->display->display_options['fields']['field_usajobs_no']['field'] = 'field_usajobs_no';
  $handler->display->display_options['fields']['field_usajobs_no']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_no']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_no']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Position';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span data-guid="[field_usajobs_no]">[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'position';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['element_class'] = 'desc';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '255',
  );
  /* Field: Content: Salary Basis */
  $handler->display->display_options['fields']['field_usajobs_salary_base']['id'] = 'field_usajobs_salary_base';
  $handler->display->display_options['fields']['field_usajobs_salary_base']['table'] = 'field_data_field_usajobs_salary_base';
  $handler->display->display_options['fields']['field_usajobs_salary_base']['field'] = 'field_usajobs_salary_base';
  $handler->display->display_options['fields']['field_usajobs_salary_base']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_salary_base']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_salary_base']['element_label_colon'] = FALSE;
  /* Field: Content: Salary Min */
  $handler->display->display_options['fields']['field_usajobs_salary_min']['id'] = 'field_usajobs_salary_min';
  $handler->display->display_options['fields']['field_usajobs_salary_min']['table'] = 'field_data_field_usajobs_salary_min';
  $handler->display->display_options['fields']['field_usajobs_salary_min']['field'] = 'field_usajobs_salary_min';
  $handler->display->display_options['fields']['field_usajobs_salary_min']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_salary_min']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_salary_min']['element_label_colon'] = FALSE;
  /* Field: Content: Salary Max */
  $handler->display->display_options['fields']['field_usajobs_salary_max']['id'] = 'field_usajobs_salary_max';
  $handler->display->display_options['fields']['field_usajobs_salary_max']['table'] = 'field_data_field_usajobs_salary_max';
  $handler->display->display_options['fields']['field_usajobs_salary_max']['field'] = 'field_usajobs_salary_max';
  $handler->display->display_options['fields']['field_usajobs_salary_max']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_salary_max']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_salary_max']['element_label_colon'] = FALSE;
  /* Field: Content: Grade */
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['id'] = 'field_usajobs_gslevel_ref';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['table'] = 'field_data_field_usajobs_gslevel_ref';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['field'] = 'field_usajobs_gslevel_ref';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['alter']['text'] = '<div>[field_usajobs_gslevel_ref]</div>
<div>[field_usajobs_salary_min]-[field_usajobs_salary_max]</div>
<div>([field_usajobs_salary_base])</div>';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['delta_first_last'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_gslevel_ref']['separator'] = '/';
  /* Field: Custom: Grade */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Grade';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Grade';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div>[field_usajobs_gslevel_ref]</div>
<div>[field_usajobs_salary_min]-[field_usajobs_salary_max]</div>
<div>([field_usajobs_salary_base])</div>
';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Post Date';
  $handler->display->display_options['fields']['created']['element_class'] = 'post-date';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'm/d/Y';
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['id'] = 'field_usajobs_date_end_1';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['table'] = 'field_data_field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['field'] = 'field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['label'] = 'Closing Date';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['empty'] = '[created]';
  $handler->display->display_options['fields']['field_usajobs_date_end_1']['settings'] = array(
    'format_type' => 'm_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content : Locations */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Content : Locations';
  $handler->display->display_options['fields']['php']['label'] = 'Locations';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$node = node_load($row->nid);
foreach($node->field_usajobs_locations[\'und\'] as $key=>$value){
$tempString = $value[\'value\'];
$exploded = explode(";",$tempString);
if(sizeof($exploded)>1){
return "Multiple Locations (".sizeof($exploded).")";
}
else{
return $tempString;
}
}';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_usajobs_url']['id'] = 'field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['table'] = 'field_data_field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['field'] = 'field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url']['label'] = '';
  $handler->display->display_options['fields']['field_usajobs_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['text'] = 'Apply';
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['path'] = '[field_usajobs_url]';
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['rel'] = 'nofollow';
  $handler->display->display_options['fields']['field_usajobs_url']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_usajobs_url']['element_label_colon'] = FALSE;
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['exclude'] = TRUE;
  /* Field: Custom Field: Actions */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom Field: Actions';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_usajobs_url]
<ul class="action-items no-js">
<li class="item job-info">Job Information</li>
<li class="item social-sharing">Share</li>
<li class="item contact">Contact</li>
</ul>
<div class="sharethis">[sharethis]</div>';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'actions';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Category (field_usajobs_category_ref) */
  $handler->display->display_options['arguments']['field_usajobs_category_ref_tid']['id'] = 'field_usajobs_category_ref_tid';
  $handler->display->display_options['arguments']['field_usajobs_category_ref_tid']['table'] = 'field_data_field_usajobs_category_ref';
  $handler->display->display_options['arguments']['field_usajobs_category_ref_tid']['field'] = 'field_usajobs_category_ref_tid';
  $handler->display->display_options['arguments']['field_usajobs_category_ref_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_usajobs_category_ref_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_usajobs_category_ref_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_usajobs_category_ref_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'usajobs' => 'usajobs',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Category (field_usajobs_category_ref) */
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['id'] = 'field_usajobs_category_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['table'] = 'field_data_field_usajobs_category_ref';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['field'] = 'field_usajobs_category_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['operator_id'] = 'field_usajobs_category_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['operator'] = 'field_usajobs_category_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['identifier'] = 'field_usajobs_category_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['vocabulary'] = 'usa_jobs_categories';
  /* Filter criterion: Content: Grade (field_usajobs_gslevel_ref) */
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['id'] = 'field_usajobs_gslevel_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['table'] = 'field_data_field_usajobs_gslevel_ref';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['field'] = 'field_usajobs_gslevel_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['operator_id'] = 'field_usajobs_gslevel_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['label'] = 'Grade';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['operator'] = 'field_usajobs_gslevel_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['identifier'] = 'field_usajobs_gslevel_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_usajobs_gslevel_ref_tid']['vocabulary'] = 'government_schedule';
  /* Filter criterion: Content: Work Type Category (field_field_usajobs_work_type) */
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['id'] = 'field_field_usajobs_work_type_tid';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['table'] = 'field_data_field_field_usajobs_work_type';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['field'] = 'field_field_usajobs_work_type_tid';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['operator_id'] = 'field_field_usajobs_work_type_tid_op';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['label'] = 'Job Type';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['operator'] = 'field_field_usajobs_work_type_tid_op';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['identifier'] = 'field_field_usajobs_work_type_tid';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['vocabulary'] = 'usa_jobs_work_type';
  $handler->display->display_options['filters']['field_field_usajobs_work_type_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'careers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Careers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['usajobs'] = $view;

  return $export;
}
