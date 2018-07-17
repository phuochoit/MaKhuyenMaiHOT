<?php
/**
 * @file
 * coupon.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function coupon_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'coupon';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Coupon';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Coupon Homepage';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-12 col-md-12';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Chưa có Mã khuyến mại nào!';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Store (field_store) */
  $handler->display->display_options['relationships']['field_store_nid']['id'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['table'] = 'field_data_field_store';
  $handler->display->display_options['relationships']['field_store_nid']['field'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_store_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Coupon Code */
  $handler->display->display_options['fields']['field_coupon_code']['id'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['field'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coupon_code']['hide_empty'] = TRUE;
  /* Field: Content: Coupon Note */
  $handler->display->display_options['fields']['field_coupon_note']['id'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['table'] = 'field_data_field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['field'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_note']['element_label_colon'] = FALSE;
  /* Field: Content: Coupon Save */
  $handler->display->display_options['fields']['field_coupon_save']['id'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['table'] = 'field_data_field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['field'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_save']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_save']['element_label_colon'] = FALSE;
  /* Field: Content: End Time */
  $handler->display->display_options['fields']['field_end_time']['id'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['table'] = 'field_data_field_end_time';
  $handler->display->display_options['fields']['field_end_time']['field'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['label'] = '';
  $handler->display->display_options['fields']['field_end_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_end_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_end_time']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_store']['id'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['table'] = 'field_data_field_store';
  $handler->display->display_options['fields']['field_store']['field'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['label'] = '';
  $handler->display->display_options['fields']['field_store']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_store']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  /* Field: Content statistics: Views today */
  $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['label'] = '';
  $handler->display->display_options['fields']['daycount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['daycount']['element_label_colon'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_store_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coupons' => 'coupons',
  );

  /* Display: Coupon Homepage */
  $handler = $view->new_display('block', 'Coupon Homepage', 'coupon_homepage');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Xem thêm Coupons';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Store (field_store) */
  $handler->display->display_options['relationships']['field_store_nid']['id'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['table'] = 'field_data_field_store';
  $handler->display->display_options['relationships']['field_store_nid']['field'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_store_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Coupon Code */
  $handler->display->display_options['fields']['field_coupon_code']['id'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['field'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coupon_code']['hide_empty'] = TRUE;
  /* Field: Content: Coupon Note */
  $handler->display->display_options['fields']['field_coupon_note']['id'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['table'] = 'field_data_field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['field'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_note']['element_label_colon'] = FALSE;
  /* Field: Content: Coupon Save */
  $handler->display->display_options['fields']['field_coupon_save']['id'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['table'] = 'field_data_field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['field'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_save']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_save']['element_label_colon'] = FALSE;
  /* Field: Content: End Time */
  $handler->display->display_options['fields']['field_end_time']['id'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['table'] = 'field_data_field_end_time';
  $handler->display->display_options['fields']['field_end_time']['field'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['label'] = '';
  $handler->display->display_options['fields']['field_end_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_end_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_end_time']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd-m-Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_store']['id'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['table'] = 'field_data_field_store';
  $handler->display->display_options['fields']['field_store']['field'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['label'] = '';
  $handler->display->display_options['fields']['field_store']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_store']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: Aff Link */
  $handler->display->display_options['fields']['field_aff_link']['id'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['table'] = 'field_data_field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['field'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['label'] = '';
  $handler->display->display_options['fields']['field_aff_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aff_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aff_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aff_link']['type'] = 'link_title_plain';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  /* Field: Content statistics: Views today */
  $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['label'] = '';
  $handler->display->display_options['fields']['daycount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['daycount']['element_label_colon'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_store_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coupons' => 'coupons',
  );
  /* Filter criterion: Content: Coupon Code (field_coupon_code) */
  $handler->display->display_options['filters']['field_coupon_code_value']['id'] = 'field_coupon_code_value';
  $handler->display->display_options['filters']['field_coupon_code_value']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['filters']['field_coupon_code_value']['field'] = 'field_coupon_code_value';
  $handler->display->display_options['filters']['field_coupon_code_value']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'Coupon Homepage';

  /* Display: Coupon Block By Store - coupon */
  $handler = $view->new_display('block', 'Coupon Block By Store - coupon', 'block_coupon_store');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Coupon Block By Store - coupon';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Xem thêm Coupons';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Store (field_store) */
  $handler->display->display_options['relationships']['field_store_nid']['id'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['table'] = 'field_data_field_store';
  $handler->display->display_options['relationships']['field_store_nid']['field'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_store_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Coupon Code */
  $handler->display->display_options['fields']['field_coupon_code']['id'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['field'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coupon_code']['hide_empty'] = TRUE;
  /* Field: Content: Coupon Note */
  $handler->display->display_options['fields']['field_coupon_note']['id'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['table'] = 'field_data_field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['field'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_note']['element_label_colon'] = FALSE;
  /* Field: Content: Coupon Save */
  $handler->display->display_options['fields']['field_coupon_save']['id'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['table'] = 'field_data_field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['field'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_save']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_save']['element_label_colon'] = FALSE;
  /* Field: Content: End Time */
  $handler->display->display_options['fields']['field_end_time']['id'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['table'] = 'field_data_field_end_time';
  $handler->display->display_options['fields']['field_end_time']['field'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['label'] = '';
  $handler->display->display_options['fields']['field_end_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_end_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_end_time']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd-m-Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_store']['id'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['table'] = 'field_data_field_store';
  $handler->display->display_options['fields']['field_store']['field'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['label'] = '';
  $handler->display->display_options['fields']['field_store']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_store']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: Aff Link */
  $handler->display->display_options['fields']['field_aff_link']['id'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['table'] = 'field_data_field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['field'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['label'] = '';
  $handler->display->display_options['fields']['field_aff_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aff_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aff_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aff_link']['type'] = 'link_title_plain';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  /* Field: Content statistics: Views today */
  $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['label'] = '';
  $handler->display->display_options['fields']['daycount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['daycount']['element_label_colon'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_store_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Store (field_store) */
  $handler->display->display_options['arguments']['field_store_nid']['id'] = 'field_store_nid';
  $handler->display->display_options['arguments']['field_store_nid']['table'] = 'field_data_field_store';
  $handler->display->display_options['arguments']['field_store_nid']['field'] = 'field_store_nid';
  $handler->display->display_options['arguments']['field_store_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_store_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_store_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_store_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_store_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coupons' => 'coupons',
  );
  /* Filter criterion: Content: Coupon Code (field_coupon_code) */
  $handler->display->display_options['filters']['field_coupon_code_value']['id'] = 'field_coupon_code_value';
  $handler->display->display_options['filters']['field_coupon_code_value']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['filters']['field_coupon_code_value']['field'] = 'field_coupon_code_value';
  $handler->display->display_options['filters']['field_coupon_code_value']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'Coupon Block By Store - coupon';

  /* Display: Categories Coupon  */
  $handler = $view->new_display('block', 'Categories Coupon ', 'block_coupon_categories');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Categories Coupon ';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Xem thêm Coupons';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Store (field_store) */
  $handler->display->display_options['relationships']['field_store_nid']['id'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['table'] = 'field_data_field_store';
  $handler->display->display_options['relationships']['field_store_nid']['field'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_store_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Coupon Code */
  $handler->display->display_options['fields']['field_coupon_code']['id'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['field'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coupon_code']['hide_empty'] = TRUE;
  /* Field: Content: Coupon Note */
  $handler->display->display_options['fields']['field_coupon_note']['id'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['table'] = 'field_data_field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['field'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_note']['element_label_colon'] = FALSE;
  /* Field: Content: Coupon Save */
  $handler->display->display_options['fields']['field_coupon_save']['id'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['table'] = 'field_data_field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['field'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_save']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_save']['element_label_colon'] = FALSE;
  /* Field: Content: End Time */
  $handler->display->display_options['fields']['field_end_time']['id'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['table'] = 'field_data_field_end_time';
  $handler->display->display_options['fields']['field_end_time']['field'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['label'] = '';
  $handler->display->display_options['fields']['field_end_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_end_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_end_time']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd-m-Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_store']['id'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['table'] = 'field_data_field_store';
  $handler->display->display_options['fields']['field_store']['field'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['label'] = '';
  $handler->display->display_options['fields']['field_store']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_store']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: Aff Link */
  $handler->display->display_options['fields']['field_aff_link']['id'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['table'] = 'field_data_field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['field'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['label'] = '';
  $handler->display->display_options['fields']['field_aff_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aff_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aff_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aff_link']['type'] = 'link_title_plain';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  /* Field: Content statistics: Views today */
  $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['label'] = '';
  $handler->display->display_options['fields']['daycount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['daycount']['element_label_colon'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_store_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coupons' => 'coupons',
  );
  /* Filter criterion: Content: Coupon Categories (field_coupon_categories) */
  $handler->display->display_options['filters']['field_coupon_categories_tid']['id'] = 'field_coupon_categories_tid';
  $handler->display->display_options['filters']['field_coupon_categories_tid']['table'] = 'field_data_field_coupon_categories';
  $handler->display->display_options['filters']['field_coupon_categories_tid']['field'] = 'field_coupon_categories_tid';
  $handler->display->display_options['filters']['field_coupon_categories_tid']['value'] = array(
    18 => '18',
  );
  $handler->display->display_options['filters']['field_coupon_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_coupon_categories_tid']['vocabulary'] = 'coupon_categories';
  $handler->display->display_options['block_description'] = 'Categories Coupon ';

  /* Display: Stores Categories Coupon  */
  $handler = $view->new_display('block', 'Stores Categories Coupon ', 'block_store_categories_coupon');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Stores Categories Coupon ';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Xem thêm Coupons';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Store (field_store) */
  $handler->display->display_options['relationships']['field_store_nid']['id'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['table'] = 'field_data_field_store';
  $handler->display->display_options['relationships']['field_store_nid']['field'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_store_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Coupon Code */
  $handler->display->display_options['fields']['field_coupon_code']['id'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['field'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coupon_code']['hide_empty'] = TRUE;
  /* Field: Content: Coupon Note */
  $handler->display->display_options['fields']['field_coupon_note']['id'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['table'] = 'field_data_field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['field'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_note']['element_label_colon'] = FALSE;
  /* Field: Content: Coupon Save */
  $handler->display->display_options['fields']['field_coupon_save']['id'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['table'] = 'field_data_field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['field'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_save']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_save']['element_label_colon'] = FALSE;
  /* Field: Content: End Time */
  $handler->display->display_options['fields']['field_end_time']['id'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['table'] = 'field_data_field_end_time';
  $handler->display->display_options['fields']['field_end_time']['field'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['label'] = '';
  $handler->display->display_options['fields']['field_end_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_end_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_end_time']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd-m-Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_store']['id'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['table'] = 'field_data_field_store';
  $handler->display->display_options['fields']['field_store']['field'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['label'] = '';
  $handler->display->display_options['fields']['field_store']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_store']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: Aff Link */
  $handler->display->display_options['fields']['field_aff_link']['id'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['table'] = 'field_data_field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['field'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['label'] = '';
  $handler->display->display_options['fields']['field_aff_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aff_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aff_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aff_link']['type'] = 'link_title_plain';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  /* Field: Content statistics: Views today */
  $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['label'] = '';
  $handler->display->display_options['fields']['daycount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['daycount']['element_label_colon'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_store_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coupons' => 'coupons',
  );
  /* Filter criterion: Content: Stores Categories (field_stores_categories) */
  $handler->display->display_options['filters']['field_stores_categories_tid']['id'] = 'field_stores_categories_tid';
  $handler->display->display_options['filters']['field_stores_categories_tid']['table'] = 'field_data_field_stores_categories';
  $handler->display->display_options['filters']['field_stores_categories_tid']['field'] = 'field_stores_categories_tid';
  $handler->display->display_options['filters']['field_stores_categories_tid']['relationship'] = 'field_store_nid';
  $handler->display->display_options['filters']['field_stores_categories_tid']['value'] = array(
    132 => '132',
  );
  $handler->display->display_options['filters']['field_stores_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_stores_categories_tid']['vocabulary'] = 'stores_categories';
  $handler->display->display_options['block_description'] = 'Stores Categories Coupon ';

  /* Display: Sale Homepage */
  $handler = $view->new_display('block', 'Sale Homepage', 'block_sale_homepage');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sale Homepage';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Xem thêm Coupons';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Store (field_store) */
  $handler->display->display_options['relationships']['field_store_nid']['id'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['table'] = 'field_data_field_store';
  $handler->display->display_options['relationships']['field_store_nid']['field'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_store_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Coupon Code */
  $handler->display->display_options['fields']['field_coupon_code']['id'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['field'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coupon_code']['hide_empty'] = TRUE;
  /* Field: Content: Coupon Note */
  $handler->display->display_options['fields']['field_coupon_note']['id'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['table'] = 'field_data_field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['field'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_note']['element_label_colon'] = FALSE;
  /* Field: Content: Coupon Save */
  $handler->display->display_options['fields']['field_coupon_save']['id'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['table'] = 'field_data_field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['field'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_save']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_save']['element_label_colon'] = FALSE;
  /* Field: Content: End Time */
  $handler->display->display_options['fields']['field_end_time']['id'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['table'] = 'field_data_field_end_time';
  $handler->display->display_options['fields']['field_end_time']['field'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['label'] = '';
  $handler->display->display_options['fields']['field_end_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_end_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_end_time']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd-m-Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_store']['id'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['table'] = 'field_data_field_store';
  $handler->display->display_options['fields']['field_store']['field'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['label'] = '';
  $handler->display->display_options['fields']['field_store']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_store']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: Aff Link */
  $handler->display->display_options['fields']['field_aff_link']['id'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['table'] = 'field_data_field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['field'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['label'] = '';
  $handler->display->display_options['fields']['field_aff_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aff_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aff_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aff_link']['type'] = 'link_title_plain';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  /* Field: Content statistics: Views today */
  $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['label'] = '';
  $handler->display->display_options['fields']['daycount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['daycount']['element_label_colon'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_store_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coupons' => 'coupons',
  );
  /* Filter criterion: Content: Coupon Code (field_coupon_code) */
  $handler->display->display_options['filters']['field_coupon_code_value']['id'] = 'field_coupon_code_value';
  $handler->display->display_options['filters']['field_coupon_code_value']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['filters']['field_coupon_code_value']['field'] = 'field_coupon_code_value';
  $handler->display->display_options['filters']['field_coupon_code_value']['operator'] = 'empty';
  $handler->display->display_options['block_description'] = 'Sale Homepage';

  /* Display: Coupon Block By Store - Sale */
  $handler = $view->new_display('block', 'Coupon Block By Store - Sale', 'block_coupon_by_store_sale');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Coupon Block By Store - Sale';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Xem thêm Coupons';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Không có Chương trình khuyến mại nào!';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Store (field_store) */
  $handler->display->display_options['relationships']['field_store_nid']['id'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['table'] = 'field_data_field_store';
  $handler->display->display_options['relationships']['field_store_nid']['field'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_store_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Coupon Code */
  $handler->display->display_options['fields']['field_coupon_code']['id'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['field'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coupon_code']['hide_empty'] = TRUE;
  /* Field: Content: Coupon Note */
  $handler->display->display_options['fields']['field_coupon_note']['id'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['table'] = 'field_data_field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['field'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_note']['element_label_colon'] = FALSE;
  /* Field: Content: Coupon Save */
  $handler->display->display_options['fields']['field_coupon_save']['id'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['table'] = 'field_data_field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['field'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_save']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_save']['element_label_colon'] = FALSE;
  /* Field: Content: End Time */
  $handler->display->display_options['fields']['field_end_time']['id'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['table'] = 'field_data_field_end_time';
  $handler->display->display_options['fields']['field_end_time']['field'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['label'] = '';
  $handler->display->display_options['fields']['field_end_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_end_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_end_time']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd-m-Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_store']['id'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['table'] = 'field_data_field_store';
  $handler->display->display_options['fields']['field_store']['field'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['label'] = '';
  $handler->display->display_options['fields']['field_store']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_store']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: Aff Link */
  $handler->display->display_options['fields']['field_aff_link']['id'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['table'] = 'field_data_field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['field'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['label'] = '';
  $handler->display->display_options['fields']['field_aff_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aff_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aff_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aff_link']['type'] = 'link_title_plain';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  /* Field: Content statistics: Views today */
  $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['label'] = '';
  $handler->display->display_options['fields']['daycount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['daycount']['element_label_colon'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_store_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Store (field_store) */
  $handler->display->display_options['arguments']['field_store_nid']['id'] = 'field_store_nid';
  $handler->display->display_options['arguments']['field_store_nid']['table'] = 'field_data_field_store';
  $handler->display->display_options['arguments']['field_store_nid']['field'] = 'field_store_nid';
  $handler->display->display_options['arguments']['field_store_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_store_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_store_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_store_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_store_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coupons' => 'coupons',
  );
  /* Filter criterion: Content: Coupon Code (field_coupon_code) */
  $handler->display->display_options['filters']['field_coupon_code_value']['id'] = 'field_coupon_code_value';
  $handler->display->display_options['filters']['field_coupon_code_value']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['filters']['field_coupon_code_value']['field'] = 'field_coupon_code_value';
  $handler->display->display_options['filters']['field_coupon_code_value']['operator'] = 'empty';
  $handler->display->display_options['block_description'] = 'Coupon Block By Store - Sale';

  /* Display: Coupon Homepage All */
  $handler = $view->new_display('block', 'Coupon Homepage All', 'block_coupon_homepage_all');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Coupon Homepage All';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Xem thêm Coupons';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Store (field_store) */
  $handler->display->display_options['relationships']['field_store_nid']['id'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['table'] = 'field_data_field_store';
  $handler->display->display_options['relationships']['field_store_nid']['field'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_store_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Coupon Code */
  $handler->display->display_options['fields']['field_coupon_code']['id'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['field'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coupon_code']['hide_empty'] = TRUE;
  /* Field: Content: Coupon Note */
  $handler->display->display_options['fields']['field_coupon_note']['id'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['table'] = 'field_data_field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['field'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_note']['element_label_colon'] = FALSE;
  /* Field: Content: Coupon Save */
  $handler->display->display_options['fields']['field_coupon_save']['id'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['table'] = 'field_data_field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['field'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_save']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_save']['element_label_colon'] = FALSE;
  /* Field: Content: End Time */
  $handler->display->display_options['fields']['field_end_time']['id'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['table'] = 'field_data_field_end_time';
  $handler->display->display_options['fields']['field_end_time']['field'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['label'] = '';
  $handler->display->display_options['fields']['field_end_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_end_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_end_time']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd-m-Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_store']['id'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['table'] = 'field_data_field_store';
  $handler->display->display_options['fields']['field_store']['field'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['label'] = '';
  $handler->display->display_options['fields']['field_store']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_store']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: Aff Link */
  $handler->display->display_options['fields']['field_aff_link']['id'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['table'] = 'field_data_field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['field'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['label'] = '';
  $handler->display->display_options['fields']['field_aff_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aff_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aff_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aff_link']['type'] = 'link_title_plain';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  /* Field: Content statistics: Views today */
  $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['label'] = '';
  $handler->display->display_options['fields']['daycount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['daycount']['element_label_colon'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_store_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coupons' => 'coupons',
  );
  $handler->display->display_options['block_description'] = 'Coupon Homepage All';

  /* Display: Coupon Page All */
  $handler = $view->new_display('block', 'Coupon Page All', 'block_coupon_page_all');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Coupon Page All';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Xem thêm Coupons';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Store (field_store) */
  $handler->display->display_options['relationships']['field_store_nid']['id'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['table'] = 'field_data_field_store';
  $handler->display->display_options['relationships']['field_store_nid']['field'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_store_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Coupon Code */
  $handler->display->display_options['fields']['field_coupon_code']['id'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['field'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coupon_code']['hide_empty'] = TRUE;
  /* Field: Content: Coupon Note */
  $handler->display->display_options['fields']['field_coupon_note']['id'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['table'] = 'field_data_field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['field'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_note']['element_label_colon'] = FALSE;
  /* Field: Content: Coupon Save */
  $handler->display->display_options['fields']['field_coupon_save']['id'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['table'] = 'field_data_field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['field'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_save']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_save']['element_label_colon'] = FALSE;
  /* Field: Content: End Time */
  $handler->display->display_options['fields']['field_end_time']['id'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['table'] = 'field_data_field_end_time';
  $handler->display->display_options['fields']['field_end_time']['field'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['label'] = '';
  $handler->display->display_options['fields']['field_end_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_end_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_end_time']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd-m-Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_store']['id'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['table'] = 'field_data_field_store';
  $handler->display->display_options['fields']['field_store']['field'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['label'] = '';
  $handler->display->display_options['fields']['field_store']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_store']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: Aff Link */
  $handler->display->display_options['fields']['field_aff_link']['id'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['table'] = 'field_data_field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['field'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['label'] = '';
  $handler->display->display_options['fields']['field_aff_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aff_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aff_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aff_link']['type'] = 'link_title_plain';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  /* Field: Content statistics: Views today */
  $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['label'] = '';
  $handler->display->display_options['fields']['daycount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['daycount']['element_label_colon'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_store_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coupons' => 'coupons',
  );
  $handler->display->display_options['block_description'] = 'Coupon Page All';

  /* Display: Sale Page Coupon */
  $handler = $view->new_display('block', 'Sale Page Coupon', 'block_sale_page_coupon');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sale Page Coupon';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Xem thêm Coupons';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Store (field_store) */
  $handler->display->display_options['relationships']['field_store_nid']['id'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['table'] = 'field_data_field_store';
  $handler->display->display_options['relationships']['field_store_nid']['field'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_store_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Coupon Code */
  $handler->display->display_options['fields']['field_coupon_code']['id'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['field'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coupon_code']['hide_empty'] = TRUE;
  /* Field: Content: Coupon Note */
  $handler->display->display_options['fields']['field_coupon_note']['id'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['table'] = 'field_data_field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['field'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_note']['element_label_colon'] = FALSE;
  /* Field: Content: Coupon Save */
  $handler->display->display_options['fields']['field_coupon_save']['id'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['table'] = 'field_data_field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['field'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_save']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_save']['element_label_colon'] = FALSE;
  /* Field: Content: End Time */
  $handler->display->display_options['fields']['field_end_time']['id'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['table'] = 'field_data_field_end_time';
  $handler->display->display_options['fields']['field_end_time']['field'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['label'] = '';
  $handler->display->display_options['fields']['field_end_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_end_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_end_time']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd-m-Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_store']['id'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['table'] = 'field_data_field_store';
  $handler->display->display_options['fields']['field_store']['field'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['label'] = '';
  $handler->display->display_options['fields']['field_store']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_store']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: Aff Link */
  $handler->display->display_options['fields']['field_aff_link']['id'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['table'] = 'field_data_field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['field'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['label'] = '';
  $handler->display->display_options['fields']['field_aff_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aff_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aff_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aff_link']['type'] = 'link_title_plain';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  /* Field: Content statistics: Views today */
  $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['label'] = '';
  $handler->display->display_options['fields']['daycount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['daycount']['element_label_colon'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_store_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coupons' => 'coupons',
  );
  /* Filter criterion: Content: Coupon Code (field_coupon_code) */
  $handler->display->display_options['filters']['field_coupon_code_value']['id'] = 'field_coupon_code_value';
  $handler->display->display_options['filters']['field_coupon_code_value']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['filters']['field_coupon_code_value']['field'] = 'field_coupon_code_value';
  $handler->display->display_options['filters']['field_coupon_code_value']['operator'] = 'empty';
  $handler->display->display_options['block_description'] = 'Sale Page Coupon';

  /* Display: Coupon Page  Coupon */
  $handler = $view->new_display('block', 'Coupon Page  Coupon', 'block_coupon_page_coupon');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Coupon Page  Coupon';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Xem thêm Coupons';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Store (field_store) */
  $handler->display->display_options['relationships']['field_store_nid']['id'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['table'] = 'field_data_field_store';
  $handler->display->display_options['relationships']['field_store_nid']['field'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_store_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Coupon Code */
  $handler->display->display_options['fields']['field_coupon_code']['id'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['field'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coupon_code']['hide_empty'] = TRUE;
  /* Field: Content: Coupon Note */
  $handler->display->display_options['fields']['field_coupon_note']['id'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['table'] = 'field_data_field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['field'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_note']['element_label_colon'] = FALSE;
  /* Field: Content: Coupon Save */
  $handler->display->display_options['fields']['field_coupon_save']['id'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['table'] = 'field_data_field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['field'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_save']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_save']['element_label_colon'] = FALSE;
  /* Field: Content: End Time */
  $handler->display->display_options['fields']['field_end_time']['id'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['table'] = 'field_data_field_end_time';
  $handler->display->display_options['fields']['field_end_time']['field'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['label'] = '';
  $handler->display->display_options['fields']['field_end_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_end_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_end_time']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd-m-Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_store']['id'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['table'] = 'field_data_field_store';
  $handler->display->display_options['fields']['field_store']['field'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['label'] = '';
  $handler->display->display_options['fields']['field_store']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_store']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: Aff Link */
  $handler->display->display_options['fields']['field_aff_link']['id'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['table'] = 'field_data_field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['field'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['label'] = '';
  $handler->display->display_options['fields']['field_aff_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aff_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aff_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aff_link']['type'] = 'link_title_plain';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  /* Field: Content statistics: Views today */
  $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['label'] = '';
  $handler->display->display_options['fields']['daycount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['daycount']['element_label_colon'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_store_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coupons' => 'coupons',
  );
  /* Filter criterion: Content: Coupon Code (field_coupon_code) */
  $handler->display->display_options['filters']['field_coupon_code_value']['id'] = 'field_coupon_code_value';
  $handler->display->display_options['filters']['field_coupon_code_value']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['filters']['field_coupon_code_value']['field'] = 'field_coupon_code_value';
  $handler->display->display_options['filters']['field_coupon_code_value']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'Coupon Page  Coupon';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = '';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 1;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Coupon Code */
  $handler->display->display_options['fields']['field_coupon_code']['id'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['table'] = 'field_data_field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['field'] = 'field_coupon_code';
  $handler->display->display_options['fields']['field_coupon_code']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coupon_code']['hide_empty'] = TRUE;
  /* Field: Content: Coupon Note */
  $handler->display->display_options['fields']['field_coupon_note']['id'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['table'] = 'field_data_field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['field'] = 'field_coupon_note';
  $handler->display->display_options['fields']['field_coupon_note']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_note']['element_label_colon'] = FALSE;
  /* Field: Content: Coupon Save */
  $handler->display->display_options['fields']['field_coupon_save']['id'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['table'] = 'field_data_field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['field'] = 'field_coupon_save';
  $handler->display->display_options['fields']['field_coupon_save']['label'] = '';
  $handler->display->display_options['fields']['field_coupon_save']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coupon_save']['element_label_colon'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_store_nid';
  $handler->display->display_options['fields']['field_image']['label'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '[field_image] ';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_store_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[field_image]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_store']['id'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['table'] = 'field_data_field_store';
  $handler->display->display_options['fields']['field_store']['field'] = 'field_store';
  $handler->display->display_options['fields']['field_store']['label'] = '';
  $handler->display->display_options['fields']['field_store']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_store']['element_label_colon'] = FALSE;
  /* Field: Content: Aff Link */
  $handler->display->display_options['fields']['field_aff_link']['id'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['table'] = 'field_data_field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['field'] = 'field_aff_link';
  $handler->display->display_options['fields']['field_aff_link']['label'] = '';
  $handler->display->display_options['fields']['field_aff_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aff_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aff_link']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Store (field_store) */
  $handler->display->display_options['arguments']['field_store_nid']['id'] = 'field_store_nid';
  $handler->display->display_options['arguments']['field_store_nid']['table'] = 'field_data_field_store';
  $handler->display->display_options['arguments']['field_store_nid']['field'] = 'field_store_nid';
  $handler->display->display_options['arguments']['field_store_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_store_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_store_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_store_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_store_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coupons' => 'coupons',
  );
  $handler->display->display_options['path'] = 'api/coupon/json/%';
  $export['coupon'] = $view;

  return $export;
}
