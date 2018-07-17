<?php
/**
 * @file
 * subscribe_top_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function subscribe_top_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Subscribe Top Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'header_subscribe_block';
  $fe_block_boxes->body = '<ul>
	<li><a href="https://www.facebook.com/makhuyenmaihot" target="_blank"><em class="fa fa-1 fa-facebook-square">&nbsp;</em></a></li>
	<li><a href="https://plus.google.com/u/0/communities/102659297950748163191"><em class="fa fa-google-plus-official">&nbsp;</em></a></li>
</ul>
';

  $export['header_subscribe_block'] = $fe_block_boxes;

  return $export;
}
