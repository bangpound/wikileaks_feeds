<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function wikileaks_feeds_taxonomy_default_vocabularies() {
  return array(
    'classification' => array(
      'name' => 'Classification',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_classification',
      'weight' => '0',
      'type' => NULL,
      'nodes' => array(),
    ),
    'origin' => array(
      'name' => 'Origin',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_origin',
      'weight' => '0',
      'type' => NULL,
      'nodes' => array(),
    ),
  );
}
