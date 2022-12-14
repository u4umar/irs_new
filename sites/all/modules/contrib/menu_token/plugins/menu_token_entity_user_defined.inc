<?php

class menu_token_entity_user_defined extends menu_token_handler {
  public function form_options($options) {
    $output['menu_token_entity_user_defined'] = array(
      '#title' => t('Entity ID'),
      '#description' => t('The id of the entity that this token handler should load.'),
      '#type' => 'textfield',
      '#default_value' => isset($options['id']) ? $options['id'] : '',
    );

    return $output;
  }

  public function form_submit($form, &$form_state) {
    $options['id'] = $form_state['values']['menu_token_entity_user_defined'];
    return $options;
  }

  public function form_validate($form, &$form_state) {
    // First do general validation.
    parent::form_validate($form, $form_state);

    $id = $form_state['values']['menu_token_entity_user_defined'];
    $entity_type = $form_state['_menu_token_entity_type'];

    if (!is_numeric($id)) {
      form_set_error('menu_token_entity_user_defined', t('Entity ID should be numeric.'));
      return;
    }
    else if (!entity_load_single($entity_type, $id)) {
      form_set_error('menu_token_entity_user_defined', t('Entity should exist.'));
      return;
    }
  }

  public function form_alter(&$form, &$form_state) {
    // Nothing to do here.
  }

  public function object_load($options) {
    $entity_type = $options['_type'];

    if (is_numeric($options['id'])) {
      return entity_load_single($entity_type, $options['id']);
    }

    return FALSE;
  }
}
