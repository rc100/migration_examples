<?php
/**
 * @file
 * migration_demo.features.inc
 */

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
