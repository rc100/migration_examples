<?php
/**
 * @file
 * migration_demo.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function migration_demo_user_default_roles() {
  $roles = array();

  // Exported role: moderator.
  $roles['moderator'] = array(
    'name' => 'moderator',
    'weight' => 3,
  );

  return $roles;
}
