<?php
/**
 * @file
 * footer_left.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function footer_left_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block Footer Left';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_footer_left';
  $fe_block_boxes->body = '<p><a href="/"><img alt="" src="/sites/default/files/logo.png" /></a></p>

<p>&nbsp;</p>

<p>Chia sẻ mã giảm giá Lazada, Adayroi, Tiki, Zalora, FPTShop và nhiều thương hiệu uy tín ở Việt Nam</p>

<p>Các coupon về du lịch, dịch vụ, xem phim, giải trí: CGV, GoGi, Kichi Kichi...</p>

<div class="rtecenter"><a class="app-button android-button clearfix" href="https://play.google.com/store/apps/details?id=com.phuochoit.magiamgia" target="_blank"><span class="fleft"><em class="fa fa-android">&nbsp;</em> </span> <span class="fright"> <span class="avail-text">Available for</span> <span class="app-service">Android</span> </span> </a></div>
';

  $export['block_footer_left'] = $fe_block_boxes;

  return $export;
}
