<?php
/**
 * @file
 * header_mobile_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function header_mobile_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "block_machine_name" && $api == "") {
    return array("version" => "");
  }
}
