<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * IRS Careers Website theme. Additional theme function overrides can be found
 * under `theme/`, preprocess hooks under `preprocess/`, and process hooks under
 * `process/`. See their respective `README.md` for more information.
 */

function irsjobs_preprocess_views_view(&$vars){
  $view = $vars['view'];
  switch($view->name){
    /* Office Locations View */
    case "office_locations":
      if($view->current_display == "block"){
        //dsm(drupal_get_path('theme', 'irsjobs'));
        drupal_add_js('https://maps.googleapis.com/maps/api/js?key=AIzaSyB_fHRYXIC40xgv17I_y-md6hPXemU-Jy4&sensor=false',array('type' => 'external', 'scope' => 'header', 'weight' => 5));
      }
    	break;

    /* USAJobs View */
    case "usajobs":
      /* Tabular View Block */
      if($view->current_display == "block_2"
      || $view->current_display == "page_1"
      || $view->current_display == "page_2"
      || $view->current_display == "page_3"
      || $view->current_display == "page_4"){
        drupal_add_library('system', 'effects.blind');
        drupal_add_library('system', 'effects.drop');
      }
    	break;

    /* GS Schedules View */
    case "gs_schedules":
      /* Tabular View Block */
      if($view->current_display == "page"){
        drupal_add_library('system', 'effects.blind');
        drupal_add_library('system', 'effects.drop');
      }
    	break;

    /* YouTube Profiles Views */
    case "youtube":
      /* Homepage View Block */
      // if($view->current_display == "block"){
      //   drupal_add_js('https://www.youtube.com/iframe_api', 'external');
      //   drupal_add_js('(function ($) {
      //                     $(document).ready(function(){
      //                         if($(".youtube.profile.homepage.latest").length && YT != null){
      //                             $(".youtube.profile.homepage.latest").find("a[data-ytid]").each(function(){
      //                                 var objPlayer;
      //                                 var strYTID = $(this).attr("data-ytid");

      //                                 if(!strYTID){
      //                                     return;
      //                                 }

      //                                 $(this).before($("<div>").attr("id","ytplayer"));
      //                                 $(this).remove();

      //                                 objPlayer = new YT.Player("ytplayer", {
      //                                     height: "270",
      //                                     width: "480",
      //                                     videoId: strYTID,
      //                                     autoplay: 0
      //                                 });
      //                             });
      //                         }
      //                     })
      //                     })(jQuery);',array('type'=>'inline','scope'=>'footer','weight'=>0));
      // }
    	break;

    default:
    	break;
  }
}

function irsjobs_block_view_alter(&$data,$block){
  //dsm($block);
  switch ($block->bid) {
    /* References the In This Section block */
    case "98":
      break;

    /* References the Exposed Filters on All Careers Pages */
    case "views--exp-usajobs-page_1":
      $data['subject'] = t('Filter By');
      break;

    case "views--exp-usajobs-page_2":
      $data['subject'] = t('Filter By');
      break;

    case "views--exp-usajobs-page_3":
      $data['subject'] = t('Filter By');
      break;

    case "views--exp-usajobs-page_4":
      $data['subject'] = t('Filter By');
      break;

    case "views--exp-gs_schedules-page":
      $data['subject'] = t('Filter By');
      break;

    default:
      //dsm($block);
      break;
  }
}

function irsjobs_form_alter(&$form, &$form_state, $form_id){
  switch ($form_id) {
    case 'webform_client_form_404':
      /* Add Placeholders attributes */
      foreach ($form['submitted'] as $key => $field) {
        if(isset($field['#webform_component'])){
          $form['submitted'][$key]['#attributes']['placeholder'] = $field['#title'];
        }
      }

      /* Toggle Conditional Elements */

      /* Query Available USA Job Nodes */
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'node')
            ->entityCondition('bundle', 'usajobs')
            ->propertyCondition('status', 1)
            ->addMetaData('account', user_load(1)); // Run the query as user 1.
      $result = $query->execute();

      /* Convert data into key value pairing for form aggregation */
      if(isset($result)){
        $job_options = array("unspecified"=>"-- Select an Open Job ID --");
        if (isset($result['node'])) {
          $open_job_nids = array_keys($result['node']);
          $open_jobs     = entity_load('node', $open_job_nids);

          foreach ($open_jobs as $key => $value) {
            if (strlen($open_jobs[$key]->title) > 32){
              $open_jobs[$key]->title = wordwrap($open_jobs[$key]->title, 32);
              $open_jobs[$key]->title = substr($open_jobs[$key]->title, 0, strpos($open_jobs[$key]->title, "\n"));
            }

            $job_options[$open_jobs[$key]->field_usajobs_no['und'][0]['value']] = ucwords(strtolower($open_jobs[$key]->title.' ...('.$open_jobs[$key]->field_usajobs_no['und'][0]['value'].')'));
          }

          asort($job_options);
        }
      }
      else{
        $job_options = array("no-available"=>"-- No Jobs are Currently Available --");
      }

      /* Query Available Location Nodes */
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'node')
            ->entityCondition('bundle', 'location')
            ->propertyCondition('status', 1)
            ->addMetaData('account', user_load(1)); // Run the query as user 1.
      $result = $query->execute();

      /* Convert data into key value pairing for form aggregation */
      if(isset($result)){
        $location_options = array("unspecified"=>"-- Select an Employment Office Location --");

        if (isset($result['node'])) {
          $location_nids = array_keys($result['node']);
          $locations     = entity_load('node', $location_nids);

          foreach ($locations as $key => $value) {
            if (strlen($locations[$key]->title) > 32){
              $locations[$key]->title = wordwrap($locations[$key]->title, 32);
              $locations[$key]->title = substr($locations[$key]->title, 0, strpos($locations[$key]->title, "\n"));
            }

            $location_options[$locations[$key]->nid] = ucwords(strtolower($locations[$key]->title));
          }

          asort($location_options);
        }
      }
      else{
        $location_options = array("no-available"=>"-- No Locations are Currently Available --");
      }

      /* Configure Category Select Options */

      /* Job Related Questions */
      $form['submitted']['purpose']['#attributes']['name'] = "purpose";
      $form['submitted']['open_job_ids']['#options'] = $job_options;
      $form['submitted']['open_job_ids']['#states'] = array(
        'visible' => array(
          ':input[name="purpose"]' => array('value' => "1"),
        )
      );
      $form['submitted']['job_locations']['#options'] = $location_options;
      $form['submitted']['job_locations']['#states']  = array(
        'visible' => array(
          ':input[name="purpose"]' => array('value' => "1"), //Job Descriptions
        )
      );

      break;

    default:
      break;
  }


  
  // Login Form
  if($form_id == 'user_login_block' || $form_id == 'user_login'){
    $form['interface-header'] = array(
    '#type' => 'container',
      '#attributes' => array(
        'class' => array(
          'form-item',
          'form-type-markupfield',
          'form-item-form-header',
        ),
      ),
      '#weight' => -99,
    );
    $form['interface-header']['interface-header'] = array(
      '#markup' => '<h3>User Log-in:</h3>',
    );
    if(isset($form['links'])){
      unset($form['links']);  
    }

    $items = array();
    $items[] = l(t('Request a New Password'), 'user/password', array('attributes' => array('title' => t('Request new password via e-mail.'))));


    /* Theme Item List Output */
    $form['links'] = array(
      '#markup' => theme('item_list', array(
        'items' => $items, 
        'attributes'=>array(
          'class'=>'login-links',
        ),
      ))
    );

    /* Add Custom Social Media Links to Default Links */
    $socialItems = array();
    /* Facebook Signin */
    if(module_exists('fboauth')){ 
      $linkFB = fboauth_action_link_properties('connect');
      $socialItems[] = array(
        'data'=>l(t('Connect with Facebook'), $linkFB['href'], array('query' => $linkFB['query'])),
        'id' => 'facebook-login',
      );
    }

    /* Twitter Signin */
    if(module_exists('twitter_signin')){
      if(isset($form['twitter_signin'])){
        unset($form['twitter_signin']); 
      }
      $socialItems[] = array(
        'data'=>l(t('Connect with Twitter'),'twitter/redirect'),
        'id'=>'twitter-login',
      );
    }

    /* Theme Item List Output */
    $form['actions']['submit']['#suffix'] = theme('item_list', array(
      'items' => $socialItems, 
      'attributes'=>array(
        'class'=>'social-links',
      ),
    ));
  }
}

/**
 * Implements hook_page_alter(&$page)
 */
function irsjobs_page_alter(&$page) {

  // Force Theme Regions to Render Regardless of Content
  $force_render_regions = array('branding', 'header_first');
  foreach ($force_render_regions as $target_region) {
    if (!isset($page[$target_region])) :
      foreach (system_region_list($GLOBALS['theme'], REGIONS_ALL) as $region => $name) {
        if (in_array($region, array($target_region))) {
          $page[$target_region] = array(
          '#region' => $target_region,
          '#weight' => '-10',
          '#theme_wrappers' => array('region'),
          );
        }
      }
    endif;
  }
}

/**
 * Implements theme_menu_local_tasks_alter()
 */
function irsjobs_menu_local_tasks_alter(&$data,$router_item,$root_path){
  /* User Login Creation and Recovery */
  if(!user_is_logged_in() && ($root_path=='user/register' || $root_path=='user' || $root_path='user/password')){
    unset($data['tabs']);
  }
}

/**
 * Overrides theme_menu_local_task()
 */
function irsjobs_menu_local_task($variables){
  $link      = $variables['element']['#link'];
  $link_text = $link['title'];
  $link_id   = strtolower($link['title']);

  if (!empty($variables['element']['#active'])) {
    // Add text to indicate active tab for non-visual users.
    $active = '<span class="element-invisible">' . t('(active tab)') . '</span>';

    // If the link does not contain HTML already, check_plain() it now.
    // After we set 'html'=TRUE the link will not be sanitized by l().
    if (empty($link['localized_options']['html'])) {
      $link['title'] = check_plain($link['title']);
    }
    $link['localized_options']['html'] = TRUE;
    $link_text = t('!local-task-title!active', array('!local-task-title' => $link['title'], '!active' => $active));
  }

  return '<li id="tab-'.$link_id.'" ' . (!empty($variables['element']['#active']) ? ' class="active"' : '') . '>' . l($link_text, $link['href'], $link['localized_options']) . "</li>\n";
}

/**
 * Overrides theme_menu_local_tasks()
 */
function irsjobs_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix']  = '<h2 class="">' . t('Admin Tools') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs primary">';
    $variables['primary']['#suffix']  = '</ul>';
    $output .= drupal_render($variables['primary']);
  }

  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix']  = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs secondary">';
    $variables['secondary']['#suffix']  = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }

  return $output;
}
