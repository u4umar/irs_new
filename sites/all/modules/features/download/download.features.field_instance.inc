<?php

/**
 * @file
 * download.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function download_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-download-field_download_attachment'.
  $field_instances['node-download-field_download_attachment'] = array(
    'bundle' => 'download',
    'deleted' => 0,
    'description' => 'File available for download through downloads page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_download_attachment',
    'label' => 'Download Attachment',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'downloads',
      'file_extensions' => 'txt pdf doc docx exe',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 1,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => 'downloads/[node:field-download-category]',
        ),
        'redirect' => 0,
        'retroactive_update' => 1,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-download-field_download_category'.
  $field_instances['node-download-field_download_category'] = array(
    'bundle' => 'download',
    'default_value' => array(
      0 => array(
        'tid' => 81,
        'vid' => 11,
        'name' => 'Resources',
        'description' => NULL,
        'format' => NULL,
        'weight' => 0,
        'uuid' => '3d2533e0-80da-4439-a0a7-8701ffd335c3',
        'vocabulary_machine_name' => 'download_category',
        'metatags' => array(),
        'rdf_mapping' => array(
          'description' => array(
            'predicates' => array(
              0 => 'skos:definition',
            ),
          ),
          'name' => array(
            'predicates' => array(
              0 => 'rdfs:label',
              1 => 'skos:prefLabel',
            ),
          ),
          'parent' => array(
            'predicates' => array(
              0 => 'skos:broader',
            ),
            'type' => 'rel',
          ),
          'rdftype' => array(
            0 => 'skos:Concept',
          ),
          'vid' => array(
            'predicates' => array(
              0 => 'skos:inScheme',
            ),
            'type' => 'rel',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_download_category',
    'label' => 'Download Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Download Attachment');
  t('Download Category');
  t('File available for download through downloads page.');

  return $field_instances;
}
