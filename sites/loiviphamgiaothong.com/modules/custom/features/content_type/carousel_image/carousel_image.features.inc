<?php
/**
 * @file
 * carousel_image.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function carousel_image_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function carousel_image_node_info() {
  $items = array(
    'carousel_image' => array(
      'name' => t('Carousel Image'),
      'base' => 'node_content',
      'description' => t('Shows up on the top of the homepage for reach region. If only one Carousel image is provided the image will be fixed, if there are multiple they will appear in a carousel.  Content varies by region. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
