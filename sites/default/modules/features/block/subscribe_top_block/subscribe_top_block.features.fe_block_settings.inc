<?php
/**
 * @file
 * subscribe_top_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function subscribe_top_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-header_subscribe_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'header_subscribe_block',
    'module' => 'block',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:2:{s:5:"class";a:6:{i:0;s:8:"col-lg-2";i:1;s:8:"col-md-2";i:2;s:9:"col-sm-12";i:3;s:9:"col-xs-12";i:4;s:9:"hidden-sm";i:5;s:9:"hidden-xs";}s:2:"id";s:13:"subscribe-top";}}',
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'coupon' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'coupon',
        'weight' => -19,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
