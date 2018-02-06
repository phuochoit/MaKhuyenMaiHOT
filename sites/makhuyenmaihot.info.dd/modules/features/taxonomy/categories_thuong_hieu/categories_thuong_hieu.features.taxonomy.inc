<?php
/**
 * @file
 * categories_thuong_hieu.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function categories_thuong_hieu_taxonomy_default_vocabularies() {
  return array(
    'categories_thuong_hieu' => array(
      'name' => 'Categories Thương Hiệu',
      'machine_name' => 'categories_thuong_hieu',
      'description' => 'danh sách categories của Thương Hiệu',
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
