<?php
/**
 * @file
 * carousel_image.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function carousel_image_taxonomy_default_vocabularies() {
  return array(
    'himss_taxonomy_audience' => array(
      'name' => 'HIMSS Taxonomy Audience',
      'machine_name' => 'himss_taxonomy_audience',
      'description' => 'HIMSS Enterprise Taxonomy Audience',
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
    'himss_taxonomy_care' => array(
      'name' => 'HIMSS Taxonomy Care',
      'machine_name' => 'himss_taxonomy_care',
      'description' => 'HIMSS Enterprise Taxonomy Care',
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
    'himss_taxonomy_levels' => array(
      'name' => 'HIMSS Taxonomy Levels',
      'machine_name' => 'himss_taxonomy_levels',
      'description' => 'HIMSS Enterprise Taxonomy Levels',
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
    'himss_taxonomy_locations' => array(
      'name' => 'HIMSS Taxonomy Locations',
      'machine_name' => 'himss_taxonomy_locations',
      'description' => 'HIMSS Enterprise Taxonomy Locations',
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
    'himss_taxonomy_products' => array(
      'name' => 'HIMSS Taxonomy Products',
      'machine_name' => 'himss_taxonomy_products',
      'description' => 'HIMSS Enterprise Taxonomy Products',
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
    'himss_taxonomy_resources' => array(
      'name' => 'HIMSS Taxonomy Resources',
      'machine_name' => 'himss_taxonomy_resources',
      'description' => 'HIMSS Enterprise Taxonomy Resources',
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
    'himss_taxonomy_sponsors' => array(
      'name' => 'HIMSS Taxonomy Sponsors',
      'machine_name' => 'himss_taxonomy_sponsors',
      'description' => 'HIMSS Enterprise Taxonomy Sponsors',
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
    'himss_taxonomy_tags' => array(
      'name' => 'HIMSS Taxonomy Tags',
      'machine_name' => 'himss_taxonomy_tags',
      'description' => 'HIMSS Enterprise Taxonomy Tags',
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
    'himss_taxonomy_topics' => array(
      'name' => 'HIMSS Taxonomy Topics',
      'machine_name' => 'himss_taxonomy_topics',
      'description' => 'HIMSS Enterprise Taxonomy Topics',
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
    'himss_taxonomy_worksites' => array(
      'name' => 'HIMSS Taxonomy Worksites',
      'machine_name' => 'himss_taxonomy_worksites',
      'description' => 'HIMSS Enterprise Taxonomy Worksites',
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
