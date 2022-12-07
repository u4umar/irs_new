<?php

/**
 * @file
 * job_descriptions.features.inc
 */

/**
 * Implements hook_node_info().
 */
function job_descriptions_node_info() {
  $items = array(
    'job_descriptions' => array(
      'name' => t('Job Descriptions'),
      'base' => 'node_content',
      'description' => t('Use <em>Job Descriptions</em> to provide informational support to the IRS Careers vacancy categories, including position description and requirements.'),
      'has_title' => '1',
      'title_label' => t('Job Description'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
