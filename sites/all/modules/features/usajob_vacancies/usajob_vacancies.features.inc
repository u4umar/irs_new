<?php

/**
 * @file
 * usajob_vacancies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function usajob_vacancies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function usajob_vacancies_node_info() {
  $items = array(
    'usajobs' => array(
      'name' => t('USAJob Vacancies'),
      'base' => 'node_content',
      'description' => t('Use <em>USAJobs Vacancies</em> to manage the display of vacancy announcements on the IRS Careers website. Note: This data is imported from USAJobs hourly and should not be manually modified unless it is strictly required (e.g. correcting an error, publishing a dataset that is missing).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
