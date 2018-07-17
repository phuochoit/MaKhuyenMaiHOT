<?php
/**
 * @file
 * stores.features.inc
 */

/**
 * Implements hook_node_info().
 */
function stores_node_info() {
  $items = array(
    'stores' => array(
      'name' => t('Stores'),
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
