<?php
/**
 * @file
 * product.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function product_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'product';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product - Home';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Xem thêm';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-4 col-sm-6 ';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
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
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<a href="[path]" title="[title] ">
<img typeof="foaf:Image" class="img-fluid" src="/sites/makhuyenmaihot.dd/files/no_image_available.png">
</a>';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Discount */
  $handler->display->display_options['fields']['field_discount']['id'] = 'field_discount';
  $handler->display->display_options['fields']['field_discount']['table'] = 'field_data_field_discount';
  $handler->display->display_options['fields']['field_discount']['field'] = 'field_discount';
  $handler->display->display_options['fields']['field_discount']['label'] = '';
  $handler->display->display_options['fields']['field_discount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_discount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_discount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['label'] = '';
  $handler->display->display_options['fields']['field_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
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
  $handler->display->display_options['fields']['field_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['type'] = 'text_plain';
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
    'products' => 'products',
  );

  /* Display: Top Product Homepage */
  $handler = $view->new_display('block', 'Top Product Homepage', 'block_top_product_homepage');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Product Homepage';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-4 col-sm-6 ';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
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
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<a href="[path]" title="[title] ">
<img typeof="foaf:Image" class="img-fluid" src="/sites/makhuyenmaihot.dd/files/no_image_available.png">
</a>';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Discount */
  $handler->display->display_options['fields']['field_discount']['id'] = 'field_discount';
  $handler->display->display_options['fields']['field_discount']['table'] = 'field_data_field_discount';
  $handler->display->display_options['fields']['field_discount']['field'] = 'field_discount';
  $handler->display->display_options['fields']['field_discount']['label'] = '';
  $handler->display->display_options['fields']['field_discount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_discount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_discount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['label'] = '';
  $handler->display->display_options['fields']['field_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
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
  $handler->display->display_options['fields']['field_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['type'] = 'text_plain';
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
    'products' => 'products',
  );
  /* Filter criterion: Content: Product Hot (field_product_hot) */
  $handler->display->display_options['filters']['field_product_hot_value']['id'] = 'field_product_hot_value';
  $handler->display->display_options['filters']['field_product_hot_value']['table'] = 'field_data_field_product_hot';
  $handler->display->display_options['filters']['field_product_hot_value']['field'] = 'field_product_hot_value';
  $handler->display->display_options['filters']['field_product_hot_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Top Product Homepage';

  /* Display: Page Product */
  $handler = $view->new_display('page', 'Page Product', 'page_product');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Page Product';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Product Hot */
  $handler->display->display_options['fields']['field_product_hot']['id'] = 'field_product_hot';
  $handler->display->display_options['fields']['field_product_hot']['table'] = 'field_data_field_product_hot';
  $handler->display->display_options['fields']['field_product_hot']['field'] = 'field_product_hot';
  $handler->display->display_options['fields']['field_product_hot']['label'] = '';
  $handler->display->display_options['fields']['field_product_hot']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_hot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_hot']['type'] = 'list_key';
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
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<a href="[path]" title="[title] ">
<img typeof="foaf:Image" class="img-fluid" src="/sites/makhuyenmaihot.dd/files/no_image_available.png">
</a>';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Discount */
  $handler->display->display_options['fields']['field_discount']['id'] = 'field_discount';
  $handler->display->display_options['fields']['field_discount']['table'] = 'field_data_field_discount';
  $handler->display->display_options['fields']['field_discount']['field'] = 'field_discount';
  $handler->display->display_options['fields']['field_discount']['label'] = '';
  $handler->display->display_options['fields']['field_discount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_discount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_discount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['label'] = '';
  $handler->display->display_options['fields']['field_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
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
  $handler->display->display_options['fields']['field_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['type'] = 'text_plain';
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
    'products' => 'products',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'Sản Phẩm | [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[view:description]',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => 'Makhuyenmaihot.info',
        'default' => 'Makhuyenmaihot.info',
      ),
      'keywords' => array(
        'value' => 'chương trình khuyến mại, khuyến mại, Mã giảm giá,  [site:name], Makhuyenmaihot.info',
        'default' => 'chương trình khuyến mại, khuyến mại, Mã giảm giá,  [site:name], Makhuyenmaihot.info',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
        'default' => array(),
      ),
      'news_keywords' => array(
        'value' => 'chương trình khuyến mại, khuyến mại, Mã giảm giá,  [site:name], Makhuyenmaihot.info',
        'default' => 'chương trình khuyến mại, khuyến mại, Mã giảm giá,  [site:name], Makhuyenmaihot.info',
      ),
      'standout' => array(
        'value' => '',
        'default' => '',
      ),
      'rating' => array(
        'value' => '',
        'default' => '',
      ),
      'referrer' => array(
        'value' => '',
        'default' => '',
      ),
      'rights' => array(
        'value' => '',
        'default' => '',
      ),
      'image_src' => array(
        'value' => '/sites/default/files/logo.png',
        'default' => '/sites/default/files/logo.png',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'set_cookie' => array(
        'value' => '',
        'default' => '',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:absolute]',
        'default' => '[current-page:url:absolute]',
      ),
      'original-source' => array(
        'value' => '',
        'default' => '',
      ),
      'prev' => array(
        'value' => '',
        'default' => '',
      ),
      'next' => array(
        'value' => '',
        'default' => '',
      ),
      'content-language' => array(
        'value' => '',
        'default' => '',
      ),
      'geo.position' => array(
        'value' => '',
        'default' => '',
      ),
      'geo.placename' => array(
        'value' => '',
        'default' => '',
      ),
      'geo.region' => array(
        'value' => '',
        'default' => '',
      ),
      'icbm' => array(
        'value' => '',
        'default' => '',
      ),
      'refresh' => array(
        'value' => '',
        'default' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
        'default' => '',
      ),
      'pragma' => array(
        'value' => '',
        'default' => '',
      ),
      'cache-control' => array(
        'value' => '',
        'default' => '',
      ),
      'expires' => array(
        'value' => '',
        'default' => '',
      ),
      'fb:admins' => array(
        'value' => '',
        'default' => '',
      ),
      'fb:app_id' => array(
        'value' => '',
        'default' => '',
      ),
      'fb:pages' => array(
        'value' => '',
        'default' => '',
      ),
      'itemtype' => array(
        'value' => '',
        'default' => '',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
        'default' => '[current-page:title]',
      ),
      'itemprop:description' => array(
        'value' => 'Chia sẻ chương trinh khuyến mại, mã giảm giá Lazada, Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
        'default' => 'Chia sẻ chương trinh khuyến mại, mã giảm giá Lazada, Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
      ),
      'itemprop:image' => array(
        'value' => '/sites/default/files/logo.png',
        'default' => '/sites/default/files/logo.png',
      ),
      'author' => array(
        'value' => '',
        'default' => '',
      ),
      'publisher' => array(
        'value' => '',
        'default' => '',
      ),
      'og:type' => array(
        'value' => '',
        'default' => '',
      ),
      'og:url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:title' => array(
        'value' => '[current-page:title] | [site:name]',
        'default' => '[current-page:title] | [site:name]',
      ),
      'og:determiner' => array(
        'value' => '',
        'default' => '',
      ),
      'og:description' => array(
        'value' => 'Chia sẻ chương trinh khuyến mại, mã giảm giá Lazada, Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
        'default' => 'Chia sẻ chương trinh khuyến mại, mã giảm giá Lazada, Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
      ),
      'og:updated_time' => array(
        'value' => '',
        'default' => '',
      ),
      'og:see_also' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image' => array(
        'value' => '/sites/default/files/logo.png',
        'default' => '/sites/default/files/logo.png',
      ),
      'og:image:url' => array(
        'value' => '/sites/default/files/logo.png',
        'default' => '/sites/default/files/logo.png',
      ),
      'og:image:secure_url' => array(
        'value' => '/sites/default/files/logo.png',
        'default' => '/sites/default/files/logo.png',
      ),
      'og:image:type' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:width' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:height' => array(
        'value' => '',
        'default' => '',
      ),
      'og:latitude' => array(
        'value' => '',
        'default' => '',
      ),
      'og:longitude' => array(
        'value' => '',
        'default' => '',
      ),
      'og:street_address' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locality' => array(
        'value' => '',
        'default' => '',
      ),
      'og:region' => array(
        'value' => '',
        'default' => '',
      ),
      'og:postal_code' => array(
        'value' => '',
        'default' => '',
      ),
      'og:country_name' => array(
        'value' => '',
        'default' => '',
      ),
      'og:email' => array(
        'value' => '',
        'default' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
        'default' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locale' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locale:alternate' => array(
        'value' => '',
        'default' => '',
      ),
      'article:author' => array(
        'value' => '',
        'default' => '',
      ),
      'article:publisher' => array(
        'value' => '',
        'default' => '',
      ),
      'article:section' => array(
        'value' => '',
        'default' => '',
      ),
      'article:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'article:published_time' => array(
        'value' => '',
        'default' => '',
      ),
      'article:modified_time' => array(
        'value' => '',
        'default' => '',
      ),
      'article:expiration_time' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:first_name' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:last_name' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:username' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:gender' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio:type' => array(
        'value' => '',
        'default' => '',
      ),
      'book:author' => array(
        'value' => '',
        'default' => '',
      ),
      'book:isbn' => array(
        'value' => '',
        'default' => '',
      ),
      'book:release_date' => array(
        'value' => '',
        'default' => '',
      ),
      'book:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:width' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:height' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:type' => array(
        'value' => '',
        'default' => '',
      ),
      'video:actor' => array(
        'value' => '',
        'default' => '',
      ),
      'video:actor:role' => array(
        'value' => '',
        'default' => '',
      ),
      'video:director' => array(
        'value' => '',
        'default' => '',
      ),
      'video:writer' => array(
        'value' => '',
        'default' => '',
      ),
      'video:duration' => array(
        'value' => '',
        'default' => '',
      ),
      'video:release_date' => array(
        'value' => '',
        'default' => '',
      ),
      'video:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'video:series' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:card' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:creator' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:creator:id' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:url' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title] | [site:name]',
        'default' => '[current-page:title] | [site:name]',
      ),
      'twitter:description' => array(
        'value' => 'Chia sẻ chương trinh khuyến mại, mã giảm giá Lazada, Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
        'default' => 'Chia sẻ chương trinh khuyến mại, mã giảm giá Lazada, Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
      ),
      'twitter:dnt' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image' => array(
        'value' => '/sites/default/files/logo.png',
        'default' => '/sites/default/files/logo.png',
      ),
      'twitter:image:width' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image:height' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image:alt' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image0' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image1' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image2' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image3' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:country' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:name:iphone' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:id:iphone' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:url:iphone' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:name:ipad' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:id:ipad' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:url:ipad' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:name:googleplay' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:id:googleplay' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:url:googleplay' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:label1' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:data1' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:label2' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:data2' => array(
        'value' => '',
        'default' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'san-pham';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'San pham';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Product by Coupon Categories */
  $handler = $view->new_display('block', 'Product by Coupon Categories', 'block_product_by_coupon_categories');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Xem thêm Sản Phẩm';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-4 col-sm-6 ';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
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
  /* Field: Content: Product Hot */
  $handler->display->display_options['fields']['field_product_hot']['id'] = 'field_product_hot';
  $handler->display->display_options['fields']['field_product_hot']['table'] = 'field_data_field_product_hot';
  $handler->display->display_options['fields']['field_product_hot']['field'] = 'field_product_hot';
  $handler->display->display_options['fields']['field_product_hot']['label'] = '';
  $handler->display->display_options['fields']['field_product_hot']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_hot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_hot']['type'] = 'list_key';
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<a href="[path]" title="[title] ">
<img typeof="foaf:Image" class="img-fluid" src="/sites/makhuyenmaihot.dd/files/no_image_available.png">
</a>';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Discount */
  $handler->display->display_options['fields']['field_discount']['id'] = 'field_discount';
  $handler->display->display_options['fields']['field_discount']['table'] = 'field_data_field_discount';
  $handler->display->display_options['fields']['field_discount']['field'] = 'field_discount';
  $handler->display->display_options['fields']['field_discount']['label'] = '';
  $handler->display->display_options['fields']['field_discount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_discount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_discount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['label'] = '';
  $handler->display->display_options['fields']['field_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
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
  $handler->display->display_options['fields']['field_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['type'] = 'text_plain';
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
    'products' => 'products',
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
  $handler->display->display_options['block_description'] = 'Product by Coupon Categories';

  /* Display: Product By Stores Categories */
  $handler = $view->new_display('block', 'Product By Stores Categories', 'block_product_by_stores_categories');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Xem thêm Sản Phẩm';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-4 col-sm-6 ';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Store (field_store) */
  $handler->display->display_options['relationships']['field_store_nid']['id'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['table'] = 'field_data_field_store';
  $handler->display->display_options['relationships']['field_store_nid']['field'] = 'field_store_nid';
  $handler->display->display_options['relationships']['field_store_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_store_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
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
  /* Field: Content: Product Hot */
  $handler->display->display_options['fields']['field_product_hot']['id'] = 'field_product_hot';
  $handler->display->display_options['fields']['field_product_hot']['table'] = 'field_data_field_product_hot';
  $handler->display->display_options['fields']['field_product_hot']['field'] = 'field_product_hot';
  $handler->display->display_options['fields']['field_product_hot']['label'] = '';
  $handler->display->display_options['fields']['field_product_hot']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_hot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_hot']['type'] = 'list_key';
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<a href="[path]" title="[title] ">
<img typeof="foaf:Image" class="img-fluid" src="/sites/makhuyenmaihot.dd/files/no_image_available.png">
</a>';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Discount */
  $handler->display->display_options['fields']['field_discount']['id'] = 'field_discount';
  $handler->display->display_options['fields']['field_discount']['table'] = 'field_data_field_discount';
  $handler->display->display_options['fields']['field_discount']['field'] = 'field_discount';
  $handler->display->display_options['fields']['field_discount']['label'] = '';
  $handler->display->display_options['fields']['field_discount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_discount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_discount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['label'] = '';
  $handler->display->display_options['fields']['field_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
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
  $handler->display->display_options['fields']['field_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['type'] = 'text_plain';
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
    'products' => 'products',
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
  $handler->display->display_options['block_description'] = 'Product By Stores Categories';
  $export['product'] = $view;

  return $export;
}
