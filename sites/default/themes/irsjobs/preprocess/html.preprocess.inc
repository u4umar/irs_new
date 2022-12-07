<?php

/**
 * Implements hook_preprocess_html().
 *
 * Modify variables before passing them to a theme function or template file.
 */
function irsjobs_preprocess_html(){
  drupal_add_library('system', 'ui.dialog');
}
