<?php
/**
 * @file
 * coupon_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function coupon_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function coupon_content_type_node_info() {
  $items = array(
    'coupons' => array(
      'name' => t('Coupons'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
