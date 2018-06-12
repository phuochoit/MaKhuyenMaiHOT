<?php
/**
 * @file
 * meta_tag.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function meta_tag_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
