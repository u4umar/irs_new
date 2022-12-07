<?php

/**
* The menu token handler class should be extended by all menu token plugins.
*/
abstract class menu_token_handler {
  /**
  * You can provide options for your menu token handler via this function.
  * The return value will be appended to the form as soon as the administrator
  * chooses your plugin.
  */
  abstract public function form_options($options);

  /**
  * This function allows your plugin to act upon form submission. The return
  * value will be added to the $options array and thus should be an array
  * itself.
  *
  * Note: Only invoked for selected plugins.
  */
  abstract public function form_submit($form, &$form_state);

  /**
  * This function allows your plugin to act upon form validation. The return
  * value will be added to the $options array and thus should be an array
  * itself.
  *
  * Note: Only invoked for selected plugins.
  */
  public function form_validate($form, &$form_state) {
    // Get info.
    $entity_type = $form_state['_menu_token_entity_type'];
    $token_info = token_get_entity_mapping();
    $entity_info = entity_get_info($token_info[$entity_type]);
    $entities = array_keys(variable_get('menu_token_entities', drupal_map_assoc(array('node', 'user'))));

    // Get link path tokens.
    $link_path_tokens = array_keys(token_scan($form_state['values']['options']['menu_token_link_path']));
    $link_path_tokens = array_intersect($link_path_tokens, $entities);

    // Get link title tokens.
    $link_title_tokens = array_keys(token_scan($form_state['values']['link_title']));
    $link_title_tokens = array_intersect($link_path_tokens, $entities);

    // Set error if no tokens have been detected in either field.
    if (!in_array($entity_type, $link_path_tokens) && !in_array($entity_type, $link_title_tokens)) {
    form_set_error('menu_token_type_' . $entity_type, t('A method of type %label has been set, but you have not provided a token of type %type in menu link title or path.', array('%label' => $entity_info['label'], '%type' => $entity_type)));
    form_set_error('link_path');
    form_set_error('link_title');
    }
  }

  /**
  * You can alter the menu item administration form with this function.
  */
  abstract public function form_alter(&$form, &$form_state);

  /**
  * This function is used to load the relevant token replacement object.
  */
  abstract public function object_load($options);
}
