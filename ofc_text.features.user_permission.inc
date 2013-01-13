<?php
/**
 * @file
 * ofc_text.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofc_text_user_default_permissions() {
  $permissions = array();

  // Exported permission: use text format 3.
  $permissions['use text format 3'] = array(
    'name' => 'use text format 3',
    'roles' => array(
      0 => 'staff',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
