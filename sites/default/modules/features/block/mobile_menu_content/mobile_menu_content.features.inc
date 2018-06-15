<?php
/**
 * @file
 * mobile_menu_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mobile_menu_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "block_machine_name" && $api == "") {
    return array("version" => "");
  }
}
