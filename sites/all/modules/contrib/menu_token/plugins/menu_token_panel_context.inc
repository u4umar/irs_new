<?php

class menu_token_panel_context extends menu_token_handler {
  function form_options($options) {
    // Nothing to do here.
  }

  function form_submit($form, &$form_state) {
    // Nothing to do here.
  }

  function form_validate($form, &$form_state) {
    // Nothing to do here.
  }

  function form_alter(&$form, &$form_state) {
    // Nothing to do here.
  }

  function object_load($options) {
    $original_map = arg();
    $parts = array_slice($original_map, 0, MENU_MAX_PARTS);
    $ancestors = menu_get_ancestors($parts);
    $router_item = db_query_range('SELECT * FROM {menu_router} WHERE path IN (:ancestors) ORDER BY fit DESC', 0, 1, array(':ancestors' => $ancestors))->fetchAssoc();
    // only run for page manager callbacks
    if($router_item['page_callback'] == 'page_manager_page_execute') {
      $entity_type = $options['_type'];
      $router_item = menu_get_item();
      $subtask_id = $router_item['page_arguments'][0];

      // This code was shamelessly taken from page_manager_page_execute()
      $page = page_manager_page_load($subtask_id);
      $task = page_manager_get_task($page->task);
      $subtask = page_manager_get_task_subtask($task, $subtask_id);

      // Turn the contexts into a properly keyed array.
      $contexts = array();
      $args = array();
      foreach ($router_item['page_arguments'] as $count => $arg) {
        if (is_object($arg) && get_class($arg) == 'ctools_context') {
          $contexts[$arg->id] = $arg;
          $args[] = $arg->original_argument;
        }
        else {
          if ($count) {
            $args[] = $arg;
          }
        }
      }

      $count = 0;
      $names = page_manager_page_get_named_arguments($page->path);
      $bits = explode('/', $page->path);
      if ($page->arguments) {
        foreach ($page->arguments as $name => $argument) {
          // Optional arguments must be converted to contexts too, if they exist.
          if ($bits[$names[$name]][0] == '!') {
            ctools_include('context');
            $argument['keyword'] = $name;
            if (isset($args[$count])) {
              // Hack: use a special argument config variable to learn if we need
              // to use menu_tail style behavior:
              if (empty($argument['settings']['use_tail'])) {
                $value = $args[$count];
              }
              else {
                $value = implode('/', array_slice($args, $count));
              }

              $context = ctools_context_get_context_from_argument($argument, $value);
            }
            else {
              // make sure there is a placeholder context for missing optional contexts.
              $context = ctools_context_get_context_from_argument($argument, NULL, TRUE);
              // Force the title to blank for replacements
            }
            if ($context) {
              $contexts[$context->id] = $context;
            }
          }
          $count++;
        }
      }

      foreach ($contexts as $key => $context) {
        list($key, $thing, $entity) = $context->type;
        if ($entity == $entity_type) {
          return $context->data;
        }
      }
    }
  }
}
