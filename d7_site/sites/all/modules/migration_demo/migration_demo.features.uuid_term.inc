<?php
/**
 * @file
 * migration_demo.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function migration_demo_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Europe',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '35954da8-c352-4f2b-9502-5493c3298109',
    'vocabulary_machine_name' => 'region',
  );
  $terms[] = array(
    'name' => 'Asia',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6a5a1691-d55a-48e9-83af-0360a93cc063',
    'vocabulary_machine_name' => 'region',
  );
  $terms[] = array(
    'name' => 'North America',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6fc8cd26-cf08-467a-b2ea-cf5a367071a5',
    'vocabulary_machine_name' => 'region',
  );
  $terms[] = array(
    'name' => 'Antarctica',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9e3442e7-6610-42b9-bb2a-09a95c00a9bd',
    'vocabulary_machine_name' => 'region',
  );
  $terms[] = array(
    'name' => 'South America',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a09f1990-10a7-4fa2-a949-913529ff8c22',
    'vocabulary_machine_name' => 'region',
  );
  $terms[] = array(
    'name' => 'Australia',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e8142708-2b42-42a4-a51d-af5e7e405f00',
    'vocabulary_machine_name' => 'region',
  );
  $terms[] = array(
    'name' => 'Africa',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f5b51226-4356-4a8d-af13-723417f8a19c',
    'vocabulary_machine_name' => 'region',
  );
  return $terms;
}
