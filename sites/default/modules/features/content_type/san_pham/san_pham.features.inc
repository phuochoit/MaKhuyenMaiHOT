<?php
/**
 * @file
 * san_pham.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function san_pham_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function san_pham_node_info() {
  $items = array(
    'san_pham' => array(
      'name' => t('Sản Phẩm'),
      'base' => 'node_content',
      'description' => t('thông tin  Sản Phẩm'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
