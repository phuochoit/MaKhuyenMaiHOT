<?php
/**
 * @file
 * article.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function article_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:article.
  $config['node:article'] = array(
    'instance' => 'node:article',
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[node:field_teaser]',
      ),
      'abstract' => array(
        'value' => 'Makhuyenmaihot.info',
      ),
      'keywords' => array(
        'value' => 'chương trình khuyến mại, khuyến mại, Mã giảm giá,  [site:name], Makhuyenmaihot.info',
      ),
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'noarchive' => 'noarchive',
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => 'chương trình khuyến mại, khuyến mại, Mã giảm giá,  [site:name], Makhuyenmaihot.info',
      ),
      'image_src' => array(
        'value' => '[node:field_image]',
      ),
      'itemprop:name' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'itemprop:description' => array(
        'value' => '[node:field_teaser]',
      ),
      'itemprop:image' => array(
        'value' => '[node:field_image]',
      ),
      'og:url' => array(
        'value' => '[current-page:url]',
      ),
      'og:title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'og:description' => array(
        'value' => '[node:field_teaser]',
      ),
      'og:image' => array(
        'value' => '[node:field_image]',
      ),
      'og:image:url' => array(
        'value' => '[node:field_image]',
      ),
      'og:image:secure_url' => array(
        'value' => '[node:field_image]',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url]',
      ),
      'twitter:title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'twitter:description' => array(
        'value' => '[node:field_teaser]',
      ),
      'twitter:image' => array(
        'value' => '[node:field_image]',
      ),
    ),
  );

  return $config;
}
