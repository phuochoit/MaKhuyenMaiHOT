<?php
/**
 * @file
 * coupon_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function coupon_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coupon_setup|node|coupon|form';
  $field_group->group_name = 'group_coupon_setup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'coupons';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Coupon Setup',
    'weight' => '2',
    'children' => array(
      0 => 'field_aff_link',
      1 => 'field_merchant',
      2 => 'field_store',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coupon-setup field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_coupon_setup|node|coupon|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coupon_time|node|coupon|form';
  $field_group->group_name = 'group_coupon_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'coupons';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Coupon Time',
    'weight' => '3',
    'children' => array(
      0 => 'field_end_time',
      1 => 'field_start_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coupon-time field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_coupon_time|node|coupon|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coupon|node|coupon|form';
  $field_group->group_name = 'group_coupon';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'coupons';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Coupon',
    'weight' => '1',
    'children' => array(
      0 => 'field_coupon_note',
      1 => 'field_coupon_code',
      2 => 'field_coupon_save',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coupon field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_coupon|node|coupon|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_global|node|coupon|form';
  $field_group->group_name = 'group_global';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'coupons';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Global',
    'weight' => '5',
    'children' => array(
      0 => 'field_coupon_categories',
      1 => 'field_teaser',
      2 => 'field_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-global field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_global|node|coupon|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Coupon');
  t('Coupon Setup');
  t('Coupon Time');
  t('Global');

  return $field_groups;
}
