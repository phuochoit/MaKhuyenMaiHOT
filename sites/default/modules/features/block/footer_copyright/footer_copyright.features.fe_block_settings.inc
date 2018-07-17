<?php
/**
 * @file
 * footer_copyright.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function footer_copyright_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-footer_copyright'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'footer_copyright',
    'module' => 'block',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:2:{s:5:"class";a:3:{i:0;s:9:"col-xs-12";i:1;s:9:"col-sm-12";i:2;s:9:"col-md-12";}s:2:"id";s:22:"block-footer-copyright";}}',
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'coupon' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'coupon',
        'weight' => -20,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
