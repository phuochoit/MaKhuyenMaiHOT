<?php
/**
 * @file
 * footer_copyright.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function footer_copyright_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Copyright';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_copyright';
  $fe_block_boxes->body = '<p>Copyright © 2018 Makhuyenmaihot.info -&nbsp;Chia sẻ mã giảm giá nhanh nhất mới nhất&nbsp;hàng đầu Việt Nam. <a class="dmca-badge" href="//www.dmca.com/Protection/Status.aspx?ID=ac1f1e1c-6410-4998-8f7a-52b2c67a8594" title="DMCA.com Protection Status" target="_blank"><img alt="DMCA.com Protection Status" src="//images.dmca.com/Badges/dmca_protected_sml_120h.png?ID=ac1f1e1c-6410-4998-8f7a-52b2c67a8594" style="float:right" /></a></p>
';

  $export['footer_copyright'] = $fe_block_boxes;

  return $export;
}
