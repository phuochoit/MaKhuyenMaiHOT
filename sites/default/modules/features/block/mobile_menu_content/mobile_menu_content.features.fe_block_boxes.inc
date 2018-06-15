<?php
/**
 * @file
 * mobile_menu_content.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function mobile_menu_content_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Mobile Menu Content';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'mobile_menu_content';
  $fe_block_boxes->body = '<div class="mobile-menu-content">
<div class="menu-content--item" data-key="block-menu-menu-menu-footer">block-menu-menu-menu-footer</div>

<div class="menu-content--item" data-key="block-footer-right">block-footer-right</div>

<div class="menu-content--item" data-key="block-search-form">block-search-form</div>

<div class="menu-content--item" data-key="subscribe-top">subscribe-top</div>
</div>
';

  $export['mobile_menu_content'] = $fe_block_boxes;

  return $export;
}
