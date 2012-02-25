<?php

/**
 * @file
 * Admin settings
 */

/**
 * Implementats hook_admin_settings() for configuring the module
 */
function node_import_update_admin_settings_form(&$form_state) {
  $form = array();

  $form['niu_settings'] = array(
    '#title'       => 'Node Import Update settings',
    '#type'        => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed'   => FALSE,
    '#description' => 'Configuration settings',
  );

  $form['niu_settings']['node_import_update_update_date'] = array(
    '#type' => 'checkbox',
    '#title' => t('Update date on import'),
    '#default_value' => variable_get('node_import_update_update_date', TRUE),
    '#description' => t('If enabled, the date will be updated during the updated imports.'),
  );

  return system_settings_form($form);
}
