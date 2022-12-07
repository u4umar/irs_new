<?php

/**
 * @file
 * irs_contexts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function irs_contexts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
