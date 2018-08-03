<?php
/**
 * @file
 * migration_demo.features.uuid_user.inc
 */

/**
 * Implements hook_uuid_features_default_users().
 */
function migration_demo_uuid_features_default_users() {
  $users = array();

  $users[] = array(
  'name' => 'moderator',
  'mail' => 'moderator@agencychief.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'filtered_html',
  'created' => 1533332312,
  'status' => 1,
  'timezone' => 'America/Los_Angeles',
  'language' => '',
  'picture' => NULL,
  'init' => 'moderator@agencychief.com',
  'data' => FALSE,
  'uuid' => '9ddfd119-2f1b-47cb-8490-dbcc8a6a5eb5',
  'roles' => array(
    2 => 'authenticated user',
    4 => 'moderator',
  ),
  'field_address' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:UserAccount',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'homepage' => array(
      'predicates' => array(
        0 => 'foaf:page',
      ),
      'type' => 'rel',
    ),
  ),
  'date' => '2018-08-03 14:38:32 -0700',
);
  return $users;
}
