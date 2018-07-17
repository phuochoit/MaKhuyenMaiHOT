<?php
/**
 * @file
 * news_article.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function news_article_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-view_article-block_new_article'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'view_article-block_new_article',
    'module' => 'views',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:1:{s:5:"class";a:2:{i:0;s:9:"col-sx-12";i:1;s:10:"no-padding";}}}',
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'coupon' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'coupon',
        'weight' => 0,
      ),
    ),
    'title' => 'Bài viết gần đây',
    'visibility' => 0,
  );

  return $export;
}
