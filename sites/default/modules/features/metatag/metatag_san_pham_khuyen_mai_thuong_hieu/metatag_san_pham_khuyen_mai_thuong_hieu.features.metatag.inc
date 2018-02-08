<?php
/**
 * @file
 * metatag_san_pham_khuyen_mai_thuong_hieu.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function metatag_san_pham_khuyen_mai_thuong_hieu_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:khuyen_mai.
  $config['node:khuyen_mai'] = array(
    'instance' => 'node:khuyen_mai',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:title] |[site:name]',
      ),
      'description' => array(
        'value' => '[node:field_teaser]',
      ),
      'image_src' => array(
        'value' => '[node:field_image]',
      ),
      'itemtype' => array(
        'value' => 'Event',
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
    ),
  );

  // Exported Metatag config instance: node:san_pham.
  $config['node:san_pham'] = array(
    'instance' => 'node:san_pham',
    'disabled' => FALSE,
    'config' => array(
      'description' => array(
        'value' => '[node:field_teaser]',
      ),
    ),
  );

  // Exported Metatag config instance: node:thuong_hieu.
  $config['node:thuong_hieu'] = array(
    'instance' => 'node:thuong_hieu',
    'disabled' => FALSE,
    'config' => array(
      'description' => array(
        'value' => '[node:field_teaser]',
      ),
    ),
  );

  return $config;
}
