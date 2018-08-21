<?php
/**
 * @file
 * migration_demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function migration_demo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function migration_demo_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function migration_demo_node_info() {
  $items = array(
    'lizard' => array(
      'name' => t('Lizard'),
      'base' => 'node_content',
      'description' => t('For all your lizard data needs. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function migration_demo_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : { "registration" : true, "use_page" : true },
    "rdf_mapping" : []
  }');
  return $items;
}
