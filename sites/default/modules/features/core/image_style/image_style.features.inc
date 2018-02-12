<?php
/**
 * @file
 * image_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function image_style_image_default_styles() {
  $styles = array();

  // Exported image style: featured_article.
  $styles['featured_article'] = array(
    'label' => 'Featured Article',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 750,
          'height' => 425,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: latest_article.
  $styles['latest_article'] = array(
    'label' => 'Latest Article',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 360,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: related_news.
  $styles['related_news'] = array(
    'label' => 'Related News',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 163,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: standard_article.
  $styles['standard_article'] = array(
    'label' => 'Standard Article',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 437,
          'height' => 245,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
