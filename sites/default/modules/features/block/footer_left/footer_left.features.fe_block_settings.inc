<?php
/**
 * @file
 * footer_left.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function footer_left_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-block_footer_left'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'block_footer_left',
    'module' => 'block',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:2:{s:5:"class";a:3:{i:0;s:9:"col-sm-12";i:1;s:8:"col-md-4";i:2;s:8:"footer-1";}s:2:"id";s:17:"block-footer-left";}}',
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'coupon' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'coupon',
        'weight' => -25,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
