<?php
/**
 * @file
 * khuyen_main.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function khuyen_main_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function khuyen_main_node_info() {
  $items = array(
    'khuyen_mai' => array(
      'name' => t('Khuyến mãi'),
      'base' => 'node_content',
      'description' => t('Lấy thông tin các khuyến mại đang hoạt động'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
