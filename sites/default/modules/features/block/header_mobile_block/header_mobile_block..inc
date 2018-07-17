<?php
/**
 * @file
 * header_mobile_block..inc
 */

/**
 * Implements hook_default_block_machine_name_boxes().
 */
function header_mobile_block_default_block_machine_name_boxes() {
  $export = array();

  $block_machine_name_boxes = new stdClass();
  $block_machine_name_boxes->machine_name = 'header_mobile_block';
  $export['header_mobile_block'] = $block_machine_name_boxes;

  return $export;
}
