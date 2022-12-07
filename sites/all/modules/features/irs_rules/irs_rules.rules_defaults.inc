<?php

/**
 * @file
 * irs_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function irs_rules_default_rules_configuration() {
  $items = array();
  $items['rules_content_create_menu_office_location_employment'] = entity_import('rules_config', '{ "rules_content_create_menu_office_location_employment" : {
      "LABEL" : "Content Create Menu: Office Location - Employment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Menu" ],
      "REQUIRES" : [ "rules", "menu_rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "location" : "location" } }
          }
        },
        { "AND" : [
            { "data_is" : { "data" : [ "node:field-location-office-type" ], "value" : "1" } },
            { "AND" : [ { "NOT menu_rules_node_has_menu_entry" : { "nid" : "[node:nid]" } } ] }
          ]
        }
      ],
      "DO" : [
        { "menu_rules_create_item" : {
            "USING" : {
              "menu_parent" : "main-menu:939",
              "menu_link_title" : "[node:title]",
              "nid" : "[node:nid]",
              "language" : "[node:language]",
              "display_messages" : 0
            },
            "PROVIDE" : { "new_menu_item" : { "new_menu_item" : "New menu item" } }
          }
        }
      ]
    }
  }');
  $items['rules_content_create_menu_office_location_satellite'] = entity_import('rules_config', '{ "rules_content_create_menu_office_location_satellite" : {
      "LABEL" : "Content Create Menu: Office Location - Satellite",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Menu" ],
      "REQUIRES" : [ "rules", "menu_rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "location" : "location" } }
          }
        },
        { "AND" : [
            { "data_is" : { "data" : [ "node:field-location-office-type" ], "value" : "2" } },
            { "AND" : [ { "NOT menu_rules_node_has_menu_entry" : { "nid" : "[node:nid]" } } ] }
          ]
        }
      ],
      "DO" : [
        { "menu_rules_create_item" : {
            "USING" : {
              "menu_parent" : "main-menu:692",
              "menu_link_title" : "[node:title]",
              "nid" : "[node:nid]",
              "language" : "[node:language]",
              "display_messages" : 0
            },
            "PROVIDE" : { "new_menu_item" : { "new_menu_item" : "New menu item" } }
          }
        }
      ]
    }
  }');
  $items['rules_content_import_usa_jobs'] = entity_import('rules_config', '{ "rules_content_import_usa_jobs" : {
      "LABEL" : "Content Import: USA Jobs - Seasonal",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "Import Tagging" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : { "feeds_import_usa_jobs_revised" : [] },
      "IF" : [
        { "php_eval" : { "code" : "$source_type = addslashes(\\u0022[node:field_usajobs_type_specification]\\u0022);\\r\\n$source_title = addslashes(\\u0022[node:title]\\u0022);\\r\\n$pattern = \\u0027\\/.*season.*\\/i\\u0027;\\r\\nif(preg_match($pattern, $source_type) || preg_match($pattern, $source_title)){\\r\\nreturn 1;\\r\\n}\\r\\nelse{\\r\\nreturn 0;\\r\\n}" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-field-usajobs-work-type" ], "value" : "75" } }
      ]
    }
  }');
  $items['rules_content_import_usa_jobs_accounting_budget_finance'] = entity_import('rules_config', '{ "rules_content_import_usa_jobs_accounting_budget_finance" : {
      "LABEL" : "Content Import: USA Jobs - Accounting, Budget, \\u0026 Finance",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "Import Tagging" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : { "feeds_import_usa_jobs_revised" : [] },
      "IF" : [
        { "php_eval" : { "code" : "$source_type = addslashes(\\u0022[node:field_usajobs_type_specification]\\u0022);\\r\\n$source_title = addslashes(\\u0022[node:title]\\u0022);\\r\\n$patterns = array(\\u0022accounting\\u0022,\\u0022accountant\\u0022,\\u0022budget\\u0022,\\u0022financial\\u0022,\\u0022revenue agent\\u0022,\\u0022tax specialist\\u0022,\\u0022tax compliance\\u0022,\\u0022tax examiner\\u0022,\\u0022contact representative\\u0022,\\u0022finance\\u0022);\\r\\n\\r\\n$response = 0;\\r\\n\\r\\nforeach($patterns as $pattern){\\r\\nif(preg_match(\\u0022\\/\\\\b$pattern\\\\b\\/i\\u0022, $source_title)){\\r\\n$response = 1;\\r\\n}\\r\\n}\\r\\n\\r\\nreturn $response;" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-usajobs-category-ref" ], "value" : "22" } }
      ]
    }
  }');
  $items['rules_content_import_usa_jobs_administrative_and_clerical'] = entity_import('rules_config', '{ "rules_content_import_usa_jobs_administrative_and_clerical" : {
      "LABEL" : "Content Import: USA Jobs - Administrative and Clerical",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "Import Tagging" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : { "feeds_import_usa_jobs_revised" : [] },
      "IF" : [
        { "php_eval" : { "code" : "$source_type = addslashes(\\u0022[node:field_usajobs_type_specification]\\u0022);\\r\\n$source_title = addslashes(\\u0022[node:title]\\u0022);\\r\\n$patterns = array(\\u0022clerk\\u0022,\\u0022administrator\\u0022,\\u0022administrative\\u0022,\\u0022secretary\\u0022,\\u0022customer service\\u0022);\\r\\n\\r\\n$response = 0;\\r\\n\\r\\nforeach($patterns as $pattern){\\r\\nif(preg_match(\\u0022\\/\\\\b$pattern\\\\b\\/i\\u0022, $source_title)){\\r\\n$response = 1;\\r\\n}\\r\\n}\\r\\n\\r\\nreturn $response;" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-usajobs-category-ref" ], "value" : "21" } }
      ]
    }
  }');
  $items['rules_content_import_usa_jobs_business_tax_enforcement'] = entity_import('rules_config', '{ "rules_content_import_usa_jobs_business_tax_enforcement" : {
      "LABEL" : "Content Import: USA Jobs - Business \\u0026 Tax Enforcement",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "Import Tagging" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : { "feeds_import_usa_jobs_revised" : [] },
      "IF" : [
        { "php_eval" : { "code" : "$source_type = addslashes(\\u0022[node:field_usajobs_type_specification]\\u0022);\\r\\n$source_title = addslashes(\\u0022[node:title]\\u0022);\\r\\n$patterns = array(\\u0022revenue agent\\u0022,\\u0022revenue officer\\u0022,\\u0022tax enforcement\\u0022);\\r\\n\\r\\n$response = 0;\\r\\n\\r\\nforeach($patterns as $pattern){\\r\\nif(preg_match(\\u0022\\/\\\\b$pattern\\\\b\\/i\\u0022, $source_title)){\\r\\n$response = 1;\\r\\n}\\r\\n}\\r\\n\\r\\nreturn $response;" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-usajobs-category-ref" ], "value" : "23" } }
      ]
    }
  }');
  $items['rules_content_import_usa_jobs_executive_management'] = entity_import('rules_config', '{ "rules_content_import_usa_jobs_executive_management" : {
      "LABEL" : "Content Import: USA Jobs - Executive \\u0026 Management",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "Import Tagging" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : { "feeds_import_usa_jobs_revised" : [] },
      "IF" : [
        { "php_eval" : { "code" : "$source_type = addslashes(\\u0022[node:field_usajobs_type_specification]\\u0022);\\r\\n$source_title = addslashes(\\u0022[node:title]\\u0022);\\r\\n$patterns = array(\\u0022executive\\u0022,\\u0022program manager\\u0022,\\u0022project manager\\u0022,\\u0022manager\\u0022,\\u0022supervisor\\u0022);\\r\\n\\r\\n$response = 0;\\r\\n\\r\\nforeach($patterns as $pattern){\\r\\nif(preg_match(\\u0022\\/\\\\b$pattern\\\\b\\/i\\u0022, $source_title)){\\r\\n$response = 1;\\r\\n}\\r\\n}\\r\\n\\r\\nreturn $response;" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-usajobs-category-ref" ], "value" : "24" } }
      ]
    }
  }');
  $items['rules_content_import_usa_jobs_full_time'] = entity_import('rules_config', '{ "rules_content_import_usa_jobs_full_time" : {
      "LABEL" : "Content Import: USA Jobs - Full Time",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Import Tagging" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : { "feeds_import_usa_jobs_revised" : [] },
      "IF" : [
        { "php_eval" : { "code" : "$source_type = addslashes(\\u0022[node:field_usajobs_type_specification]\\u0022);\\r\\n$source_title = addslashes(\\u0022[node:title]\\u0022);\\r\\n$pattern = \\u0027\\/.*career.*\\/i\\u0027;\\r\\nif(preg_match($pattern, $source_type) || preg_match($pattern, $source_title)){\\r\\nreturn 1;\\r\\n}\\r\\nelse{\\r\\nreturn 0;\\r\\n}" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-field-usajobs-work-type" ], "value" : "77" } }
      ]
    }
  }');
  $items['rules_content_import_usa_jobs_gs_tagging'] = entity_import('rules_config', '{ "rules_content_import_usa_jobs_gs_tagging" : {
      "LABEL" : "Content Import: USA Jobs - GS Tagging",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Import Tagging" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : { "feeds_import_usa_jobs_revised" : [] },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "node:field-usajobs-grade-low" ] } }
      ],
      "DO" : [
        { "php_eval" : { "code" : "\\/* Parse out Imported Data *\\/\\r\\n$low_val=[node:field_usajobs_grade_low];\\r\\n$high_val=[node:field_usajobs_grade_high];\\r\\nif($low_val == \\u0022ES\\u0022){\\r\\n\\t$value = \\u0022ES\\u0022;\\r\\n\\t$results = array();\\r\\n\\t$taxonomyQuery = new EntityFieldQuery();\\r\\n\\t$taxonomyTerms = $taxonomyQuery-\\u003EentityCondition(\\u0027entity_type\\u0027, \\u0027taxonomy_term\\u0027)\\r\\n\\t\\t-\\u003EpropertyCondition(\\u0027vid\\u0027, 3)\\r\\n\\t\\t-\\u003EpropertyCondition(\\u0027name\\u0027,\\u0022$value\\u0022,\\u0022=\\u0022)\\r\\n\\t\\t-\\u003Eexecute();\\r\\n\\r\\n\\tforeach($taxonomyTerms[\\u0027taxonomy_term\\u0027] as $term) {\\r\\n\\t\\t$results[] = array(\\r\\n\\t\\t\\t\\u0022range\\u0022=\\u003E$value,\\r\\n\\t\\t\\t\\u0022tid\\u0022=\\u003E$term-\\u003Etid\\r\\n\\t\\t);\\r\\n\\t}\\r\\n}\\r\\nelse{\\r\\n\\t$range = range($low_val,$high_val);\\r\\n\\t$results = array();\\r\\n\\tforeach($range as $value){\\r\\n\\t\\t\\/* Gather all Taxonomy Terms for the specified Vocabulary *\\/\\r\\n\\t\\t$taxonomyQuery = new EntityFieldQuery();\\r\\n\\t\\t$taxonomyTerms = $taxonomyQuery-\\u003EentityCondition(\\u0027entity_type\\u0027, \\u0027taxonomy_term\\u0027)\\r\\n\\t\\t\\t-\\u003EpropertyCondition(\\u0027vid\\u0027, 3)\\r\\n\\t\\t\\t-\\u003EpropertyCondition(\\u0027name\\u0027,\\u0022GS $value\\u0022,\\u0022=\\u0022)\\r\\n\\t\\t\\t-\\u003Eexecute();\\r\\n\\r\\n\\t\\tforeach($taxonomyTerms[\\u0027taxonomy_term\\u0027] as $term) {\\r\\n\\t\\t\\t$results[] = array(\\r\\n\\t\\t\\t\\t\\u0022range\\u0022=\\u003E$value,\\r\\n\\t\\t\\t\\t\\u0022tid\\u0022=\\u003E$term-\\u003Etid\\r\\n\\t\\t\\t);\\r\\n\\t\\t}\\r\\n\\t}\\r\\n}\\r\\nforeach($results as $result){\\r\\n\\trules_invoke_component(\\u0022rules_gs_tagging_component\\u0022, $result[\\u0027tid\\u0027], $node);\\r\\n}" } }
      ]
    }
  }');
  $items['rules_content_import_usa_jobs_hr_eeo_public_affairs'] = entity_import('rules_config', '{ "rules_content_import_usa_jobs_hr_eeo_public_affairs" : {
      "LABEL" : "Content Import: USA Jobs - HR, EEO, Public Affairs",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "Import Tagging" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : { "feeds_import_usa_jobs_revised" : [] },
      "IF" : [
        { "php_eval" : { "code" : "$source_type = addslashes(\\u0022[node:field_usajobs_type_specification]\\u0022);\\r\\n$source_title = addslashes(\\u0022[node:title]\\u0022);\\r\\n$patterns = array(\\u0022hr\\u0022,\\u0022human resources\\u0022,\\u0022equal opportunity\\u0022,\\u0022public affairs\\u0022,\\u0022eeo\\u0022);\\r\\n\\r\\n$response = 0;\\r\\n\\r\\nforeach($patterns as $pattern){\\r\\nif(preg_match(\\u0022\\/\\\\b$pattern\\\\b\\/i\\u0022, $source_title)){\\r\\n$response = 1;\\r\\n}\\r\\n}\\r\\n\\r\\nreturn $response;" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-usajobs-category-ref" ], "value" : "25" } }
      ]
    }
  }');
  $items['rules_content_import_usa_jobs_information_technology'] = entity_import('rules_config', '{ "rules_content_import_usa_jobs_information_technology" : {
      "LABEL" : "Content Import: USA Jobs - Information Technology",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "Import Tagging" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : { "feeds_import_usa_jobs_revised" : [] },
      "IF" : [
        { "php_eval" : { "code" : "$source_type = addslashes(\\u0022[node:field_usajobs_type_specification]\\u0022);\\r\\n$source_title = addslashes(\\u0022[node:title]\\u0022);\\r\\n$patterns = array(\\u0022it\\u0022,\\u0022technology\\u0022,\\u0022data\\u0022);\\r\\n\\r\\n$response = 0;\\r\\n\\r\\nforeach($patterns as $pattern){\\r\\nif(preg_match(\\u0022\\/\\\\b$pattern\\\\b\\/i\\u0022, $source_title)){\\r\\n$response = 1;\\r\\n}\\r\\n}\\r\\n\\r\\nreturn $response;" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-usajobs-category-ref" ], "value" : "26" } }
      ]
    }
  }');
  $items['rules_content_import_usa_jobs_law_enforcement_investigation'] = entity_import('rules_config', '{ "rules_content_import_usa_jobs_law_enforcement_investigation" : {
      "LABEL" : "Content Import: USA Jobs - Law Enforcement \\u0026 Investigation",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "Import Tagging" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : { "feeds_import_usa_jobs_revised" : [] },
      "IF" : [
        { "php_eval" : { "code" : "$source_type = addslashes(\\u0022[node:field_usajobs_type_specification]\\u0022);\\r\\n$source_title = addslashes(\\u0022[node:title]\\u0022);\\r\\n$patterns = array(\\u0022special agent\\u0022,\\u0022investigative\\u0022,\\u0022investigation\\u0022,\\u0022enforcement\\u0022);\\r\\n\\r\\n$response = 0;\\r\\n\\r\\nforeach($patterns as $pattern){\\r\\nif(preg_match(\\u0022\\/\\\\b$pattern\\\\b\\/i\\u0022, $source_title)){\\r\\n$response = 1;\\r\\n}\\r\\n}\\r\\n\\r\\nreturn $response;" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-usajobs-category-ref" ], "value" : "31" } }
      ]
    }
  }');
  $items['rules_content_import_usa_jobs_office_of_chief_counsel'] = entity_import('rules_config', '{ "rules_content_import_usa_jobs_office_of_chief_counsel" : {
      "LABEL" : "Content Import: USA Jobs - Office of Chief Counsel",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "Import Tagging" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : { "feeds_import_usa_jobs_revised" : [] },
      "IF" : [
        { "php_eval" : { "code" : "$source_type = addslashes(\\u0022[node:field_usajobs_type_specification]\\u0022);\\r\\n$source_title = addslashes(\\u0022[node:title]\\u0022);\\r\\n$patterns = array(\\u0022attorney\\u0022,\\u0022counsel\\u0022);\\r\\n\\r\\n$response = 0;\\r\\n\\r\\nforeach($patterns as $pattern){\\r\\nif(preg_match(\\u0022\\/\\\\b$pattern\\\\b\\/i\\u0022, $source_title)){\\r\\n$response = 1;\\r\\n}\\r\\n}\\r\\n\\r\\nreturn $response;" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-usajobs-category-ref" ], "value" : "30" } }
      ]
    }
  }');
  $items['rules_content_import_usa_jobs_part_time'] = entity_import('rules_config', '{ "rules_content_import_usa_jobs_part_time" : {
      "LABEL" : "Content Import: USA Jobs - Part Time",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Import Tagging" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : { "feeds_import_usa_jobs_revised" : [] },
      "IF" : [
        { "php_eval" : { "code" : "$source_type = addslashes(\\u0022[node:field_usajobs_type_specification]\\u0022);\\r\\n$source_title = addslashes(\\u0022[node:title]\\u0022);\\r\\n$pattern = \\u0027\\/.*temp.*\\/i\\u0027;\\r\\n$pattern_alt = \\u0027\\/.*term.*\\/i\\u0027;\\r\\nif(preg_match($pattern, $source_type) || preg_match($pattern, $source_title) || preg_match($pattern_alt, $source_type) || preg_match($pattern_alt, $source_title)){\\r\\nreturn 1;\\r\\n}\\r\\nelse{\\r\\nreturn 0;\\r\\n}" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-field-usajobs-work-type" ], "value" : "76" } }
      ]
    }
  }');
  $items['rules_content_import_usa_jobs_research_and_analysis'] = entity_import('rules_config', '{ "rules_content_import_usa_jobs_research_and_analysis" : {
      "LABEL" : "Content Import: USA Jobs - Research and Analysis",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "Import Tagging" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : { "feeds_import_usa_jobs_revised" : [] },
      "IF" : [
        { "php_eval" : { "code" : "$source_type = addslashes(\\u0022[node:field_usajobs_type_specification]\\u0022);\\r\\n$source_title = addslashes(\\u0022[node:title]\\u0022);\\r\\n$patterns = array(\\u0022operations\\u0022,\\u0022research\\u0022,\\u0022economist\\u0022,\\u0022statistician\\u0022,\\u0022policy\\u0022,\\u0022program analyst\\u0022,\\u0022program evaluation\\u0022,\\u0022risk analyst\\u0022,\\u0022artificial intelligence\\u0022);\\r\\n\\r\\n$response = 0;\\r\\n\\r\\nforeach($patterns as $pattern){\\r\\nif(preg_match(\\u0022\\/\\\\b$pattern\\\\b\\/i\\u0022, $source_title)){\\r\\n$response = 1;\\r\\n}\\r\\n}\\r\\n\\r\\nreturn $response;" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-usajobs-category-ref" ], "value" : "27" } }
      ]
    }
  }');
  $items['rules_content_import_usa_jobs_tax_law'] = entity_import('rules_config', '{ "rules_content_import_usa_jobs_tax_law" : {
      "LABEL" : "Content Import: USA Jobs - Tax Law",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "Import Tagging" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : { "feeds_import_usa_jobs_revised" : [] },
      "IF" : [
        { "php_eval" : { "code" : "$source_type = addslashes(\\u0022[node:field_usajobs_type_specification]\\u0022);\\r\\n$source_title = addslashes(\\u0022[node:title]\\u0022);\\r\\n$patterns = array(\\u0022tax law\\u0022);\\r\\n\\r\\n$response = 0;\\r\\n\\r\\nforeach($patterns as $pattern){\\r\\nif(preg_match(\\u0022\\/\\\\b$pattern\\\\b\\/i\\u0022, $source_title)){\\r\\n$response = 1;\\r\\n}\\r\\n}\\r\\n\\r\\nreturn $response;" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-usajobs-category-ref" ], "value" : "28" } }
      ]
    }
  }');
  $items['rules_content_import_usa_jobs_tax_payer_advocate_service'] = entity_import('rules_config', '{ "rules_content_import_usa_jobs_tax_payer_advocate_service" : {
      "LABEL" : "Content Import: USA Jobs - Tax Payer Advocate Service",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "Import Tagging" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : { "feeds_import_usa_jobs_revised" : [] },
      "IF" : [
        { "php_eval" : { "code" : "$source_type = addslashes(\\u0022[node:field_usajobs_type_specification]\\u0022);\\r\\n$source_title = addslashes(\\u0022[node:title]\\u0022);\\r\\n$patterns = array(\\u0022TAS\\u0022);\\r\\n\\r\\n$response = 0;\\r\\n\\r\\nforeach($patterns as $pattern){\\r\\nif(preg_match(\\u0022\\/\\\\b$pattern\\\\b\\/i\\u0022, $source_title)){\\r\\n$response = 1;\\r\\n}\\r\\n}\\r\\n\\r\\nreturn $response;" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-usajobs-category-ref" ], "value" : "29" } }
      ]
    }
  }');
  $items['rules_content_menu_office_location'] = entity_import('rules_config', '{ "rules_content_menu_office_location" : {
      "LABEL" : "Content Create Menu: Office Location - Regional",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Menu" ],
      "REQUIRES" : [ "rules", "menu_rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "location" : "location" } }
          }
        },
        { "AND" : [
            { "data_is" : { "data" : [ "node:field-location-office-type" ], "value" : "0" } },
            { "AND" : [ { "NOT menu_rules_node_has_menu_entry" : { "nid" : "[node:nid]" } } ] }
          ]
        }
      ],
      "DO" : [
        { "menu_rules_create_item" : {
            "USING" : {
              "menu_parent" : "main-menu:691",
              "menu_link_title" : "[node:title]",
              "nid" : "[node:nid]",
              "language" : "[node:language]",
              "display_messages" : 0
            },
            "PROVIDE" : { "new_menu_item" : { "new_menu_item" : "New menu item" } }
          }
        }
      ]
    }
  }');
  $items['rules_content_redirection_showcases'] = entity_import('rules_config', '{ "rules_content_redirection_showcases" : {
      "LABEL" : "Content Redirection: Showcases",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Redirect" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_view" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "showcase" : "showcase" } }
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "\\u003Cfront\\u003E" } } ]
    }
  }');
  $items['rules_content_redirection_usa_jobs'] = entity_import('rules_config', '{ "rules_content_redirection_usa_jobs" : {
      "LABEL" : "Content Redirection: USA Jobs",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Redirect" ],
      "REQUIRES" : [ "pathrules", "rules" ],
      "ON" : { "node_view" : [] },
      "IF" : [
        { "NOT pathrules_checkpath" : { "path" : "search" } },
        { "OR" : [ { "NOT pathrules_checkpath" : { "path" : "taxonomy" } } ] },
        { "AND" : [
            { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "usajobs" : "usajobs" } } } }
          ]
        }
      ],
      "DO" : [ { "redirect" : { "url" : "[node:field-usajobs-url]" } } ]
    }
  }');
  $items['rules_content_update_menu_office_location_employment'] = entity_import('rules_config', '{ "rules_content_update_menu_office_location_employment" : {
      "LABEL" : "Content Update Menu: Office Location - Employment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Menu" ],
      "REQUIRES" : [ "rules", "menu_rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "location" : "location" } }
          }
        },
        { "AND" : [
            { "data_is" : { "data" : [ "node:field-location-office-type" ], "value" : "1" } },
            { "AND" : [ { "menu_rules_node_has_menu_entry" : { "nid" : "[node:nid]" } } ] }
          ]
        }
      ],
      "DO" : [
        { "menu_rules_update_item" : {
            "USING" : {
              "create_if_empty" : 1,
              "menu_parent" : "main-menu:939",
              "menu_link_title" : "[node:title]",
              "respect_overridden_title" : 1,
              "node" : [ "node" ],
              "language" : "[node:language]",
              "display_messages" : 0
            },
            "PROVIDE" : { "updated_menu_item" : { "updated_menu_item" : "New menu item" } }
          }
        }
      ]
    }
  }');
  $items['rules_content_update_menu_office_location_regional'] = entity_import('rules_config', '{ "rules_content_update_menu_office_location_regional" : {
      "LABEL" : "Content Update Menu: Office Location - Regional",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Menu" ],
      "REQUIRES" : [ "rules", "menu_rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "location" : "location" } }
          }
        },
        { "AND" : [
            { "data_is" : { "data" : [ "node:field-location-office-type" ], "value" : "0" } },
            { "AND" : [ { "menu_rules_node_has_menu_entry" : { "nid" : "[node:nid]" } } ] }
          ]
        }
      ],
      "DO" : [
        { "menu_rules_update_item" : {
            "USING" : {
              "create_if_empty" : 1,
              "menu_parent" : "main-menu:691",
              "menu_link_title" : "[node:title]",
              "respect_overridden_title" : 1,
              "node" : [ "node" ],
              "language" : "[node:language]",
              "display_messages" : 0
            },
            "PROVIDE" : { "updated_menu_item" : { "updated_menu_item" : "New menu item" } }
          }
        }
      ]
    }
  }');
  $items['rules_content_update_menu_office_location_satellite'] = entity_import('rules_config', '{ "rules_content_update_menu_office_location_satellite" : {
      "LABEL" : "Content Update Menu: Office Location - Satellite",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Menu" ],
      "REQUIRES" : [ "rules", "menu_rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "location" : "location" } }
          }
        },
        { "AND" : [
            { "data_is" : { "data" : [ "node:field-location-office-type" ], "value" : "2" } },
            { "AND" : [ { "menu_rules_node_has_menu_entry" : { "nid" : "[node:nid]" } } ] }
          ]
        }
      ],
      "DO" : [
        { "menu_rules_update_item" : {
            "USING" : {
              "create_if_empty" : 1,
              "menu_parent" : "main-menu:692",
              "menu_link_title" : "[node:title]",
              "respect_overridden_title" : 1,
              "node" : [ "node" ],
              "language" : "[node:language]",
              "display_messages" : 0
            },
            "PROVIDE" : { "updated_menu_item" : { "updated_menu_item" : "New menu item" } }
          }
        }
      ]
    }
  }');
  $items['rules_gs_tagging_component'] = entity_import('rules_config', '{ "rules_gs_tagging_component" : {
      "LABEL" : "GS Tagging Component",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "target_term_id" : { "label" : "Target GS Term", "type" : "integer" },
        "target_node" : { "label" : "Target Node", "type" : "node" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "target-node" ], "field" : "field_usajobs_gslevel_ref" } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "taxonomy_term", "id" : [ "target-term-id" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_target_term" : "Target GS Term" } }
          }
        },
        { "list_add" : {
            "list" : [ "target-node:field-usajobs-gslevel-ref" ],
            "item" : [ "entity-target-term" ],
            "unique" : 1
          }
        }
      ]
    }
  }');
  $items['rules_youtube_extract_id'] = entity_import('rules_config', '{ "rules_youtube_extract_id" : {
      "LABEL" : "Content Import: YouTube Extract ID",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Import Tagging" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : { "feeds_import_youtube_playlist" : [] },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "node:field-youtube-external-link" ] } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-youtube-id" ],
            "value" : "\\u003C?php\\r\\nif(isset($node-\\u003Efield_youtube_external_link[\\u0027und\\u0027][0][\\u0027url\\u0027])){\\r\\n$value = $node-\\u003Efield_youtube_external_link[\\u0027und\\u0027][0][\\u0027url\\u0027];\\r\\nparse_str(parse_url($value, PHP_URL_QUERY), $arrURL);\\r\\n$intYouTubeID = $arrURL[\\u0027v\\u0027];\\r\\nreturn $intYouTubeID; \\r\\n}\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  return $items;
}
