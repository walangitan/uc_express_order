<?php

/**
 * @file
 * Echosign administration and module settings UI.
 */

/**
 * Menu callback: configure Stripe API Keys
 */
function uc_express_order_admin_settings() {

  $vocabularies = taxonomy_get_vocabularies();
  $options = array();
  foreach ($vocabularies as $vocabulary) {
    $options[$vocabulary->vid] = $vocabulary->name;
  }

  $image_style_options = image_style_options(TRUE, CHECK_PLAIN);

  $form['uc_express_order_vocabulary'] = array(
    '#type' => 'select',
    '#title' => t('Vocabulary'),
    '#options' => $options,
    '#default_value' => variable_get('uc_express_order_vocabulary'),
    '#required' => TRUE,
  );
  $form['uc_express_order_image_style'] = array(
    '#type' => 'select',
    '#title' => t('Product Image Style'),
    '#options' => $image_style_options,
    '#default_value' => variable_get('uc_express_order_image_style'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
