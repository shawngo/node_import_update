<?php
// $Id$
/**
 * @file
 * Node Import Update:
 *
 */

/**
 * Implementation of hook_admin_settings() for configuring the module
 */
function node_import_update_admin_settings_form(&$form_state) {
  $form = array();

  $form['niu_settings'] = array(
    '#title'       => 'Node Import Update settings',
    '#type'        => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed'   => FALSE,
    '#description' => 'change shit up.',
  );

  $form['niu_settings']['niu_settings_enabled'] = array(
    '#type' => 'radios',
    '#title' => t('Enable or disable update feature'),
    '#default_value' => variable_get('node_import_update_settings_enabled', 'enabled'),
    '#description' => t('enable or disable'),
    '#options' => array('enabled' => t('Enabled'), 'disabled' => t('Disabled')),
  );

  return system_settings_form($form);
}
