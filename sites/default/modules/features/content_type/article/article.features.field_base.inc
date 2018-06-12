<?php
/**
 * @file
 * article.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function article_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_categories'.
  $field_bases['field_categories'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_categories',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'Hướng dẫn',
        2 => 'Quà tặng',
        3 => 'Tin khuyến mại',
        4 => 'Tư vấn - Đánh giá',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
