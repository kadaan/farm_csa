<?php
/**
 * @file
 * farmier_csa.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function farmier_csa_user_default_roles() {
  $roles = array();

  // Exported role: csa.
  $roles['csa'] = array(
    'name' => 'csa',
    'weight' => '4',
  );

  return $roles;
}