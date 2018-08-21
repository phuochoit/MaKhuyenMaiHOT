<?php
/**
 * @file
 * carousel_images.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function carousel_images_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'carousel_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Carousel Images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 1;
  $handler->display->display_options['style_options']['asnavfor_auto'] = 0;
  $handler->display->display_options['style_options']['skin'] = 'default';
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_button_path' => 'field_button_path',
    'title' => 0,
    'field_background_image' => 0,
    'field_heading_1' => 0,
    'field_subtext' => 0,
  );
  $handler->display->display_options['style_options']['slide_classes'] = 'title';
  $handler->display->display_options['style_options']['slide_image'] = 'field_background_image';
  $handler->display->display_options['style_options']['slide_layout'] = 'center';
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_region_target_id']['id'] = 'field_region_target_id';
  $handler->display->display_options['relationships']['field_region_target_id']['table'] = 'field_data_field_region';
  $handler->display->display_options['relationships']['field_region_target_id']['field'] = 'field_region_target_id';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['reverse_field_singular_region_node']['id'] = 'reverse_field_singular_region_node';
  $handler->display->display_options['relationships']['reverse_field_singular_region_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_singular_region_node']['field'] = 'reverse_field_singular_region_node';
  $handler->display->display_options['relationships']['reverse_field_singular_region_node']['relationship'] = 'field_region_target_id';
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
  /* Field: Content: Background Image */
  $handler->display->display_options['fields']['field_background_image']['id'] = 'field_background_image';
  $handler->display->display_options['fields']['field_background_image']['table'] = 'field_data_field_background_image';
  $handler->display->display_options['fields']['field_background_image']['field'] = 'field_background_image';
  $handler->display->display_options['fields']['field_background_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_background_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Heading */
  $handler->display->display_options['fields']['field_heading_1']['id'] = 'field_heading_1';
  $handler->display->display_options['fields']['field_heading_1']['table'] = 'field_data_field_heading_1';
  $handler->display->display_options['fields']['field_heading_1']['field'] = 'field_heading_1';
  $handler->display->display_options['fields']['field_heading_1']['exclude'] = TRUE;
  /* Field: Content: Heading 2 */
  $handler->display->display_options['fields']['field_heading_2']['id'] = 'field_heading_2';
  $handler->display->display_options['fields']['field_heading_2']['table'] = 'field_data_field_heading_2';
  $handler->display->display_options['fields']['field_heading_2']['field'] = 'field_heading_2';
  $handler->display->display_options['fields']['field_heading_2']['exclude'] = TRUE;
  /* Field: Content: Subtext */
  $handler->display->display_options['fields']['field_subtext']['id'] = 'field_subtext';
  $handler->display->display_options['fields']['field_subtext']['table'] = 'field_data_field_subtext';
  $handler->display->display_options['fields']['field_subtext']['field'] = 'field_subtext';
  $handler->display->display_options['fields']['field_subtext']['exclude'] = TRUE;
  /* Field: Content: Button */
  $handler->display->display_options['fields']['field_button_path']['id'] = 'field_button_path';
  $handler->display->display_options['fields']['field_button_path']['table'] = 'field_data_field_button_path';
  $handler->display->display_options['fields']['field_button_path']['field'] = 'field_button_path';
  $handler->display->display_options['fields']['field_button_path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_button_path']['alter']['text'] = '<div class="slide-caption">
	<h1 class="heading1">[field_heading_1]</h1>
        <h1 class="heading2">[field_heading_2]</h1>
	<div class="subtext">[field_subtext]</div>
	<p>
	<a class="btn btn-default btn-view" href="[field_button_path-url]" class="btn">[field_button_path-title]</a>
</p>
</div>';
  $handler->display->display_options['fields']['field_button_path']['click_sort_column'] = 'url';
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
    'carousel_image' => 'carousel_image',
  );

  /* Display: North America */
  $handler = $view->new_display('block', 'North America', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;

  /* Display: Europe */
  $handler = $view->new_display('block', 'Europe', 'block_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;

  /* Display: Middle East */
  $handler = $view->new_display('block', 'Middle East', 'block_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;

  /* Display: Latin America */
  $handler = $view->new_display('block', 'Latin America', 'block_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;

  /* Display: Asia Pacific */
  $handler = $view->new_display('block', 'Asia Pacific', 'block_5');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $export['carousel_images'] = $view;

  return $export;
}
