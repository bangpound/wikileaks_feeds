<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function wikileaks_feeds_feeds_importer_default() {
  $export = array();
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'wikileaks_cablegate';
  $feeds_importer->config = array(
    'name' => 'Wikileaks Cablegate',
    'description' => 'For importing wikileaks cablegate data from http://cablegate.wikileaks.org/',
    'fetcher' => array(
      'plugin_key' => 'feeds_fetcher_directory_fetcher',
      'config' => array(
        'feed_files_fetched' => array(),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsQueryPathParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsDataProcessor',
      'config' => array(
        'update_existing' => 1,
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'querypathparser:0',
            'target' => 'subject',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'querypathparser:1',
            'target' => 'body',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'querypathparser:2',
            'target' => 'reference_id',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'querypathparser:3',
            'target' => 'timestamp',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'querypathparser:4',
            'target' => 'header',
            'unique' => FALSE,
          ),
        ),
        'delete_with_source' => FALSE,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );

  $export['wikileaks_cablegate'] = $feeds_importer;
  return $export;
}
