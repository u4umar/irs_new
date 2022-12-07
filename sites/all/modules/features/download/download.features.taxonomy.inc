<?php

/**
 * @file
 * download.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function download_taxonomy_default_vocabularies() {
  return array(
    'download_category' => array(
      'name' => 'Download Categories',
      'machine_name' => 'download_category',
      'description' => 'Category under which download item falls. May be user-generated',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
