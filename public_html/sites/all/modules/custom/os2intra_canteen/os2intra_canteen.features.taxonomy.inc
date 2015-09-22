<?php
/**
 * @file
 * os2intra_canteen.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function os2intra_canteen_taxonomy_default_vocabularies() {
  return array(
    'os2intra_canteen' => array(
      'name' => 'os2intra_canteen',
      'machine_name' => 'os2intra_canteen',
      'description' => '',
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
