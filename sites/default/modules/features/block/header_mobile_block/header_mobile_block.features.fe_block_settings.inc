<?php
/**
 * @file
 * header_mobile_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function header_mobile_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-header_mobile_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'header_mobile_block',
    'module' => 'block',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:2:{s:5:"class";a:1:{i:0;s:9:"col-xs-12";}s:2:"id";s:18:"header-mobile-logo";}}',
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'coupon' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'coupon',
        'weight' => -26,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
