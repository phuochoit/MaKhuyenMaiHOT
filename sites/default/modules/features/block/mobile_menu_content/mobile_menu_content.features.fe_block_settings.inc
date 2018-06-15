<?php
/**
 * @file
 * mobile_menu_content.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mobile_menu_content_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-mobile_menu_content'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'mobile_menu_content',
    'module' => 'block',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:2:{s:5:"class";a:1:{i:0;s:9:"col-xs-12";}s:2:"id";s:20:"mobile-menu-contents";}}',
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'coupon' => array(
        'region' => 'highlighted',
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
