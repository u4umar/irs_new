<?php

/**
 * Function for the Experience fields
 */
function irs_calculator_experience_fields() {
  $fields = array(
    'grade' => array(
      'label' => 'Grade',
      'input' => 'radio'

    ),
    'work-experience' => array(
      'label' => 'Work Experience',
      'input' => 'text'
    ),
    'education' => array(
      'label' => 'Education',
      'input' => 'radio'
    ),
    'saa' => array(
      'label' => 'Superior Academic Achievement',
      'input' => 'text_format'
    )
  );

  return $fields;
}

/**
 * Form builder; Update content for the Experience Q/A
 * settings form.
 */
function irs_calculator_experience_admin_form($form, &$form_state) {

  // Set the fields to construct
  $fields = irs_calculator_experience_fields();

  // Get the values
  $values = variable_get(IRS_EXPERIENCE_QUESTIONS, array());

  // Add in the main content fields
  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => $values['content']['title'],
    '#size' => 125,
    '#required' => TRUE,
  );

  // Add in the main content fields
  $form['body'] = array(
    '#type' => 'text_format',
    '#title' => t('Body'),
    '#default_value' => $values['content']['body'],
    '#rows' => 5,
    '#resizable' => FALSE,
    '#format' => 'full_html',
    '#required' => TRUE,
  );

  foreach ($fields as $field_name => $row) {

    $field_title = $row['label'];
    $field_fieldset = $field_name . '-fieldset';

    $field_values = $values[$field_name];

    // Fieldset
    $form[$field_fieldset] = array(
      '#type' => 'fieldset',
      '#title' => t($field_title),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );

    // Title field
    $form[$field_fieldset][$field_name] = array(
      '#type' => 'textfield',
      '#title' => t('Question'),
      '#default_value' => $values[$field_name]['title'],
      '#size' => 125,
      '#required' => TRUE,
    );

    if (isset($values[$field_name]['body'])){
      $body_description = '';

      if (isset($values[$field_name]['inputs'])){
        $tokens = implode(', ',array_keys($values[$field_name]['inputs']));

        $body_description = '<p><strong>Tokens available for Body:</strong> ' . $tokens . '</p>';
      }

      $form[$field_fieldset][$field_name.':body'] = array(
        '#type' => 'text_format',
        '#title' => t('Body'),
        '#description' => $body_description,
        '#default_value' => $values[$field_name]['body'],
        '#rows' => 8,
        '#resizable' => FALSE,
        '#format' => 'full_html',
        '#required' => TRUE,
      );
    }

    if (isset($field_values['options'])){
      // Options
      foreach ($field_values['options'] as $option_name => $option){
        $option_label = str_replace(array('phd', 'Phd'), 'PhD', ucwords(str_replace('-', ' ', $option_name)));
        $option_value = $option['title'];

        $form[$field_fieldset][$field_name . ':' . $option_name] = array(
          '#type' => 'textfield',
          '#title' => t($option_label),
          '#default_value' => $option_value,
          '#size' => 40,
          '#required' => TRUE,
        );
      }
    }
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save settings'),
  );

  return $form;
}

/**
 * Process the Experience form
 *
 * @param $form
 * @param $form_state
 */
function irs_calculator_experience_admin_form_submit($form, &$form_state) {
  // Define key / field values
  $fields = irs_calculator_experience_fields();

  // Get the existing values to over write
  $values = variable_get(IRS_EXPERIENCE_QUESTIONS, array());

  // Set the values for the main content
  $values['content'] = array(
    'title' => $form_state['values']['title'],
    'body' => $form_state['values']['body']['value']
  );

  // Build option to value mapped array
  $options = array();
  foreach ($form_state['values'] as $key => $value){
    $split_key = explode(':', $key);

    if (count($split_key) == 2){
      if ($split_key[1] == 'body'){
        continue;
      }

      $options[$split_key[0]][$split_key[1]] = $value;
    }
  }

  // Get the values from the submission
  foreach ($fields as $field_name => $field_title) {
    $values[$field_name]['title'] = $form_state['values'][$field_name];

    if (isset($form_state['values'][$field_name.':body'])){
      $values[$field_name]['body'] = $form_state['values'][$field_name.':body']['value'];
    }

    if (isset($options[$field_name])){
      foreach($options[$field_name] as $option_key => $option_value){
        $values[$field_name]['options'][$option_key]['title'] =$option_value;
      }
    }
  }

  // Saved serialized array to a variable
  variable_set(IRS_EXPERIENCE_QUESTIONS, $values);

  // Set the message to the user
  drupal_set_message(t('The settings have been saved'));
}