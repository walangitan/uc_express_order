<?php

/**
 * @file
 * UC Express Order administration and module settings UI.
 */


function uc_express_order_admin_settings() {

  $image_style_options = image_style_options(TRUE, CHECK_PLAIN);

  $form['uc_express_order_image_style'] = array(
    '#type' => 'select',
    '#title' => t('Product Image Style'),
    '#options' => $image_style_options,
    '#default_value' => variable_get('uc_express_order_image_style'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
