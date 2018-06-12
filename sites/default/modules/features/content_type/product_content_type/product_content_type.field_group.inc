<?php
/**
 * @file
 * product_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function product_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_get_content|node|products|form';
  $field_group->group_name = 'group_get_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'products';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Get Content',
    'weight' => '7',
    'children' => array(
      0 => 'field_get_content',
      1 => 'field_content_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-get-content field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_get_content|node|products|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_discount|node|products|form';
  $field_group->group_name = 'group_product_discount';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'products';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Product Discount',
    'weight' => '8',
    'children' => array(
      0 => 'field_discount',
      1 => 'field_price',
      2 => 'field_discount_amount',
      3 => 'field_discount_rate',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-product-discount field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_product_discount|node|products|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Get Content');
  t('Product Discount');

  return $field_groups;
}
