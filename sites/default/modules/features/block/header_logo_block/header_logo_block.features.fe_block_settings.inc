<?php
/**
 * @file
 * header_logo_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function header_logo_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-header_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'header_block',
    'module' => 'block',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:2:{s:5:"class";a:4:{i:0;s:8:"col-lg-4";i:1;s:8:"col-md-5";i:2;s:9:"col-sm-12";i:3;s:9:"col-xs-12";}s:2:"id";s:11:"header-logo";}}',
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'coupon' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'coupon',
        'weight' => -21,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
