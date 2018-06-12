<?php
/**
 * @file
 * ads_app.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ads_app_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-ads_my_app'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'ads_my_app',
    'module' => 'block',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:2:{s:5:"class";a:2:{i:0;s:9:"col-sm-12";i:1;s:8:"col-md-3";}s:2:"id";s:15:"ads_app_android";}}',
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'coupon' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'coupon',
        'weight' => -22,
      ),
    ),
    'title' => 'Ứng Dụng Liên Kết',
    'visibility' => 0,
  );

  return $export;
}
