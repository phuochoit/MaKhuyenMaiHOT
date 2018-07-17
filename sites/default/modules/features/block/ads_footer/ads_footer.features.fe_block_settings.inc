<?php
/**
 * @file
 * ads_footer.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ads_footer_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['custom_blocks-ads_block_fotter'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ads_block_fotter',
    'module' => 'custom_blocks',
    'node_types' => array(),
    'options' => 'a:0:{}',
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'coupon' => array(
        'region' => 'ads_footer',
        'status' => 1,
        'theme' => 'coupon',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
