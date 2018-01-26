<?php
/**
 * @file
 * san_pham.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function san_pham_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gia|node|san_pham|form';
  $field_group->group_name = 'group_gia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'san_pham';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Giá',
    'weight' => '6',
    'children' => array(
      0 => 'field_price',
      1 => 'field_discount',
      2 => 'field_status_discount',
      3 => 'field_discount_amount',
      4 => 'field_discount_rate',
      5 => 'field_update_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gia field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_gia|node|san_pham|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|san_pham|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'san_pham';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '5',
    'children' => array(
      0 => 'field_domain_san_pham',
      1 => 'field_url_khuyen_mai',
      2 => 'field_merchant',
      3 => 'field_id_khuyen_mai',
      4 => 'field_hot',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-info field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_info|node|san_pham|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Giá');
  t('Info');

  return $field_groups;
}
