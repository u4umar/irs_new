<?php

/**
 * @file
 * salary_table.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function salary_table_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-salary_table-body'.
  $field_instances['node-salary_table-body'] = array(
    'bundle' => 'salary_table',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<p>INTERNAL REVENUE (IR)</p>

<p>MANAGER PAYBAND SALARY TABLE -- 2016 --&nbsp;</p>

<p>&nbsp;</p>

<p>LOCALITY PAYMENT OF&nbsp;</p>

<p style="line-height: 20.8px;">Issue Date:&nbsp;December 23, 2015</p>

<p style="line-height: 20.8px;">Supersedes Salary Table Issued&nbsp;December 24, 2014</p>

<p style="line-height: 20.8px;">Effective the first day of the first pay period beginning on or after&nbsp;January 1, 2016</p>
',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => 'Brief description of salary table information',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-salary_table-field_st_document'.
  $field_instances['node-salary_table-field_st_document'] = array(
    'bundle' => 'salary_table',
    'deleted' => 0,
    'description' => 'Choose a salary table document to attach for readers to view directly',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_st_document',
    'label' => 'ST Document',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt pdf doc docx',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 1,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => 'salary-tables/[node:field-st-effective-date:custom:Y]',
        ),
        'redirect' => 0,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-salary_table-field_st_effective_date'.
  $field_instances['node-salary_table-field_st_effective_date'] = array(
    'bundle' => 'salary_table',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_st_effective_date',
    'label' => 'ST Effective Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-salary_table-field_st_issued_date'.
  $field_instances['node-salary_table-field_st_issued_date'] = array(
    'bundle' => 'salary_table',
    'deleted' => 0,
    'description' => 'The date at which the new salary table was issued',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_st_issued_date',
    'label' => 'ST Issued Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-salary_table-field_st_table'.
  $field_instances['node-salary_table-field_st_table'] = array(
    'bundle' => 'salary_table',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'caption' => NULL,
          'import' => array(
            'file' => '',
            'import' => 'Upload CSV',
          ),
          'paste' => NULL,
          'rebuild' => array(
            'count_cols' => 5,
            'count_rows' => 14,
            'rebuild' => 'Rebuild Table',
          ),
          'tabledata' => array(
            'row_0' => array(
              'col_0' => 'Payband',
              'col_1' => 'Annual Minimum',
              'col_2' => 'Annual Maximum',
              'col_3' => 'Hourly Minimum',
              'col_4' => 'Hourly Maximum',
            ),
            'row_1' => array(
              'col_0' => 'IR-13',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
            ),
            'row_2' => array(
              'col_0' => 'IR-12',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
            ),
            'row_3' => array(
              'col_0' => 'IR-11',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
            ),
            'row_4' => array(
              'col_0' => 'IR-10',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
            ),
            'row_5' => array(
              'col_0' => 'IR-9',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
            ),
            'row_6' => array(
              'col_0' => 'IR-8',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
            ),
            'row_7' => array(
              'col_0' => 'IR-7',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
            ),
            'row_8' => array(
              'col_0' => 'IR-6',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
            ),
            'row_9' => array(
              'col_0' => 'IR-5',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
            ),
            'row_10' => array(
              'col_0' => 'IR-4',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
            ),
            'row_11' => array(
              'col_0' => 'IR-3',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
            ),
            'row_12' => array(
              'col_0' => 'IR-2',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
            ),
            'row_13' => array(
              'col_0' => 'IR-1',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
            ),
          ),
        ),
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => 'Table ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'tablefield',
        'settings' => array(
          'export_csv' => 0,
          'header_orientation' => 'Horizontal',
          'hide_cols_skip_head' => FALSE,
          'hide_empty_cols' => FALSE,
          'hide_empty_rows' => FALSE,
          'hide_header' => 0,
          'sortable' => FALSE,
          'sticky_header' => TRUE,
          'striping' => TRUE,
          'trim_trailing_cols' => FALSE,
          'trim_trailing_rows' => FALSE,
        ),
        'type' => 'tablefield_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(
          'export_csv' => 0,
          'hide_header' => 0,
        ),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_st_table',
    'label' => 'ST Table',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tablefield',
      'settings' => array(
        'cell_processing' => 1,
        'lock_values' => 0,
        'restrict_rebuild' => 0,
      ),
      'type' => 'tablefield',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Brief description of salary table information');
  t('Choose a salary table document to attach for readers to view directly');
  t('ST Document');
  t('ST Effective Date');
  t('ST Issued Date');
  t('ST Table');
  t('Table ');
  t('The date at which the new salary table was issued');

  return $field_instances;
}
