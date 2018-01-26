<?php
/**
 * @file
 * khuyen_main.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function khuyen_main_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coupons|node|khuyen_mai|form';
  $field_group->group_name = 'group_coupons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'khuyen_mai';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'coupons',
    'weight' => '6',
    'children' => array(
      0 => 'field_coupon_desc',
      1 => 'field_coupon_save',
      2 => 'field_coupon_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coupons field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_coupons|node|khuyen_mai|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|khuyen_mai|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'khuyen_mai';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info ',
    'weight' => '5',
    'children' => array(
      0 => 'field_start_time',
      1 => 'field_end_time',
      2 => 'field_id_khuyen_mai',
      3 => 'field_merchant',
      4 => 'field_url_khuyen_mai',
      5 => 'field_domain_san_pham',
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
  $field_groups['group_info|node|khuyen_mai|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Info ');
  t('coupons');

  return $field_groups;
}
