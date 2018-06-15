<?php
/**
 * @file
 * header_mobile_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function header_mobile_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header mobile block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'header_mobile_block';
  $fe_block_boxes->body = '<p><a href="/"><img alt="" src="/sites/default/files/logo.png" /></a><button class="menu-hamburger">Menu</button></p>
';

  $export['header_mobile_block'] = $fe_block_boxes;

  return $export;
}
