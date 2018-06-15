<?php
/**
 * @file
 * mobile_menu_content..inc
 */

/**
 * Implements hook_default_block_machine_name_boxes().
 */
function mobile_menu_content_default_block_machine_name_boxes() {
  $export = array();

  $block_machine_name_boxes = new stdClass();
  $block_machine_name_boxes->machine_name = 'mobile_menu_content';
  $export['mobile_menu_content'] = $block_machine_name_boxes;

  return $export;
}
