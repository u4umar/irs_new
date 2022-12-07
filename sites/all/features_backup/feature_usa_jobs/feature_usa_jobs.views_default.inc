<?php
/**
 * @file
 * feature_usa_jobs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_usa_jobs_views_default_views() {
  $export = array();

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
  /* Filter criterion: Content: Published */
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
  $handler->display->display_options['fields']['field_usajobs_url']['click_sort_column'] = 'value';
  $handler->display->display_options['fields']['field_usajobs_url']['type'] = 'text_default';
  $handler->display->display_options['fields']['field_usajobs_url']['group_column'] = 'value';
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="job-info"><span class="heading">Featured Job</span> - [title], [php] <span class="actions"><a href="[field_usajobs_url]" target="_blank">Apply</a><a href="" id="sharethis-trigger">Share</a></span></div>
<div class="social-sharing">[sharethis]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';

  /* Display: Page - Careers by Post Date */
  $handler = $view->new_display('page', 'Page - Careers by Post Date', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Careers';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'USAJobs page by-date';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'created' => 'created',
    'field_usajobs_date_end' => 'field_usajobs_date_end',
    'field_usajobs_locations' => 'field_usajobs_locations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
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
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_date_end' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usajobs_locations' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Position';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'position';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Import Summary */
  $handler->display->display_options['fields']['field_usajobs_import_summary']['id'] = 'field_usajobs_import_summary';
  $handler->display->display_options['fields']['field_usajobs_import_summary']['table'] = 'field_data_field_usajobs_import_summary';
  $handler->display->display_options['fields']['field_usajobs_import_summary']['field'] = 'field_usajobs_import_summary';
  $handler->display->display_options['fields']['field_usajobs_import_summary']['label'] = 'Description';
  $handler->display->display_options['fields']['field_usajobs_import_summary']['exclude'] = TRUE;
  /* Field: Content: Custom Summary */
  $handler->display->display_options['fields']['field_usajobs_custom_summary']['id'] = 'field_usajobs_custom_summary';
  $handler->display->display_options['fields']['field_usajobs_custom_summary']['table'] = 'field_data_field_usajobs_custom_summary';
  $handler->display->display_options['fields']['field_usajobs_custom_summary']['field'] = 'field_usajobs_custom_summary';
  $handler->display->display_options['fields']['field_usajobs_custom_summary']['label'] = 'Description';
  $handler->display->display_options['fields']['field_usajobs_custom_summary']['empty'] = '[field_usajobs_import_summary]';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Post Date';
  $handler->display->display_options['fields']['created']['element_class'] = 'post-date';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'm/d/Y';
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_usajobs_date_end']['id'] = 'field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end']['table'] = 'field_data_field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end']['field'] = 'field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end']['label'] = 'Closing Date';
  $handler->display->display_options['fields']['field_usajobs_date_end']['element_class'] = 'close-date';
  $handler->display->display_options['fields']['field_usajobs_date_end']['settings'] = array(
    'format_type' => 'irs_jobs_short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Locations */
  $handler->display->display_options['fields']['field_usajobs_locations']['id'] = 'field_usajobs_locations';
  $handler->display->display_options['fields']['field_usajobs_locations']['table'] = 'field_data_field_usajobs_locations';
  $handler->display->display_options['fields']['field_usajobs_locations']['field'] = 'field_usajobs_locations';
  $handler->display->display_options['fields']['field_usajobs_locations']['label'] = 'Location';
  $handler->display->display_options['fields']['field_usajobs_locations']['element_class'] = 'locations';
  /* Field: URL Action */
  $handler->display->display_options['fields']['field_usajobs_url_1']['id'] = 'field_usajobs_url_1';
  $handler->display->display_options['fields']['field_usajobs_url_1']['table'] = 'field_data_field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url_1']['field'] = 'field_usajobs_url';
  $handler->display->display_options['fields']['field_usajobs_url_1']['ui_name'] = 'URL Action';
  $handler->display->display_options['fields']['field_usajobs_url_1']['label'] = 'Actions';
  $handler->display->display_options['fields']['field_usajobs_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_usajobs_url_1']['element_class'] = 'actions';
  $handler->display->display_options['fields']['field_usajobs_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_usajobs_url_1']['click_sort_column'] = 'url';
  /* Field: Custom Field: Actions */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom Field: Actions';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_usajobs_url_1]';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'actions';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
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
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Posted On';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
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
