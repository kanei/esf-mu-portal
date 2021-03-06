<?php
/**
 * @file
 * esf_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function esf_feature_taxonomy_default_vocabularies() {
  return array(
    'law_type' => array(
      'name' => 'Law type',
      'machine_name' => 'law_type',
      'description' => 'Type of a law',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'level_of_generality' => array(
      'name' => 'Level of Generality',
      'machine_name' => 'level_of_generality',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
    ),
    'school_year' => array(
      'name' => 'School year',
      'machine_name' => 'school_year',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
