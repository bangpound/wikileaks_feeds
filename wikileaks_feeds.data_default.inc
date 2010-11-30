<?php

/**
 * Implementation of hook_data_default().
 */
function wikileaks_feeds_data_default() {
  $export = array();
  $data_table = new stdClass;
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Wikileaks Cablegate';
  $data_table->name = 'feeds_data_wikileaks_cablegate';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'feed_nid' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'description' => '',
      ),
      'id' => array(
        'type' => 'serial',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'description' => '',
      ),
      'timestamp' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'subject' => array(
        'type' => 'text',
        'not null' => FALSE,
      ),
      'body' => array(
        'type' => 'text',
        'not null' => FALSE,
        'size' => 'big',
      ),
      'reference_id' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'name' => 'feeds_data_wikileaks_cablegate',
    'indexes' => array(
      'feed_nid' => array(
        0 => 'feed_nid',
      ),
      'id' => array(
        0 => 'id',
      ),
      'timestamp' => array(
        0 => 'timestamp',
      ),
    ),
    'primary key' => array(
      0 => 'id',
    ),
  );
  $data_table->meta = array(
    'data_taxonomy' => array(
      'vocabularies' => array(
        'features_tags' => 'features_tags',
      ),
      'id' => 'id',
    ),
    'fields' => array(
      'feed_nid' => array(
        'search' => 0,
      ),
      'id' => array(
        'search' => 0,
      ),
      'timestamp' => array(
        'search' => 0,
      ),
      'subject' => array(
        'search' => 1,
      ),
      'body' => array(
        'search' => 1,
      ),
      'reference_id' => array(
        'search' => 1,
      ),
    ),
  );

  $export['feeds_data_wikileaks_cablegate'] = $data_table;
  return $export;
}
