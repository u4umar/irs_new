<?php

/**
 * Implements hook_preprocess_page().
 */
function irsjobs_preprocess_page(&$variables) {
  // You can use preprocess hooks to modify the variables before they are passed
  // to the theme function or template file.

  /* Set User Account Page Titles */
  if (!user_is_logged_in()) {
    switch(current_path()) {
      case 'user':
      case 'user/login':
        drupal_set_title(t('Log In'));
        break;

      case 'user/register':
        drupal_set_title('Register an Account');
        break;

      case 'user/password':
        drupal_set_title('Password Reset');
        break;

      default:
      break;
    }
  }
}
