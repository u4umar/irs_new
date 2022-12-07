<?php

/**
 * @file
 * irs_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function irs_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'administrative_tools';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Administrative Tools';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'views_bulk_operations' => 'views_bulk_operations',
    'uid' => 'uid',
    'created' => 'created',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Author';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'm_d_y';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Date Modified';
  $handler->display->display_options['fields']['changed']['date_format'] = 'm_d_y';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
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
  $export['administrative_tools'] = $view;

  $view = new view();
  $view->name = 'advanced_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Advanced Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Advanced Content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'title' => 'title',
    'name' => 'name',
    'path' => 'path',
    'edit_node' => 'edit_node',
    'publishcontent' => 'publishcontent',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 1,
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
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'publishcontent' => array(
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<ul class="action-links">
<li><a href="/node/add">Add content</a></li>
</ul>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results are currently available. Please adjust your filters and try again.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Author';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'System URL';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Field: Content: Publish link */
  $handler->display->display_options['fields']['publishcontent']['id'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['table'] = 'node';
  $handler->display->display_options['fields']['publishcontent']['field'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['label'] = '';
  $handler->display->display_options['fields']['publishcontent']['exclude'] = TRUE;
  $handler->display->display_options['fields']['publishcontent']['element_label_colon'] = FALSE;
  /* Field: Content: Actions */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Content: Actions';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul class="links inline">
<li>[edit_node]</li>
<li>[publishcontent]</li>
</ul>';
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
    'article' => 'article',
    'award' => 'award',
    'page' => 'page',
    'showcase' => 'showcase',
    'usa_job' => 'usa_job',
    'webform' => 'webform',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/advanced';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Advanced';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page - Vacancies Manager */
  $handler = $view->new_display('page', 'Page - Vacancies Manager', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'USAJobs Vacancy Administrative Search';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'title' => 'title',
    'name' => 'name',
    'path' => 'path',
    'edit_node' => 'edit_node',
    'publishcontent' => 'publishcontent',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 1,
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
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'publishcontent' => array(
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<ul class="action-links">
<li><a href="/node/add">Add content</a></li>
</ul>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results are currently available. Please adjust your filters and try again.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Author';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Position';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Announcement Number */
  $handler->display->display_options['fields']['field_usajobs_no']['id'] = 'field_usajobs_no';
  $handler->display->display_options['fields']['field_usajobs_no']['table'] = 'field_data_field_usajobs_no';
  $handler->display->display_options['fields']['field_usajobs_no']['field'] = 'field_usajobs_no';
  $handler->display->display_options['fields']['field_usajobs_no']['label'] = 'Announcement #';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_usajobs_date_start']['id'] = 'field_usajobs_date_start';
  $handler->display->display_options['fields']['field_usajobs_date_start']['table'] = 'field_data_field_usajobs_date_start';
  $handler->display->display_options['fields']['field_usajobs_date_start']['field'] = 'field_usajobs_date_start';
  $handler->display->display_options['fields']['field_usajobs_date_start']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_usajobs_date_end']['id'] = 'field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end']['table'] = 'field_data_field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end']['field'] = 'field_usajobs_date_end';
  $handler->display->display_options['fields']['field_usajobs_date_end']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Field: Content: Publish link */
  $handler->display->display_options['fields']['publishcontent']['id'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['table'] = 'node';
  $handler->display->display_options['fields']['publishcontent']['field'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['label'] = '';
  $handler->display->display_options['fields']['publishcontent']['exclude'] = TRUE;
  $handler->display->display_options['fields']['publishcontent']['element_label_colon'] = FALSE;
  /* Field: Content: Actions */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Content: Actions';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul class="links inline">
<li>[edit_node]</li>
<li>[publishcontent]</li>
</ul>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'usajobs' => 'usajobs',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Position';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Announcement Number (field_usajobs_no) */
  $handler->display->display_options['filters']['field_usajobs_no_value']['id'] = 'field_usajobs_no_value';
  $handler->display->display_options['filters']['field_usajobs_no_value']['table'] = 'field_data_field_usajobs_no';
  $handler->display->display_options['filters']['field_usajobs_no_value']['field'] = 'field_usajobs_no_value';
  $handler->display->display_options['filters']['field_usajobs_no_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_usajobs_no_value']['group'] = 1;
  $handler->display->display_options['filters']['field_usajobs_no_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_no_value']['expose']['operator_id'] = 'field_usajobs_no_value_op';
  $handler->display->display_options['filters']['field_usajobs_no_value']['expose']['label'] = 'Announcement Number';
  $handler->display->display_options['filters']['field_usajobs_no_value']['expose']['operator'] = 'field_usajobs_no_value_op';
  $handler->display->display_options['filters']['field_usajobs_no_value']['expose']['identifier'] = 'field_usajobs_no_value';
  $handler->display->display_options['filters']['field_usajobs_no_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Category (field_usajobs_category_ref) */
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['id'] = 'field_usajobs_category_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['table'] = 'field_data_field_usajobs_category_ref';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['field'] = 'field_usajobs_category_ref_tid';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['operator_id'] = 'field_usajobs_category_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['label'] = 'Job Category';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['operator'] = 'field_usajobs_category_ref_tid_op';
  $handler->display->display_options['filters']['field_usajobs_category_ref_tid']['expose']['identifier'] = 'field_usajobs_category_ref_tid';
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
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/vacancies';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Vacancies Manager';
  $handler->display->display_options['menu']['weight'] = '-3';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['advanced_content'] = $view;

  $view = new view();
  $view->name = 'application_process';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Application Process';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Block - Application Process';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'flexslider';
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
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
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
    'application_process' => 'application_process',
  );

  /* Display: Block - Application Process */
  $handler = $view->new_display('block', 'Block - Application Process', 'block_application_process');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'application-process block application-process-flex-slider';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'application_process';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Icon Thumbnail */
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['id'] = 'field_app_process_icon_thumbnail';
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['table'] = 'field_data_field_app_process_icon_thumbnail';
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['field'] = 'field_app_process_icon_thumbnail';
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['element_wrapper_class'] = 'icon-thumbnail';
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'summary';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'learn-more';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Learn More';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $export['application_process'] = $view;

  $view = new view();
  $view->name = 'basic_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Basic Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
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

  /* Display: List - Homepage Featured List */
  $handler = $view->new_display('block', 'List - Homepage Featured List', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'homepage featured-pages';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'page' => 'page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Benefits - Training */
  $handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['table'] = 'node';
  $handler->display->display_options['filters']['nid_1']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['ui_name'] = 'Content: Benefits - Training';
  $handler->display->display_options['filters']['nid_1']['value']['value'] = '35';
  $handler->display->display_options['filters']['nid_1']['group'] = 2;
  /* Filter criterion: Content: Benefits - Work Life Programs */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['ui_name'] = 'Content: Benefits - Work Life Programs';
  $handler->display->display_options['filters']['nid']['value']['value'] = '28';
  $handler->display->display_options['filters']['nid']['group'] = 2;
  /* Filter criterion: Content: Benefits - Salary and Financial */
  $handler->display->display_options['filters']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['filters']['nid_2']['table'] = 'node';
  $handler->display->display_options['filters']['nid_2']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_2']['ui_name'] = 'Content: Benefits - Salary and Financial';
  $handler->display->display_options['filters']['nid_2']['value']['value'] = '26';
  $handler->display->display_options['filters']['nid_2']['group'] = 2;
  /* Filter criterion: Content: Benefits - Alternative Leave Schedule */
  $handler->display->display_options['filters']['nid_3']['id'] = 'nid_3';
  $handler->display->display_options['filters']['nid_3']['table'] = 'node';
  $handler->display->display_options['filters']['nid_3']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_3']['ui_name'] = 'Content: Benefits - Alternative Leave Schedule';
  $handler->display->display_options['filters']['nid_3']['value']['value'] = '27';
  $handler->display->display_options['filters']['nid_3']['group'] = 2;

  /* Display: Block - Sitemap Skipnav */
  $handler = $view->new_display('block', 'Block - Sitemap Skipnav', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sitemap skipnav list-asc';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['class'] = 'element-invisible';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Metadata : Truncated Category [A-Z] */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Metadata : Truncated Category [A-Z]';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title_1]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '#skipnav-[title_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'system_pages' => 'system_pages',
  );

  /* Display: Page - Sitemap */
  $handler = $view->new_display('page', 'Page - Sitemap', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'IRS Careers Sitemap (A-Z)';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'basic-page page sitemap';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'nothing' => 'nothing',
    'title' => 'title',
    'path' => 'path',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Metadata: Truncated Category [A-Z] */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Metadata: Truncated Category [A-Z]';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<span id="skipnav-[title_1]">[title_1]</span>';
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Grouping: A-Z Category (truncated) */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Grouping: A-Z Category (truncated)';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span id="skipnav-[title_1]">[title_1]</span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Page';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'URL Path';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_subpage_imagery' => 'featured_subpage_imagery',
    'showcase' => 'showcase',
    'panel' => 'panel',
    'system_pages' => 'system_pages',
    'usajobs' => 'usajobs',
    'youtube_videos' => 'youtube_videos',
  );
  $handler->display->display_options['path'] = 'sitemap';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sitemap';
  $handler->display->display_options['menu']['weight'] = '49';
  $handler->display->display_options['menu']['name'] = 'menu-footer';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page - Application Process */
  $handler = $view->new_display('page', 'Page - Application Process', 'page_application_process');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Start your career with the IRS';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'application_process';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'summary';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Icon Thumbnail */
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['id'] = 'field_app_process_icon_thumbnail';
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['table'] = 'field_data_field_app_process_icon_thumbnail';
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['field'] = 'field_app_process_icon_thumbnail';
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['element_wrapper_class'] = 'icon-thumbnail';
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_app_process_icon_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'learn-more';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Learn More';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
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
    'application_process' => 'application_process',
  );
  $handler->display->display_options['path'] = 'application-process';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Application Process';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: List - Resources Featured List */
  $handler = $view->new_display('block', 'List - Resources Featured List', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'resources featured-pages';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'flip page';
  $handler->display->display_options['style_options']['class'] = 'page-list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list equal-row-height-columns';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Metadata: NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Metadata: NID';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'desc';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: View: Contextual Menu Children */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'View: Contextual Menu Children';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print views_embed_view(\'basic_pages\',\'block_6\', $row->nid);
?> ';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="face front">
<div class="title">[title]</div>
<div class="desc">[body]</div>
</div>
<div class="face back">
<div class="title">[title]</div>
<div>[php]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'card';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Benefits Programs';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['value'] = 'Equal Opportunity';
  $handler->display->display_options['filters']['title_1']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'title';
  $handler->display->display_options['filters']['title_2']['value'] = 'Job Tools';
  $handler->display->display_options['filters']['title_2']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_3']['id'] = 'title_3';
  $handler->display->display_options['filters']['title_3']['table'] = 'node';
  $handler->display->display_options['filters']['title_3']['field'] = 'title';
  $handler->display->display_options['filters']['title_3']['value'] = 'Job Descriptions';
  $handler->display->display_options['filters']['title_3']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );

  /* Display: List - Generic Subpage Featured */
  $handler = $view->new_display('block', 'List - Generic Subpage Featured', 'block_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'generic-subpage featured';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'desc';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => 600,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Downloads';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['value'] = 'Games';
  $handler->display->display_options['filters']['title_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: List - About Us Featured List */
  $handler = $view->new_display('block', 'List - About Us Featured List', 'block_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'about-us featured-pages';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'flip page';
  $handler->display->display_options['style_options']['class'] = 'page-list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list equal-row-height-columns';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Metadata: NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Metadata: NID';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'desc';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: View: Contextual Menu Children */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'View: Contextual Menu Children';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print views_embed_view(\'basic_pages\',\'block_6\', $row->nid);
?> ';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="face front">
<div class="title">[title]</div>
<div class="desc">[body]</div>
</div>
<div class="face back">
<div class="title">[title]</div>
<div>[php]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'card';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Who Is The IRS?';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['value'] = 'Why IRS?';
  $handler->display->display_options['filters']['title_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: List - Related Submenus */
  $handler = $view->new_display('block', 'List - Related Submenus', 'block_6');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'menu';
  $handler->display->display_options['style_options']['class'] = 'menu-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no menu items available for this page.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Menu: Node id */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'menu_links';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['nid']['depth'] = '1';
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
    'page' => 'page',
    'job_descriptions' => 'job_descriptions',
  );
  $export['basic_pages'] = $view;

  $view = new view();
  $view->name = 'custom_sorting_interfaces';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Custom Sorting Interfaces';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Custom Sorting Interfaces';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Custom Ordering';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h3>Custom Ordering</h3>
Use the drag and drop interface below to set a custom order for elements occurring in corresponding displays. Items at the top of the sorting list will appear earlier.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
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
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'application_process' => 'application_process',
    'frequently_asked_questions' => 'frequently_asked_questions',
    'showcase' => 'showcase',
    'youtube_videos' => 'youtube_videos',
  );
  $handler->display->display_options['filters']['type_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['label'] = 'Select the Content Type';
  $handler->display->display_options['filters']['type_1']['expose']['description'] = 'Determine which content type you would like to customize the sorting order of.';
  $handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['type_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type_1']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'admin/content/drag-drop-sort';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Drag and Drop';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['custom_sorting_interfaces'] = $view;

  $view = new view();
  $view->name = 'downloads';
  $view->description = 'View to display publicly available downloads';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Downloads';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Downloads List';
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
    'download' => 'download',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[node:file:url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'download-title';

  /* Display: View: Downloads List */
  $handler = $view->new_display('block', 'View: Downloads List', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Block view - list of publicly available downloads';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_download_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Download Attachment (field_download_attachment:fid) */
  $handler->display->display_options['relationships']['field_download_attachment_fid']['id'] = 'field_download_attachment_fid';
  $handler->display->display_options['relationships']['field_download_attachment_fid']['table'] = 'field_data_field_download_attachment';
  $handler->display->display_options['relationships']['field_download_attachment_fid']['field'] = 'field_download_attachment_fid';
  $handler->display->display_options['relationships']['field_download_attachment_fid']['required'] = TRUE;
  /* Relationship: Content: Download Category (field_download_category) */
  $handler->display->display_options['relationships']['field_download_category_tid']['id'] = 'field_download_category_tid';
  $handler->display->display_options['relationships']['field_download_category_tid']['table'] = 'field_data_field_download_category';
  $handler->display->display_options['relationships']['field_download_category_tid']['field'] = 'field_download_category_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_download_attachment_fid';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uri']['element_wrapper_class'] = 'download-path';
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[uri]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: File: Size */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['relationship'] = 'field_download_attachment_fid';
  $handler->display->display_options['fields']['filesize']['element_wrapper_class'] = 'download-size';
  /* Field: Content: Download Category */
  $handler->display->display_options['fields']['field_download_category']['id'] = 'field_download_category';
  $handler->display->display_options['fields']['field_download_category']['table'] = 'field_data_field_download_category';
  $handler->display->display_options['fields']['field_download_category']['field'] = 'field_download_category';
  $handler->display->display_options['fields']['field_download_category']['label'] = '';
  $handler->display->display_options['fields']['field_download_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_download_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Download Category (field_download_category) */
  $handler->display->display_options['sorts']['field_download_category_tid']['id'] = 'field_download_category_tid';
  $handler->display->display_options['sorts']['field_download_category_tid']['table'] = 'field_data_field_download_category';
  $handler->display->display_options['sorts']['field_download_category_tid']['field'] = 'field_download_category_tid';
  $handler->display->display_options['sorts']['field_download_category_tid']['expose']['label'] = 'Download Category (field_download_category)';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['block_description'] = 'View: Downloads List';
  $export['downloads'] = $view;

  $view = new view();
  $view->name = 'featured_subpage_imagery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured Subpage Imagery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Subpage Imagery';
  $handler->display->display_options['css_class'] = 'subpage-imagery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
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
    'featured_subpage_imagery' => 'featured_subpage_imagery',
  );

  /* Display: Related by Page References */
  $handler = $view->new_display('block', 'Related by Page References', 'block');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'featured_subpage_imagery:block_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Uploader */
  $handler->display->display_options['fields']['field_header_image_uploader']['id'] = 'field_header_image_uploader';
  $handler->display->display_options['fields']['field_header_image_uploader']['table'] = 'field_data_field_header_image_uploader';
  $handler->display->display_options['fields']['field_header_image_uploader']['field'] = 'field_header_image_uploader';
  $handler->display->display_options['fields']['field_header_image_uploader']['label'] = '';
  $handler->display->display_options['fields']['field_header_image_uploader']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_header_image_uploader']['alter']['path'] = '<front>';
  $handler->display->display_options['fields']['field_header_image_uploader']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_image_uploader']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_image_uploader']['settings'] = array(
    'image_style' => 'adaptive_image',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Tag Pages to Display (field_header_image_references) */
  $handler->display->display_options['arguments']['field_header_image_references_target_id']['id'] = 'field_header_image_references_target_id';
  $handler->display->display_options['arguments']['field_header_image_references_target_id']['table'] = 'field_data_field_header_image_references';
  $handler->display->display_options['arguments']['field_header_image_references_target_id']['field'] = 'field_header_image_references_target_id';
  $handler->display->display_options['arguments']['field_header_image_references_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_header_image_references_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_header_image_references_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_header_image_references_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_header_image_references_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_header_image_references_target_id']['validate']['type'] = 'node';

  /* Display: Default Display */
  $handler = $view->new_display('block', 'Default Display', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Uploader */
  $handler->display->display_options['fields']['field_header_image_uploader']['id'] = 'field_header_image_uploader';
  $handler->display->display_options['fields']['field_header_image_uploader']['table'] = 'field_data_field_header_image_uploader';
  $handler->display->display_options['fields']['field_header_image_uploader']['field'] = 'field_header_image_uploader';
  $handler->display->display_options['fields']['field_header_image_uploader']['label'] = '';
  $handler->display->display_options['fields']['field_header_image_uploader']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_header_image_uploader']['alter']['path'] = '<front>';
  $handler->display->display_options['fields']['field_header_image_uploader']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_image_uploader']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_image_uploader']['settings'] = array(
    'image_style' => 'adaptive_image',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'featured_subpage_imagery' => 'featured_subpage_imagery',
  );
  /* Filter criterion: Content: Included in Default Rotation (field_header_image_default) */
  $handler->display->display_options['filters']['field_header_image_default_value']['id'] = 'field_header_image_default_value';
  $handler->display->display_options['filters']['field_header_image_default_value']['table'] = 'field_data_field_header_image_default';
  $handler->display->display_options['filters']['field_header_image_default_value']['field'] = 'field_header_image_default_value';
  $handler->display->display_options['filters']['field_header_image_default_value']['value'] = array(
    1 => '1',
  );
  $export['featured_subpage_imagery'] = $view;

  $view = new view();
  $view->name = 'frequently_asked_questions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frequently Asked Questions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frequently Asked Questions';
  $handler->display->display_options['css_class'] = 'faqs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
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
    'frequently_asked_questions' => 'frequently_asked_questions',
  );

  /* Display: Page - Frequently Asked Questions by Date */
  $handler = $view->new_display('page', 'Page - Frequently Asked Questions by Date', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'faqs page by-date';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'summary';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['path'] = 'frequently-asked-questions';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'FAQs';
  $handler->display->display_options['menu']['name'] = 'menu-global-navigation';
  $export['frequently_asked_questions'] = $view;

  $view = new view();
  $view->name = 'gs_schedules';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'GS Schedules';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'GS Schedules';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_wrapper_class'] = 'summary';
  $handler->display->display_options['fields']['description']['empty'] = 'No results currently populate this field.';
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['label'] = '';
  $handler->display->display_options['fields']['edit_term']['element_class'] = 'context edit';
  $handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_term']['text'] = 'Edit';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'government_schedule' => 'government_schedule',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'government-schedule page gs-schedules-term';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
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
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'government_schedule' => 'government_schedule',
  );
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Filter by Grade';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'government_schedule';
  $handler->display->display_options['path'] = 'resources/understanding-gs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Understanding the GS Schedule';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['gs_schedules'] = $view;

  $view = new view();
  $view->name = 'header_graphics';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Header Graphics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Header Graphics';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_header_image_uploader' => 'field_header_image_uploader',
    'field_header_image_default' => 'field_header_image_default',
    'field_header_image_references' => 'field_header_image_references',
    'created' => 'created',
    'edit_node' => 'edit_node',
    'publishcontent' => 'publishcontent',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_header_image_uploader' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_header_image_default' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_header_image_references' => array(
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
    'edit_node' => array(
      'align' => '',
      'separator' => ' - ',
      'empty_column' => 0,
    ),
    'publishcontent' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image Uploader */
  $handler->display->display_options['fields']['field_header_image_uploader']['id'] = 'field_header_image_uploader';
  $handler->display->display_options['fields']['field_header_image_uploader']['table'] = 'field_data_field_header_image_uploader';
  $handler->display->display_options['fields']['field_header_image_uploader']['field'] = 'field_header_image_uploader';
  $handler->display->display_options['fields']['field_header_image_uploader']['label'] = 'Image Preview';
  $handler->display->display_options['fields']['field_header_image_uploader']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_image_uploader']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Included in Default Rotation */
  $handler->display->display_options['fields']['field_header_image_default']['id'] = 'field_header_image_default';
  $handler->display->display_options['fields']['field_header_image_default']['table'] = 'field_data_field_header_image_default';
  $handler->display->display_options['fields']['field_header_image_default']['field'] = 'field_header_image_default';
  /* Field: Content: Tag Pages to Display */
  $handler->display->display_options['fields']['field_header_image_references']['id'] = 'field_header_image_references';
  $handler->display->display_options['fields']['field_header_image_references']['table'] = 'field_data_field_header_image_references';
  $handler->display->display_options['fields']['field_header_image_references']['field'] = 'field_header_image_references';
  $handler->display->display_options['fields']['field_header_image_references']['label'] = 'Linked to Pages';
  $handler->display->display_options['fields']['field_header_image_references']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_header_image_references']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Publish link */
  $handler->display->display_options['fields']['publishcontent']['id'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['table'] = 'node';
  $handler->display->display_options['fields']['publishcontent']['field'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['label'] = 'Status';
  $handler->display->display_options['fields']['publishcontent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['publishcontent']['unpublish'] = 'Click to Unpublish';
  $handler->display->display_options['fields']['publishcontent']['publish'] = 'Click to Publish';
  /* Field: Content: Link to delete content */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_subpage_imagery' => 'featured_subpage_imagery',
  );

  /* Display: Header Graphics In Use */
  $handler = $view->new_display('page', 'Header Graphics In Use', 'page');
  $handler->display->display_options['path'] = 'admin/content/headers';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Header Graphics';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['header_graphics'] = $view;

  $view = new view();
  $view->name = 'office_locations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Office Locations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Locations';
  $handler->display->display_options['css_class'] = 'office-locations';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = '';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'location';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Metadata: City */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['ui_name'] = 'Metadata: City';
  $handler->display->display_options['fields']['field_location_city']['label'] = '';
  $handler->display->display_options['fields']['field_location_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_city']['element_label_colon'] = FALSE;
  /* Field: Metadata: State */
  $handler->display->display_options['fields']['field_location_state']['id'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['table'] = 'field_data_field_location_state';
  $handler->display->display_options['fields']['field_location_state']['field'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['ui_name'] = 'Metadata: State';
  $handler->display->display_options['fields']['field_location_state']['label'] = '';
  $handler->display->display_options['fields']['field_location_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_state']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span data-geoaddress="[field_location_city]+[field_location_state]">[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'desc';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'location' => 'location',
  );

  /* Display: Block - Interactive Map Overview */
  $handler = $view->new_display('block', 'Block - Interactive Map Overview', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'office-locations interactive-map list';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'location';
  $handler->display->display_options['style_options']['class'] = 'location-dataset';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<script type="text/javascript" src="/sites/default/themes/irsjobs/js/infobox_packed.js"></script>
<div class="google-map" id="regional-office-map" style="height:550px;width:960px; margin:0 auto;background-color:#f6f6f4;"></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Locations Link';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/about/locations/">Locations</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Metadata: City */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['ui_name'] = 'Metadata: City';
  $handler->display->display_options['fields']['field_location_city']['label'] = '';
  $handler->display->display_options['fields']['field_location_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_city']['element_label_colon'] = FALSE;
  /* Field: Metadata: State */
  $handler->display->display_options['fields']['field_location_state']['id'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['table'] = 'field_data_field_location_state';
  $handler->display->display_options['fields']['field_location_state']['field'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['ui_name'] = 'Metadata: State';
  $handler->display->display_options['fields']['field_location_state']['label'] = '';
  $handler->display->display_options['fields']['field_location_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_state']['element_label_colon'] = FALSE;
  /* Field: Metadata: Office Type */
  $handler->display->display_options['fields']['field_location_office_type']['id'] = 'field_location_office_type';
  $handler->display->display_options['fields']['field_location_office_type']['table'] = 'field_data_field_location_office_type';
  $handler->display->display_options['fields']['field_location_office_type']['field'] = 'field_location_office_type';
  $handler->display->display_options['fields']['field_location_office_type']['ui_name'] = 'Metadata: Office Type';
  $handler->display->display_options['fields']['field_location_office_type']['label'] = '';
  $handler->display->display_options['fields']['field_location_office_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_office_type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span data-officeType="[field_location_office_type]" data-geoaddress="[field_location_city]+[field_location_state]">[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Office Type (field_location_office_type) */
  $handler->display->display_options['sorts']['field_location_office_type_value']['id'] = 'field_location_office_type_value';
  $handler->display->display_options['sorts']['field_location_office_type_value']['table'] = 'field_data_field_location_office_type';
  $handler->display->display_options['sorts']['field_location_office_type_value']['field'] = 'field_location_office_type_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';

  /* Display: Block - Static Map by NID */
  $handler = $view->new_display('block', 'Block - Static Map by NID', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'office-locations static-map';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'static-map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Metadata: City */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['ui_name'] = 'Metadata: City';
  $handler->display->display_options['fields']['field_location_city']['label'] = '';
  $handler->display->display_options['fields']['field_location_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_city']['element_label_colon'] = FALSE;
  /* Field: Metadata: State */
  $handler->display->display_options['fields']['field_location_state']['id'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['table'] = 'field_data_field_location_state';
  $handler->display->display_options['fields']['field_location_state']['field'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['ui_name'] = 'Metadata: State';
  $handler->display->display_options['fields']['field_location_state']['label'] = '';
  $handler->display->display_options['fields']['field_location_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_state']['element_label_colon'] = FALSE;
  /* Field: Content: Static Map */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Content: Static Map';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<img src="http://maps.googleapis.com/maps/api/staticmap?center=[field_location_city]+[field_location_state]&scale=1&zoom=13&size=575x240&maptype=roadmap&markers=icon:http://irsjobs.staging.metrostarsystems.com/sites/default/themes/irsjobs/img/icons/static-map.png%7Ccolor:blue%7C[field_location_city],[field_location_state]&sensor=false" alt="" title="" />';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'location' => 'location',
  );

  /* Display: List - Regional Offices */
  $handler = $view->new_display('block', 'List - Regional Offices', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'office-locations office-type regional';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'location flip';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Metadata: City */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['ui_name'] = 'Metadata: City';
  $handler->display->display_options['fields']['field_location_city']['label'] = '';
  $handler->display->display_options['fields']['field_location_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_city']['element_label_colon'] = FALSE;
  /* Field: Metadata: State */
  $handler->display->display_options['fields']['field_location_state']['id'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['table'] = 'field_data_field_location_state';
  $handler->display->display_options['fields']['field_location_state']['field'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['ui_name'] = 'Metadata: State';
  $handler->display->display_options['fields']['field_location_state']['label'] = '';
  $handler->display->display_options['fields']['field_location_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_state']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span data-geoaddress="[field_location_city]+[field_location_state]">[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'desc';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: View: Related Satellite Offices */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'View: Related Satellite Offices';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_wrapper_class'] = 'related-offices';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print views_embed_view(\'office_locations\',\'block_4\', $row->nid);
?> ';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Custom: Flip Card */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Custom: Flip Card';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="face front">
<div class="title">[title]</div>
<div class="desc">[body]</div>
</div>

<div class="face back">
<div class="title">[title]</div>
<div>[php]</div>
</div>';
  $handler->display->display_options['fields']['nothing_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'card';
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
    'location' => 'location',
  );
  /* Filter criterion: Content: Office Type (field_location_office_type) */
  $handler->display->display_options['filters']['field_location_office_type_value']['id'] = 'field_location_office_type_value';
  $handler->display->display_options['filters']['field_location_office_type_value']['table'] = 'field_data_field_location_office_type';
  $handler->display->display_options['filters']['field_location_office_type_value']['field'] = 'field_location_office_type_value';
  $handler->display->display_options['filters']['field_location_office_type_value']['value'] = array(
    0 => '0',
  );

  /* Display: List - Employment Offices */
  $handler = $view->new_display('block', 'List - Employment Offices', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'office-locations office-type employment';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'location flip';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Metadata: City */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['ui_name'] = 'Metadata: City';
  $handler->display->display_options['fields']['field_location_city']['label'] = '';
  $handler->display->display_options['fields']['field_location_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_city']['element_label_colon'] = FALSE;
  /* Field: Metadata: State */
  $handler->display->display_options['fields']['field_location_state']['id'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['table'] = 'field_data_field_location_state';
  $handler->display->display_options['fields']['field_location_state']['field'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['ui_name'] = 'Metadata: State';
  $handler->display->display_options['fields']['field_location_state']['label'] = '';
  $handler->display->display_options['fields']['field_location_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_state']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span data-geoaddress="[field_location_city]+[field_location_state]">[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'desc';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: View: Related Satellite Offices */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'View: Related Satellite Offices';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print views_embed_view(\'office_locations\',\'block_4\', $row->nid);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Custom: Flip Card */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Flip Card';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="face front">
<div class="title">[title]</div>
<div class="desc">[body]</div>
</div>

<div class="face back">
<div class="title">[title]</div>
<div>[php]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = '.card';
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
    'location' => 'location',
  );
  /* Filter criterion: Content: Office Type (field_location_office_type) */
  $handler->display->display_options['filters']['field_location_office_type_value']['id'] = 'field_location_office_type_value';
  $handler->display->display_options['filters']['field_location_office_type_value']['table'] = 'field_data_field_location_office_type';
  $handler->display->display_options['filters']['field_location_office_type_value']['field'] = 'field_location_office_type_value';
  $handler->display->display_options['filters']['field_location_office_type_value']['value'] = array(
    1 => '1',
  );

  /* Display: CONDITIONAL - Related Offices by NID */
  $handler = $view->new_display('block', 'CONDITIONAL - Related Offices by NID', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'office-locations conditional related-offices';
  $handler->display->display_options['display_description'] = 'This will load multiple views if no results populate';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'related-office';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'office_locations:block_5';
  $handler->display->display_options['empty']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_location_satellite_office_node']['id'] = 'reverse_field_location_satellite_office_node';
  $handler->display->display_options['relationships']['reverse_field_location_satellite_office_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_location_satellite_office_node']['field'] = 'reverse_field_location_satellite_office_node';
  $handler->display->display_options['relationships']['reverse_field_location_satellite_office_node']['label'] = 'Parent Reference';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Metadata: City */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['ui_name'] = 'Metadata: City';
  $handler->display->display_options['fields']['field_location_city']['label'] = '';
  $handler->display->display_options['fields']['field_location_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_city']['element_label_colon'] = FALSE;
  /* Field: Metadata: State */
  $handler->display->display_options['fields']['field_location_state']['id'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['table'] = 'field_data_field_location_state';
  $handler->display->display_options['fields']['field_location_state']['field'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['ui_name'] = 'Metadata: State';
  $handler->display->display_options['fields']['field_location_state']['label'] = '';
  $handler->display->display_options['fields']['field_location_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_state']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span data-geoaddress="[field_location_city]+[field_location_state]">[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'satellite-title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_location_satellite_office_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'location' => 'location',
  );
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
    'location' => 'location',
  );

  /* Display: CONDITIONAL - Related Office Contact by NID */
  $handler = $view->new_display('block', 'CONDITIONAL - Related Office Contact by NID', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'office-locations conditional related-office-details';
  $handler->display->display_options['display_description'] = 'This will load multiple views if no results populate';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Metadata: City */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['ui_name'] = 'Metadata: City';
  $handler->display->display_options['fields']['field_location_city']['label'] = '';
  $handler->display->display_options['fields']['field_location_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_city']['element_label_colon'] = FALSE;
  /* Field: Metadata: State */
  $handler->display->display_options['fields']['field_location_state']['id'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['table'] = 'field_data_field_location_state';
  $handler->display->display_options['fields']['field_location_state']['field'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['ui_name'] = 'Metadata: State';
  $handler->display->display_options['fields']['field_location_state']['label'] = '';
  $handler->display->display_options['fields']['field_location_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_state']['element_label_colon'] = FALSE;
  /* Field: Metadata: Zip */
  $handler->display->display_options['fields']['field_location_zipcode']['id'] = 'field_location_zipcode';
  $handler->display->display_options['fields']['field_location_zipcode']['table'] = 'field_data_field_location_zipcode';
  $handler->display->display_options['fields']['field_location_zipcode']['field'] = 'field_location_zipcode';
  $handler->display->display_options['fields']['field_location_zipcode']['ui_name'] = 'Metadata: Zip';
  $handler->display->display_options['fields']['field_location_zipcode']['label'] = '';
  $handler->display->display_options['fields']['field_location_zipcode']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_zipcode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_zipcode']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Custom: Static Map */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Static Map';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<img src="http://maps.googleapis.com/maps/api/staticmap?center=[field_location_city]+[field_location_state]&scale=1&zoom=13&size=125x125&maptype=roadmap&markers=icon:http://goo.gl/D8cr7P/%7Ccolor:blue%7C[field_location_city],[field_location_state]&sensor=false" alt="" title="" />';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'static-map';
  /* Field: Content: Street */
  $handler->display->display_options['fields']['field_location_street']['id'] = 'field_location_street';
  $handler->display->display_options['fields']['field_location_street']['table'] = 'field_data_field_location_street';
  $handler->display->display_options['fields']['field_location_street']['field'] = 'field_location_street';
  $handler->display->display_options['fields']['field_location_street']['label'] = '';
  $handler->display->display_options['fields']['field_location_street']['element_label_colon'] = FALSE;
  /* Field: Custom: City, State, Zip */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: City, State, Zip';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>[field_location_city], [field_location_state] [field_location_zipcode]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_location_email']['id'] = 'field_location_email';
  $handler->display->display_options['fields']['field_location_email']['table'] = 'field_data_field_location_email';
  $handler->display->display_options['fields']['field_location_email']['field'] = 'field_location_email';
  $handler->display->display_options['fields']['field_location_email']['label'] = 'Email';
  $handler->display->display_options['fields']['field_location_email']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_email']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_location_email']['element_wrapper_class'] = 'email';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_location_satellite_office_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'location' => 'location',
  );
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
    'location' => 'location',
  );
  $export['office_locations'] = $view;

  $view = new view();
  $view->name = 'salary_tables';
  $view->description = 'View for salary tables for current and past years';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Salary Tables';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Salary Tables';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'salary_table' => 'salary_table',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Salary Tables Table */
  $handler = $view->new_display('block', 'Salary Tables Table', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Table of salary tables';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = 'st-row';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_st_effective_date' => 'field_st_effective_date',
    'field_st_issued_date' => 'field_st_issued_date',
    'field_st_document' => 'field_st_document',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_st_effective_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_st_issued_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_st_document' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['summary'] = 'Salary table information for various localities';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Locality';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'st-locality';
  /* Field: Content: ST Effective Date */
  $handler->display->display_options['fields']['field_st_effective_date']['id'] = 'field_st_effective_date';
  $handler->display->display_options['fields']['field_st_effective_date']['table'] = 'field_data_field_st_effective_date';
  $handler->display->display_options['fields']['field_st_effective_date']['field'] = 'field_st_effective_date';
  $handler->display->display_options['fields']['field_st_effective_date']['label'] = 'Effective Date';
  $handler->display->display_options['fields']['field_st_effective_date']['element_wrapper_class'] = 'st-effective-date';
  $handler->display->display_options['fields']['field_st_effective_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_st_effective_date']['settings'] = array(
    'format_type' => 'm_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: ST Issued Date */
  $handler->display->display_options['fields']['field_st_issued_date']['id'] = 'field_st_issued_date';
  $handler->display->display_options['fields']['field_st_issued_date']['table'] = 'field_data_field_st_issued_date';
  $handler->display->display_options['fields']['field_st_issued_date']['field'] = 'field_st_issued_date';
  $handler->display->display_options['fields']['field_st_issued_date']['label'] = 'Issued Date';
  $handler->display->display_options['fields']['field_st_issued_date']['element_wrapper_class'] = 'st-issued-date';
  $handler->display->display_options['fields']['field_st_issued_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_st_issued_date']['settings'] = array(
    'format_type' => 'm_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: ST Document */
  $handler->display->display_options['fields']['field_st_document']['id'] = 'field_st_document';
  $handler->display->display_options['fields']['field_st_document']['table'] = 'field_data_field_st_document';
  $handler->display->display_options['fields']['field_st_document']['field'] = 'field_st_document';
  $handler->display->display_options['fields']['field_st_document']['label'] = 'Salary Table';
  $handler->display->display_options['fields']['field_st_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_st_document']['element_wrapper_class'] = 'st-document';
  $handler->display->display_options['fields']['field_st_document']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_st_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'salary_table' => 'salary_table',
  );
  /* Filter criterion: Content: ST Effective Date (field_st_effective_date) */
  $handler->display->display_options['filters']['field_st_effective_date_value']['id'] = 'field_st_effective_date_value';
  $handler->display->display_options['filters']['field_st_effective_date_value']['table'] = 'field_data_field_st_effective_date';
  $handler->display->display_options['filters']['field_st_effective_date_value']['field'] = 'field_st_effective_date_value';
  $handler->display->display_options['filters']['field_st_effective_date_value']['value']['value'] = '2016';
  $handler->display->display_options['filters']['field_st_effective_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_st_effective_date_value']['expose']['operator_id'] = 'field_st_effective_date_value_op';
  $handler->display->display_options['filters']['field_st_effective_date_value']['expose']['label'] = 'ST Effective Date (field_st_effective_date)';
  $handler->display->display_options['filters']['field_st_effective_date_value']['expose']['operator'] = 'field_st_effective_date_value_op';
  $handler->display->display_options['filters']['field_st_effective_date_value']['expose']['identifier'] = 'field_st_effective_date_value';
  $handler->display->display_options['filters']['field_st_effective_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_st_effective_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_st_effective_date_value']['year_range'] = '-5:+0';
  $handler->display->display_options['block_description'] = 'View: Salary Tables Table';
  $export['salary_tables'] = $view;

  $view = new view();
  $view->name = 'showcases';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Showcases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'showcase';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
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
    'showcase' => 'showcase',
  );

  /* Display: Slideshow by Latest Published Date */
  $handler = $view->new_display('block', 'Slideshow by Latest Published Date', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'showcase slideshow latest';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'homepage_slideshow';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Showcase Image */
  $handler->display->display_options['fields']['field_showcase_image']['id'] = 'field_showcase_image';
  $handler->display->display_options['fields']['field_showcase_image']['table'] = 'field_data_field_showcase_image';
  $handler->display->display_options['fields']['field_showcase_image']['field'] = 'field_showcase_image';
  $handler->display->display_options['fields']['field_showcase_image']['label'] = '';
  $handler->display->display_options['fields']['field_showcase_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_showcase_image']['alter']['path'] = '<front>';
  $handler->display->display_options['fields']['field_showcase_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_showcase_image']['element_wrapper_class'] = 'featured-image';
  $handler->display->display_options['fields']['field_showcase_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_showcase_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'tagline';
  /* Field: Content: Link to Internal Page */
  $handler->display->display_options['fields']['field_showcase_link']['id'] = 'field_showcase_link';
  $handler->display->display_options['fields']['field_showcase_link']['table'] = 'field_data_field_showcase_link';
  $handler->display->display_options['fields']['field_showcase_link']['field'] = 'field_showcase_link';
  $handler->display->display_options['fields']['field_showcase_link']['label'] = '';
  $handler->display->display_options['fields']['field_showcase_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_showcase_link']['alter']['text'] = 'Learn More >';
  $handler->display->display_options['fields']['field_showcase_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_showcase_link']['alter']['path'] = 'node/[field_showcase_link-target_id]';
  $handler->display->display_options['fields']['field_showcase_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_showcase_link']['element_wrapper_class'] = 'internal-link';
  $handler->display->display_options['fields']['field_showcase_link']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $export['showcases'] = $view;

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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
      'other' => array(
        'items_per_page' => array(),
        'offset' => array(),
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

  $view = new view();
  $view->name = 'youtube';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Employee Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Employee Profile Playlist';
  $handler->display->display_options['css_class'] = 'youtube profile_playlist block by-title asc';
  $handler->display->display_options['use_ajax'] = TRUE;
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
    'youtube_videos' => 'youtube_videos',
  );

  /* Display: Block - Homepage Latest */
  $handler = $view->new_display('block', 'Block - Homepage Latest', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Employee Profile';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'youtube profile homepage latest';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: YouTube ID */
  $handler->display->display_options['fields']['field_youtube_id']['id'] = 'field_youtube_id';
  $handler->display->display_options['fields']['field_youtube_id']['table'] = 'field_data_field_youtube_id';
  $handler->display->display_options['fields']['field_youtube_id']['field'] = 'field_youtube_id';
  $handler->display->display_options['fields']['field_youtube_id']['exclude'] = TRUE;
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_youtube_external_link']['id'] = 'field_youtube_external_link';
  $handler->display->display_options['fields']['field_youtube_external_link']['table'] = 'field_data_field_youtube_external_link';
  $handler->display->display_options['fields']['field_youtube_external_link']['field'] = 'field_youtube_external_link';
  $handler->display->display_options['fields']['field_youtube_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_external_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_youtube_external_link']['type'] = 'link_plain';
  /* Field: Content: Number of Views (on YouTube) */
  $handler->display->display_options['fields']['field_youtube_meta_views']['id'] = 'field_youtube_meta_views';
  $handler->display->display_options['fields']['field_youtube_meta_views']['table'] = 'field_data_field_youtube_meta_views';
  $handler->display->display_options['fields']['field_youtube_meta_views']['field'] = 'field_youtube_meta_views';
  $handler->display->display_options['fields']['field_youtube_meta_views']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_meta_views']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_meta_views']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_meta_views']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
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
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_youtube_thumbnail']['id'] = 'field_youtube_thumbnail';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['table'] = 'field_data_field_youtube_thumbnail';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['field'] = 'field_youtube_thumbnail';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_thumbnail']['alter']['text'] = '<a data-ytId="[field_youtube_id]" href="[field_youtube_external_link]" target="_blank">
<div class="title">
<div class="count">[field_youtube_meta_views] Views</div>
[title]
</div>
<div class="thumbnail">[field_youtube_thumbnail]</div>
</a>';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['settings'] = array(
    'image_style' => 'employee_profile_homepage',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_youtube_thumbnail']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Block - Playlist */
  $handler = $view->new_display('block', 'Block - Playlist', 'block_playlist');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Employee Profile Playlist';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'youtube profile_playlist block by-title asc';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '<';
  $handler->display->display_options['pager']['options']['tags']['next'] = '>';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_youtube_thumbnail']['id'] = 'field_youtube_thumbnail';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['table'] = 'field_data_field_youtube_thumbnail';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['field'] = 'field_youtube_thumbnail';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['element_class'] = 'thumbnail';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_thumbnail']['element_wrapper_class'] = 'thumbnail-wrapper';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_youtube_thumbnail']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_youtube_thumbnail']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_youtube_external_link']['id'] = 'field_youtube_external_link';
  $handler->display->display_options['fields']['field_youtube_external_link']['table'] = 'field_data_field_youtube_external_link';
  $handler->display->display_options['fields']['field_youtube_external_link']['field'] = 'field_youtube_external_link';
  $handler->display->display_options['fields']['field_youtube_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_external_link']['element_class'] = 'external-link';
  $handler->display->display_options['fields']['field_youtube_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_external_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_youtube_external_link']['type'] = 'link_absolute';
  /* Field: Content:Duration */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Content:Duration';
  $handler->display->display_options['fields']['php']['label'] = 'Duration';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$node = node_load($row->nid);
echo gmdate("i:s", $node->field_youtube_duration[\'und\'][0][\'value\']);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Number of Views (on YouTube) */
  $handler->display->display_options['fields']['field_youtube_meta_views']['id'] = 'field_youtube_meta_views';
  $handler->display->display_options['fields']['field_youtube_meta_views']['table'] = 'field_data_field_youtube_meta_views';
  $handler->display->display_options['fields']['field_youtube_meta_views']['field'] = 'field_youtube_meta_views';
  $handler->display->display_options['fields']['field_youtube_meta_views']['label'] = 'Views';
  $handler->display->display_options['fields']['field_youtube_meta_views']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_youtube_meta_views']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_youtube_meta_views']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_youtube_meta_views']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['limit'] = '0';
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
    'youtube_videos' => 'youtube_videos',
  );

  /* Display: Attachment - Featured to Playlist */
  $handler = $view->new_display('attachment', 'Attachment - Featured to Playlist', 'attachment_profile_featured');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'youtube profile_featured block by-post desc';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: YouTube URL */
  $handler->display->display_options['fields']['field_youtube_embed']['id'] = 'field_youtube_embed';
  $handler->display->display_options['fields']['field_youtube_embed']['table'] = 'field_data_field_youtube_embed';
  $handler->display->display_options['fields']['field_youtube_embed']['field'] = 'field_youtube_embed';
  $handler->display->display_options['fields']['field_youtube_embed']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_embed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_embed']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_youtube_embed']['settings'] = array(
    'video_style' => 'normal',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_class'] = 'description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
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
    'youtube_videos' => 'youtube_videos',
  );
  /* Filter criterion: Content is equal to &quot;Technology Specialist&quot; */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['ui_name'] = 'Content is equal to "Technology Specialist"';
  $handler->display->display_options['filters']['nid']['value']['value'] = '4660';
  $handler->display->display_options['displays'] = array(
    'block_playlist' => 'block_playlist',
    'default' => 0,
    'block' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $export['youtube'] = $view;

  return $export;
}
