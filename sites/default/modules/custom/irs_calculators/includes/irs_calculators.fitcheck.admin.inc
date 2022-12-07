<?php

/**
 * Function for the Fit Check fields
 */
function irs_calculator_fitcheck_fields() {
  $fields = array(
    'title' => array('type' => 'textfield', 'title' => 'Title'),
    'body' => array('type' => 'text_format', 'title' => 'Body'),
    'internal-revenue-agents' => 'Internal Revenue Agents',
    'taxpayer-advisory' => 'Individual Taxpayer Advisory Specialists',
    'information-technology' => 'Information Technology Specialists',
    'tax-compliance-officer' => 'Tax Compliance Officers',
    'contact-representatives' => 'Contact  Representatives',
    'internal-revenue-officer' => 'Internal Revenue  Officers',
    'criminal-investigation-special-agent' => 'Criminal Investigation Special Agents'
  );

  return $fields;
}

/**
 * Function to get the form suffixes for the content fields
 * @return array
 */
function irs_calculator_fitcheck_form_suffixes() {
  $suffixes = array(
    'heading',
    'body',
    'more-info-url'
  );

  return $suffixes;
}

/**
 * Function for the Fit Check Questions
 * @return array
 */

function irs_calculator_fitcheck_question_fields(){
  $fields = array(
    'academic-study' => 'Academic Study',
    'ideal-job' => 'Ideal Job',
    'travel' => 'Travel',
    'five-year' => 'Five Year',
    'work-preference' => 'Work Preference',
  );

  return $fields;
}

/**
 * Form builder; Update content for the Fit Check Q/A
 * settings form.
 */
function irs_calculator_fitcheck_admin_form($form, &$form_state) {

  // Set the fields to construct
  $fields = irs_calculator_fitcheck_fields();

  // Get the values
  $values = variable_get(IRS_FITCHECK_CONTENT, array());

  foreach ($fields as $field_name => $field_title) {
    if (is_array($field_title)) {

      switch ($field_title['type']) {
        case 'textfield':
          $form[$field_name] = array(
            '#type' => 'textfield',
            '#title' => t($field_title['title']),
            '#default_value' => $values[$field_name]['body'],
            '#size' => 40,
            '#required' => TRUE,
          );
          break;

        case 'text_format':
          $form[$field_name] = array(
            '#type' => 'text_format',
            '#title' => t($field_title['title']),
            '#default_value' => $values[$field_name]['body'],
            '#rows' => 5,
            '#resizable' => FALSE,
            '#format' => 'full_html',
            '#required' => TRUE,
          );
          break;
      }

    }
    else {
      $form[$field_name] = array(
        '#type' => 'fieldset',
        '#title' => t($field_title),
        '#collapsible' => TRUE,
        '#collapsed' => FALSE,
      );

      $form[$field_name][$field_name . '-heading'] = array(
        '#type' => 'textfield',
        '#title' => t('Heading'),
        '#default_value' => $values[$field_name]['heading'],
        '#size' => 40,
        '#maxlength' => 255,
        '#required' => TRUE,
      );

      $form[$field_name][$field_name . '-body'] = array(
        '#type' => 'text_format',
        '#title' => t('Body'),
        '#default_value' => $values[$field_name]['body'],
        '#rows' => 5,
        '#resizable' => FALSE,
        '#format' => 'full_html',
        '#required' => TRUE,
      );

      $form[$field_name][$field_name . '-more-info-url'] = array(
        '#type' => 'textfield',
        '#title' => t('More information URL'),
        '#default_value' => $values[$field_name]['more-info-url'],
        '#size' => 40,
        '#required' => FALSE,
      );
    }
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save settings'),
  );

  return $form;
}

/**
 * Process the FitCheck form
 *
 * @param $form
 * @param $form_state
 */
function irs_calculator_fitcheck_admin_form_submit($form, &$form_state) {
  // Define key / field values
  $fields = irs_calculator_fitcheck_fields();
  $suffixes = irs_calculator_fitcheck_form_suffixes();

  // Get the values from the submission
  foreach ($fields as $field_name => $field_title) {
    if (is_array($field_title)){
      $value = (!isset($form_state['values'][$field_name]['value'])) ? $form_state['values'][$field_name] : $form_state['values'][$field_name]['value'];
      $values[$field_name]['body'] = $value;
    } else {
      foreach ($suffixes as $i => $suffix) {
        $name = $field_name . '-' . $suffix;
        $value = (!isset($form_state['values'][$name]['value'])) ? $form_state['values'][$name] : $form_state['values'][$name]['value'];

        $values[$field_name][$suffix] = $value;
      }
    }
  }

  // Saved serialized array to a variable
  variable_set(IRS_FITCHECK_CONTENT, $values);

  // Set the message to the user
  drupal_set_message(t('The settings have been saved'));
}

/**
 * Form builder; Update questions for the Fit Check Q/A
 * settings form.
 */
function irs_calculator_fitcheck_admin_questions_form($form, &$form_state) {
  // Set the fields to construct
  $fields = irs_calculator_fitcheck_fields();

  // Get the values
  $values = variable_get(IRS_FITCHECK_QUESTIONS, array());

  $counter = 0;
  foreach ($values as $field_name => $field_row){
    $form[$field_name] = array(
      '#type' => 'fieldset',
      '#title' => t('Step #'.++$counter),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );

    $form[$field_name][$field_name . '-question'] = array(
      '#type' => 'textfield',
      '#title' => t('Question'),
      '#default_value' => $field_row['question'],
      '#size' => 80,
      '#maxlength' => 255,
      '#required' => TRUE,
    );

    foreach ($field_row['options'] as $option_key => $option){
      $form[$field_name][$field_name . '-option-' . $option_key] = array(
        '#type' => 'textfield',
        '#title' => t('Option'),
        '#default_value' => $option['title'],
        '#size' => 40,
        '#maxlength' => 255,
        '#required' => TRUE,
      );
    }
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save settings'),
  );

  return $form;
}

/**
 * Process the FitCheck Question form
 *
 * @param $form
 * @param $form_state
 */
function irs_calculator_fitcheck_admin_questions_form_submit($form, &$form_state) {
  // Get the values
  $values = variable_get(IRS_FITCHECK_QUESTIONS, array());

  // Add in the submitted values
  foreach ($values as $field_name => $field_row){
    $values[$field_name]['question'] = $form_state['values'][$field_name . '-question'];

    // Options
    foreach ($field_row['options'] as $option_key => $option){
      $values[$field_name]['options'][$option_key]['title'] = $form_state['values'][$field_name . '-option-' . $option_key];
    }
  }

  // Saved serialized array to a variable
  variable_set(IRS_FITCHECK_QUESTIONS, $values);

  // Set the message to the user
  drupal_set_message(t('The settings have been saved'));
}