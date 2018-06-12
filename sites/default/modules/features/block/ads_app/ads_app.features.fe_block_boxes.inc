<?php
/**
 * @file
 * ads_app.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ads_app_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'ADS MY APP';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ads_my_app';
  $fe_block_boxes->body = '<ul>
	<li><a href="https://play.google.com/store/apps/details?id=com.phuochoit.xuphatgiaothong" target="_blank" title="Lỗi vi phạm, Xử phạt giao thông 2018"><img alt="" src="/sites/default/files/giaothong.png" /></a></li>
	<li><a href="https://play.google.com/store/apps/details?id=com.phuochoit.babau" target="_blank" title="Bà Bầu: Trợ lý Bà bầu"><img alt="" src="/sites/default/files/babau.png" /></a></li>
	<li><a href="https://play.google.com/store/apps/details?id=com.phuochoit.tiengviet40" target="_blank" title="Tieq Viet"><img alt="" src="/sites/default/files/tiengviet.png" /></a></li>
</ul>
';

  $export['ads_my_app'] = $fe_block_boxes;

  return $export;
}
