<?php
/**
 * @file
 * view_ma_giam_gia.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_ma_giam_gia_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ma_giam_gia';
  $view->description = 'Hiện Thị Tất cả các nhà cung câp mã giảm giá';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mã Giảm Giá';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mã Giảm Giá';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_category_thuong_hieu',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-4 col-lg-4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Category Thương Hiệu */
  $handler->display->display_options['fields']['field_category_thuong_hieu']['id'] = 'field_category_thuong_hieu';
  $handler->display->display_options['fields']['field_category_thuong_hieu']['table'] = 'field_data_field_category_thuong_hieu';
  $handler->display->display_options['fields']['field_category_thuong_hieu']['field'] = 'field_category_thuong_hieu';
  $handler->display->display_options['fields']['field_category_thuong_hieu']['label'] = '';
  $handler->display->display_options['fields']['field_category_thuong_hieu']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category_thuong_hieu']['element_label_colon'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Category Thương Hiệu (field_category_thuong_hieu) */
  $handler->display->display_options['sorts']['field_category_thuong_hieu_tid']['id'] = 'field_category_thuong_hieu_tid';
  $handler->display->display_options['sorts']['field_category_thuong_hieu_tid']['table'] = 'field_data_field_category_thuong_hieu';
  $handler->display->display_options['sorts']['field_category_thuong_hieu_tid']['field'] = 'field_category_thuong_hieu_tid';
  /* Sort criterion: Content: sort (field_sort) */
  $handler->display->display_options['sorts']['field_sort_value']['id'] = 'field_sort_value';
  $handler->display->display_options['sorts']['field_sort_value']['table'] = 'field_data_field_sort';
  $handler->display->display_options['sorts']['field_sort_value']['field'] = 'field_sort_value';
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
    'thuong_hieu' => 'thuong_hieu',
  );

  /* Display: Page Mã Giảm Giá */
  $handler = $view->new_display('page', 'Page Mã Giảm Giá', 'page_ma_giam_gia');
  $handler->display->display_options['path'] = 'ma-giam-gia';

  /* Display: Block Top Mã Giảm Giá */
  $handler = $view->new_display('block', 'Block Top Mã Giảm Giá', 'block_top_ma_giam_gia');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-4 col-sm-4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'top_trademark' => 'top_trademark',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category Thương Hiệu */
  $handler->display->display_options['fields']['field_category_thuong_hieu']['id'] = 'field_category_thuong_hieu';
  $handler->display->display_options['fields']['field_category_thuong_hieu']['table'] = 'field_data_field_category_thuong_hieu';
  $handler->display->display_options['fields']['field_category_thuong_hieu']['field'] = 'field_category_thuong_hieu';
  $handler->display->display_options['fields']['field_category_thuong_hieu']['label'] = '';
  $handler->display->display_options['fields']['field_category_thuong_hieu']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category_thuong_hieu']['element_label_colon'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  $export['ma_giam_gia'] = $view;

  return $export;
}
