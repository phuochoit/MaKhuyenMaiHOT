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
    'disabled' => FALSE,
    'config' => array(
      'description' => array(
        'value' => '[node:field_teaser]',
      ),
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'image_src' => array(
        'value' => '[node:field_image]',
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
      'twitter:card' => array(
        'value' => 'summary',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url]',
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
