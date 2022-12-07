<?php
/**
 * @file
 * irs_students.features.blockexport_settings.inc
 */

/**
 * Implements hook_default_blockexport_settings().
 */
function irs_students_default_blockexport_settings() {
  $export = array();
  $export['block'][] = array(
  'bid' => 1,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 2,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -1,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 3,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 10,
  'region' => 'dashboard_main',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 4,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 5,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 6,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 10,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 7,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 8,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 9,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 10,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 10,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 11,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'dashboard_sidebar',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 12,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'seven',
  'status' => 1,
  'weight' => -10,
  'region' => 'dashboard_sidebar',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 14,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 15,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 16,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 17,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 18,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 19,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Main Menu',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 20,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 21,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 23,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 24,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 25,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 26,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 27,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 28,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 29,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Main Menu',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 30,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'dashboard_inactive',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 32,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -13,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 33,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -9,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 34,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'irsjobs',
  'status' => 1,
  'weight' => -33,
  'region' => 'navigation',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 35,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 36,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 37,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'irsjobs',
  'status' => 1,
  'weight' => -20,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 38,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'irsjobs',
  'status' => 1,
  'weight' => -32,
  'region' => 'navigation',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Main Menu',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 39,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -17,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 40,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 41,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -14,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 42,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 43,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 44,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 45,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 46,
  'module' => 'sharethis',
  'delta' => 'sharethis_block',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -12,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 47,
  'module' => 'sharethis',
  'delta' => 'sharethis_block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 48,
  'module' => 'context_ui',
  'delta' => 'editor',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -30,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 49,
  'module' => 'context_ui',
  'delta' => 'editor',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 50,
  'module' => 'calendar',
  'delta' => 'calendar_legend',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -32,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 51,
  'module' => 'calendar',
  'delta' => 'calendar_legend',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 52,
  'module' => 'menu',
  'delta' => 'menu-global-navigation',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 53,
  'module' => 'menu',
  'delta' => 'menu-social-media-navigation',
  'theme' => 'irsjobs',
  'status' => 1,
  'weight' => -32,
  'region' => 'footer_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Connect with IRS',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 54,
  'module' => 'menu',
  'delta' => 'menu-global-navigation',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 55,
  'module' => 'menu',
  'delta' => 'menu-social-media-navigation',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Connect with IRS',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 56,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 57,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 66,
  'module' => 'views',
  'delta' => 'basic_pages-block_1',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 67,
  'module' => 'views',
  'delta' => 'basic_pages-block_1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 78,
  'module' => 'megamenu',
  'delta' => 'main-menu',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 79,
  'module' => 'megamenu',
  'delta' => 'main-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 80,
  'module' => 'views',
  'delta' => 'showcases-block_1',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 81,
  'module' => 'views',
  'delta' => 'showcases-block_1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 82,
  'module' => 'menu',
  'delta' => 'menu-footer',
  'theme' => 'irsjobs',
  'status' => 1,
  'weight' => 0,
  'region' => 'footer_second',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 83,
  'module' => 'menu',
  'delta' => 'menu-footer',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 84,
  'module' => 'context_ui',
  'delta' => 'devel',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -29,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 85,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -27,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 86,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 87,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -28,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 88,
  'module' => 'context_ui',
  'delta' => 'devel',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 89,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 90,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 91,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 92,
  'module' => 'views',
  'delta' => 'usajobs-block_1',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 12,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 93,
  'module' => 'views',
  'delta' => 'usajobs-block_2',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 13,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 94,
  'module' => 'views',
  'delta' => 'usajobs-block_1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 95,
  'module' => 'views',
  'delta' => 'usajobs-block_2',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 96,
  'module' => 'views',
  'delta' => 'youtube-block',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 97,
  'module' => 'views',
  'delta' => 'youtube-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 98,
  'module' => 'menu_block',
  'delta' => 1,
  'theme' => 'irsjobs',
  'status' => 1,
  'weight' => -32,
  'region' => 'preface_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
about
careers
careers/*
about/locations/employment-office/*
about/locations/satellite-office/*
about/locations/regional-office/*
taxonomy/term/*',
  'title' => 'In this Section',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 99,
  'module' => 'menu_block',
  'delta' => 1,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
about
careers
careers/*
about/locations/employment-office/*
about/locations/satellite-office/*
about/locations/regional-office/*
taxonomy/term/*',
  'title' => 'In this Section',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 100,
  'module' => 'views',
  'delta' => '-exp-usajobs-page_1',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -24,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'careers',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 101,
  'module' => 'views',
  'delta' => '-exp-usajobs-page_1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'careers',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 102,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'irsjobs',
  'status' => 1,
  'weight' => -33,
  'region' => 'preface_second',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
about
careers
frequently-asked-questions
user
user/*
system/*
application-process
application-process/*
taxonomy/term/*
contact-irs
contact-irs/*
privacy
resources/understanding-gs
resources/downloads
node/8359
node/8360
node/8361
find-job*',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 103,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
about
careers
frequently-asked-questions
user
user/*
system/*
application-process
application-process/*
taxonomy/term/*
contact-irs
contact-irs/*
privacy
resources/understanding-gs
resources/downloads
node/8359
node/8360
node/8361
find-job*',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 104,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'irsjobs',
  'status' => 1,
  'weight' => -32,
  'region' => 'preface_second',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
about
careers
frequently-asked-questions
user
system/*
user/*
application-process/*
application-process
taxonomy/term/*
contact-irs
contact-irs/*
privacy
resources/understanding-gs
resources/downloads
resources/downloads
node/8359
node/8360
node/8361
find-job*',
  'title' => 'How to Apply',
  'cache' => -1,
  'css_class' => 'irs-block-howtoapply',
);
  $export['block'][] = array(
  'bid' => 105,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
about
careers
frequently-asked-questions
user
system/*
user/*
application-process/*
application-process
taxonomy/term/*
contact-irs
contact-irs/*
privacy
resources/understanding-gs
resources/downloads
resources/downloads
node/8359
node/8360
node/8361
find-job*',
  'title' => 'How to Apply',
  'cache' => -1,
  'css_class' => 'irs-block-howtoapply',
);
  $export['block'][] = array(
  'bid' => 106,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -33,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
careers
user
user/*',
  'title' => 'View Open IRS Careers',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 107,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
careers
user
user/*',
  'title' => 'View Open IRS Careers',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 112,
  'module' => 'menu_block',
  'delta' => 2,
  'theme' => 'irsjobs',
  'status' => 1,
  'weight' => -33,
  'region' => 'user_second',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Global Navigation',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 113,
  'module' => 'menu_block',
  'delta' => 2,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Global Navigation',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 114,
  'module' => 'webform',
  'delta' => 'client-block-404',
  'theme' => 'irsjobs',
  'status' => 1,
  'weight' => 17,
  'region' => 'postscript_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Get in Touch with the IRS',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 115,
  'module' => 'webform',
  'delta' => 'client-block-404',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Get in Touch with the IRS',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 120,
  'module' => 'irs_calculators',
  'delta' => 'fit_check',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Identify Your Career Path',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 121,
  'module' => 'irs_calculators',
  'delta' => 'experience',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 122,
  'module' => 'irs_calculators',
  'delta' => 'fit_check',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Identify Your Career Path',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 123,
  'module' => 'irs_calculators',
  'delta' => 'experience',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 124,
  'module' => 'views',
  'delta' => 'youtube-block_playlist',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 125,
  'module' => 'views',
  'delta' => 'youtube-block_playlist',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 126,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -31,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Demo Map Block',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 127,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Demo Map Block',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 128,
  'module' => 'views',
  'delta' => 'featured_subpage_imagery-block',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 129,
  'module' => 'views',
  'delta' => 'featured_subpage_imagery-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 130,
  'module' => 'views',
  'delta' => 'd3918c4071fb5292ccf24b8c2d2ec065',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 131,
  'module' => 'views',
  'delta' => 'd3918c4071fb5292ccf24b8c2d2ec065',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 132,
  'module' => 'views',
  'delta' => 'office_locations-block',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 133,
  'module' => 'views',
  'delta' => 'office_locations-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 134,
  'module' => 'views',
  'delta' => 'office_locations-block_1',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 135,
  'module' => 'views',
  'delta' => 'office_locations-block_1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 140,
  'module' => 'menu_block',
  'delta' => 3,
  'theme' => 'irsjobs',
  'status' => 1,
  'weight' => -33,
  'region' => 'preface_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'about/locations/regional-office/*
about/locations/employment-office/*
about/locations/satellite-office/*',
  'title' => 'Where We\'re Located',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 141,
  'module' => 'menu_block',
  'delta' => 3,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'about/locations/regional-office/*
about/locations/employment-office/*
about/locations/satellite-office/*',
  'title' => 'Where We\'re Located',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 142,
  'module' => 'views',
  'delta' => 'office_locations-block_2',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 143,
  'module' => 'views',
  'delta' => 'office_locations-block_3',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 144,
  'module' => 'views',
  'delta' => 'office_locations-block_2',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 145,
  'module' => 'views',
  'delta' => 'office_locations-block_3',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 146,
  'module' => 'views',
  'delta' => 'office_locations-block_4',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 9,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 147,
  'module' => 'views',
  'delta' => 'office_locations-block_4',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 148,
  'module' => 'views',
  'delta' => '61ab2ff73e40fb5ed58ca8696f797b83',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 149,
  'module' => 'views',
  'delta' => '61ab2ff73e40fb5ed58ca8696f797b83',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 150,
  'module' => 'views',
  'delta' => 'basic_pages-block_2',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Search',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 151,
  'module' => 'views',
  'delta' => 'basic_pages-block_2',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 152,
  'module' => 'views',
  'delta' => 'basic_pages-block_3',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 153,
  'module' => 'views',
  'delta' => 'basic_pages-block_3',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 154,
  'module' => 'views',
  'delta' => 'basic_pages-block_4',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 155,
  'module' => 'views',
  'delta' => 'basic_pages-block_4',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 156,
  'module' => 'views',
  'delta' => 'basic_pages-block_5',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 157,
  'module' => 'views',
  'delta' => 'basic_pages-block_5',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 158,
  'module' => 'views',
  'delta' => '-exp-usajobs-page_2',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 159,
  'module' => 'views',
  'delta' => '-exp-usajobs-page_2',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 160,
  'module' => 'views',
  'delta' => '-exp-usajobs-page_3',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 161,
  'module' => 'views',
  'delta' => '-exp-usajobs-page_3',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 162,
  'module' => 'views',
  'delta' => 'office_locations-block_5',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 163,
  'module' => 'views',
  'delta' => 'office_locations-block_5',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 164,
  'module' => 'views',
  'delta' => '-exp-usajobs-page_4',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 165,
  'module' => 'views',
  'delta' => '-exp-usajobs-page_4',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 166,
  'module' => 'views',
  'delta' => '-exp-gs_schedules-page',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -25,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 167,
  'module' => 'views',
  'delta' => '-exp-gs_schedules-page',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 168,
  'module' => 'views',
  'delta' => 'basic_pages-block_6',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => -1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 169,
  'module' => 'views',
  'delta' => 'basic_pages-block_6',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 171,
  'module' => 'workbench',
  'delta' => 'block',
  'theme' => 'irsjobs',
  'status' => 1,
  'weight' => -33,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 176,
  'module' => 'workbench',
  'delta' => 'block',
  'theme' => 'seven',
  'status' => 1,
  'weight' => -99,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 181,
  'module' => 'views',
  'delta' => 'workbench_edited-block_1',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 186,
  'module' => 'views',
  'delta' => 'workbench_current_user-block_1',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 14,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 191,
  'module' => 'views',
  'delta' => '9cf22433e0efbd8b206c8e4c2edb177c',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 196,
  'module' => 'views',
  'delta' => 'workbench_edited-block_1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 201,
  'module' => 'views',
  'delta' => 'workbench_current_user-block_1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 206,
  'module' => 'views',
  'delta' => '9cf22433e0efbd8b206c8e4c2edb177c',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 207,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'stark',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
about
careers
frequently-asked-questions
user
user/*
system/*
application-process
application-process/*
taxonomy/term/*
contact-irs
contact-irs/*
privacy
resources/understanding-gs
resources/downloads
node/8359
node/8360
node/8361
find-job*',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 208,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'stark',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
about
careers
frequently-asked-questions
user
system/*
user/*
application-process/*
application-process
taxonomy/term/*
contact-irs
contact-irs/*
privacy
resources/understanding-gs
resources/downloads
resources/downloads
node/8359
node/8360
node/8361
find-job*',
  'title' => 'How to Apply',
  'cache' => -1,
  'css_class' => 'irs-block-howtoapply',
);
  $export['block'][] = array(
  'bid' => 209,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'stark',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
careers
user
user/*',
  'title' => 'View Open IRS Careers',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 210,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Demo Map Block',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 211,
  'module' => 'calendar',
  'delta' => 'calendar_legend',
  'theme' => 'stark',
  'status' => 0,
  'weight' => -11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 213,
  'module' => 'context_ui',
  'delta' => 'devel',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 214,
  'module' => 'context_ui',
  'delta' => 'editor',
  'theme' => 'stark',
  'status' => 0,
  'weight' => -10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 215,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 216,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 217,
  'module' => 'irs_calculators',
  'delta' => 'experience',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 218,
  'module' => 'irs_calculators',
  'delta' => 'fit_check',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Identify Your Career Path',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 219,
  'module' => 'megamenu',
  'delta' => 'main-menu',
  'theme' => 'stark',
  'status' => 1,
  'weight' => -11,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 220,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 221,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 222,
  'module' => 'menu',
  'delta' => 'menu-footer',
  'theme' => 'stark',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 223,
  'module' => 'menu',
  'delta' => 'menu-global-navigation',
  'theme' => 'stark',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 224,
  'module' => 'menu',
  'delta' => 'menu-social-media-navigation',
  'theme' => 'stark',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Connect with IRS',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 225,
  'module' => 'menu_block',
  'delta' => 1,
  'theme' => 'stark',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
about
careers
careers/*
about/locations/employment-office/*
about/locations/satellite-office/*
about/locations/regional-office/*
taxonomy/term/*',
  'title' => 'In this Section',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 226,
  'module' => 'menu_block',
  'delta' => 2,
  'theme' => 'stark',
  'status' => 1,
  'weight' => -20,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Global Navigation',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 227,
  'module' => 'menu_block',
  'delta' => 3,
  'theme' => 'stark',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'about/locations/regional-office/*
about/locations/employment-office/*
about/locations/satellite-office/*',
  'title' => 'Where We\'re Located',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 228,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'stark',
  'status' => 0,
  'weight' => -4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 229,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'stark',
  'status' => 0,
  'weight' => -1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 230,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'stark',
  'status' => 1,
  'weight' => -12,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 231,
  'module' => 'sharethis',
  'delta' => 'sharethis_block',
  'theme' => 'stark',
  'status' => 0,
  'weight' => -3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 232,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'stark',
  'status' => 0,
  'weight' => -2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 233,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 234,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'stark',
  'status' => 1,
  'weight' => -20,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 235,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'stark',
  'status' => 0,
  'weight' => -9,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Main Menu',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 236,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'stark',
  'status' => 0,
  'weight' => -7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 237,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 238,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'stark',
  'status' => 0,
  'weight' => -6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 239,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 240,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'stark',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 241,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 242,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 243,
  'module' => 'views',
  'delta' => '-exp-gs_schedules-page',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 244,
  'module' => 'views',
  'delta' => '-exp-usajobs-page_1',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'careers',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 245,
  'module' => 'views',
  'delta' => '-exp-usajobs-page_2',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 246,
  'module' => 'views',
  'delta' => '-exp-usajobs-page_3',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 247,
  'module' => 'views',
  'delta' => '-exp-usajobs-page_4',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 248,
  'module' => 'views',
  'delta' => '61ab2ff73e40fb5ed58ca8696f797b83',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 249,
  'module' => 'views',
  'delta' => '9cf22433e0efbd8b206c8e4c2edb177c',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 250,
  'module' => 'views',
  'delta' => 'basic_pages-block_1',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 251,
  'module' => 'views',
  'delta' => 'basic_pages-block_2',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Search',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 252,
  'module' => 'views',
  'delta' => 'basic_pages-block_3',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 253,
  'module' => 'views',
  'delta' => 'basic_pages-block_4',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 254,
  'module' => 'views',
  'delta' => 'basic_pages-block_5',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 255,
  'module' => 'views',
  'delta' => 'basic_pages-block_6',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 256,
  'module' => 'views',
  'delta' => 'd3918c4071fb5292ccf24b8c2d2ec065',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 257,
  'module' => 'views',
  'delta' => 'featured_subpage_imagery-block',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 258,
  'module' => 'views',
  'delta' => 'office_locations-block',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 259,
  'module' => 'views',
  'delta' => 'office_locations-block_1',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 260,
  'module' => 'views',
  'delta' => 'office_locations-block_2',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 261,
  'module' => 'views',
  'delta' => 'office_locations-block_3',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 262,
  'module' => 'views',
  'delta' => 'office_locations-block_4',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 263,
  'module' => 'views',
  'delta' => 'office_locations-block_5',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 264,
  'module' => 'views',
  'delta' => 'showcases-block_1',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 265,
  'module' => 'views',
  'delta' => 'usajobs-block_1',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 266,
  'module' => 'views',
  'delta' => 'usajobs-block_2',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 267,
  'module' => 'views',
  'delta' => 'workbench_current_user-block_1',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 268,
  'module' => 'views',
  'delta' => 'workbench_edited-block_1',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 269,
  'module' => 'views',
  'delta' => 'youtube-block',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 270,
  'module' => 'views',
  'delta' => 'youtube-block_playlist',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 271,
  'module' => 'webform',
  'delta' => 'client-block-404',
  'theme' => 'stark',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Get in Touch with the IRS',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 272,
  'module' => 'workbench',
  'delta' => 'block',
  'theme' => 'stark',
  'status' => 1,
  'weight' => -99,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 273,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
about
careers
frequently-asked-questions
user
user/*
system/*
application-process
application-process/*
taxonomy/term/*
contact-irs
contact-irs/*
privacy
resources/understanding-gs
resources/downloads
node/8359
node/8360
node/8361
find-job*',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 274,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
about
careers
frequently-asked-questions
user
system/*
user/*
application-process/*
application-process
taxonomy/term/*
contact-irs
contact-irs/*
privacy
resources/understanding-gs
resources/downloads
resources/downloads
node/8359
node/8360
node/8361
find-job*',
  'title' => 'How to Apply',
  'cache' => -1,
  'css_class' => 'irs-block-howtoapply',
);
  $export['block'][] = array(
  'bid' => 275,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
careers
user
user/*',
  'title' => 'View Open IRS Careers',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 276,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 277,
  'module' => 'webform',
  'delta' => 'client-block-404',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Get in Touch with the IRS',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 278,
  'module' => 'calendar',
  'delta' => 'calendar_legend',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 279,
  'module' => 'context_ui',
  'delta' => 'editor',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 280,
  'module' => 'context_ui',
  'delta' => 'devel',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 281,
  'module' => 'irs_calculators',
  'delta' => 'fit_check',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 282,
  'module' => 'irs_calculators',
  'delta' => 'experience',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 283,
  'module' => 'megamenu',
  'delta' => 'main-menu',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 284,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 285,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 286,
  'module' => 'menu',
  'delta' => 'menu-footer',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 287,
  'module' => 'menu',
  'delta' => 'menu-global-navigation',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 288,
  'module' => 'menu',
  'delta' => 'menu-social-media-navigation',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 289,
  'module' => 'menu_block',
  'delta' => 1,
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 290,
  'module' => 'menu_block',
  'delta' => 2,
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 291,
  'module' => 'menu_block',
  'delta' => 3,
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 292,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 293,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 294,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 295,
  'module' => 'sharethis',
  'delta' => 'sharethis_block',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 296,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 297,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'omega',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 298,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 299,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'omega',
  'status' => 1,
  'weight' => 5,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 300,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 301,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 302,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 303,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Main Menu',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 304,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 305,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 306,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 307,
  'module' => 'workbench',
  'delta' => 'block',
  'theme' => 'omega',
  'status' => 1,
  'weight' => -99,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 308,
  'module' => 'views',
  'delta' => 'basic_pages-block_1',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 309,
  'module' => 'views',
  'delta' => 'basic_pages-block_2',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 310,
  'module' => 'views',
  'delta' => 'basic_pages-block_3',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 311,
  'module' => 'views',
  'delta' => 'basic_pages-block_4',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 312,
  'module' => 'views',
  'delta' => 'basic_pages-block_5',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 313,
  'module' => 'views',
  'delta' => 'basic_pages-block_6',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 314,
  'module' => 'views',
  'delta' => 'showcases-block_1',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 315,
  'module' => 'views',
  'delta' => 'usajobs-block_1',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 316,
  'module' => 'views',
  'delta' => 'usajobs-block_2',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 317,
  'module' => 'views',
  'delta' => '-exp-usajobs-page_1',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 318,
  'module' => 'views',
  'delta' => '-exp-usajobs-page_2',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 319,
  'module' => 'views',
  'delta' => '-exp-usajobs-page_3',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 320,
  'module' => 'views',
  'delta' => '-exp-usajobs-page_4',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 321,
  'module' => 'views',
  'delta' => 'youtube-block',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 322,
  'module' => 'views',
  'delta' => 'youtube-block_playlist',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 323,
  'module' => 'views',
  'delta' => '-exp-gs_schedules-page',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 324,
  'module' => 'views',
  'delta' => 'featured_subpage_imagery-block',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 325,
  'module' => 'views',
  'delta' => 'office_locations-block',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 326,
  'module' => 'views',
  'delta' => 'office_locations-block_1',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 327,
  'module' => 'views',
  'delta' => 'office_locations-block_2',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 328,
  'module' => 'views',
  'delta' => 'office_locations-block_3',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 329,
  'module' => 'views',
  'delta' => 'office_locations-block_4',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 330,
  'module' => 'views',
  'delta' => 'office_locations-block_5',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 331,
  'module' => 'views',
  'delta' => 'workbench_current_user-block_1',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 332,
  'module' => 'views',
  'delta' => 'workbench_edited-block_1',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 333,
  'module' => 'views',
  'delta' => 'd3918c4071fb5292ccf24b8c2d2ec065',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 334,
  'module' => 'views',
  'delta' => '61ab2ff73e40fb5ed58ca8696f797b83',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 335,
  'module' => 'views',
  'delta' => '9cf22433e0efbd8b206c8e4c2edb177c',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 336,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 337,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'omega',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 338,
  'module' => 'views',
  'delta' => 'downloads-block',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 339,
  'module' => 'views',
  'delta' => 'downloads-block_1',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 340,
  'module' => 'views',
  'delta' => 'salary_tables-block',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 341,
  'module' => 'views',
  'delta' => 'salary_tables-block_1',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 342,
  'module' => 'views',
  'delta' => 'downloads-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 343,
  'module' => 'views',
  'delta' => 'downloads-block_1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 344,
  'module' => 'views',
  'delta' => 'salary_tables-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 345,
  'module' => 'views',
  'delta' => 'salary_tables-block_1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 346,
  'module' => 'views',
  'delta' => 'downloads-block',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 347,
  'module' => 'views',
  'delta' => 'downloads-block_1',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 348,
  'module' => 'views',
  'delta' => 'salary_tables-block',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 349,
  'module' => 'views',
  'delta' => 'salary_tables-block_1',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 350,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => 'irs-block irs-student-callout',
);
  $export['block'][] = array(
  'bid' => 351,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => 'irs-block irs-student-callout',
);
  $export['block'][] = array(
  'bid' => 352,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => 'irs-block irs-student-callout',
);
  $export['block'][] = array(
  'bid' => 353,
  'module' => 'views',
  'delta' => 'e1ca96b2b22a99a9c1a0d8540e7caeb5',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => 'irs-block irs-featured-items',
);
  $export['block'][] = array(
  'bid' => 354,
  'module' => 'views',
  'delta' => 'e1ca96b2b22a99a9c1a0d8540e7caeb5',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => 'irs-block irs-featured-items',
);
  $export['block'][] = array(
  'bid' => 355,
  'module' => 'views',
  'delta' => 'e1ca96b2b22a99a9c1a0d8540e7caeb5',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => 'irs-block irs-featured-items',
);
  $export['block'][] = array(
  'bid' => 356,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => 'irs-block irs-block-careerchange',
);
  $export['block'][] = array(
  'bid' => 357,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => 'irs-block irs-block-careerchange',
);
  $export['block'][] = array(
  'bid' => 358,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'css_class' => 'irs-block irs-block-careerchange',
);
  $export['block'][] = array(
  'bid' => 359,
  'module' => 'mefibs',
  'delta' => 'ba54f7be6c6924d39d78efeb9b4c9356',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'View Open IRS Careers',
  'cache' => -1,
  'css_class' => 'irs-block',
);
  $export['block'][] = array(
  'bid' => 360,
  'module' => 'mefibs',
  'delta' => 'ba54f7be6c6924d39d78efeb9b4c9356',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'View Open IRS Careers',
  'cache' => -1,
  'css_class' => 'irs-block',
);
  $export['block'][] = array(
  'bid' => 361,
  'module' => 'mefibs',
  'delta' => 'ba54f7be6c6924d39d78efeb9b4c9356',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'View Open IRS Careers',
  'cache' => -1,
  'css_class' => 'irs-block',
);
  $export['block'][] = array(
  'bid' => 362,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Life at the IRS',
  'cache' => -1,
  'css_class' => 'irs-block-life-at-irs irs-block',
);
  $export['block'][] = array(
  'bid' => 363,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Life at the IRS',
  'cache' => -1,
  'css_class' => 'irs-block-life-at-irs irs-block',
);
  $export['block'][] = array(
  'bid' => 364,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Life at the IRS',
  'cache' => -1,
  'css_class' => 'irs-block-life-at-irs irs-block',
);
  $export['block'][] = array(
  'bid' => 365,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Internship Program',
  'cache' => -1,
  'css_class' => 'irs-block irs-block-internship',
);
  $export['block'][] = array(
  'bid' => 366,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Internship Program',
  'cache' => -1,
  'css_class' => 'irs-block irs-block-internship',
);
  $export['block'][] = array(
  'bid' => 367,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Internship Program',
  'cache' => -1,
  'css_class' => 'irs-block irs-block-internship',
);
  $export['block'][] = array(
  'bid' => 368,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Pathways Program',
  'cache' => -1,
  'css_class' => 'irs-block irs-block-pathways',
);
  $export['block'][] = array(
  'bid' => 369,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Pathways Program',
  'cache' => -1,
  'css_class' => 'irs-block irs-block-pathways',
);
  $export['block'][] = array(
  'bid' => 370,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Pathways Program',
  'cache' => -1,
  'css_class' => 'irs-block irs-block-pathways',
);
  $export['block'][] = array(
  'bid' => 371,
  'module' => 'views',
  'delta' => '9d68cb17fc95ef34656213d34b115e85',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 372,
  'module' => 'views',
  'delta' => '9d68cb17fc95ef34656213d34b115e85',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 373,
  'module' => 'views',
  'delta' => '9d68cb17fc95ef34656213d34b115e85',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => '',
);
  $export['block'][] = array(
  'bid' => 374,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => 'clear-block',
);
  $export['block'][] = array(
  'bid' => 375,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => 'clear-block',
);
  $export['block'][] = array(
  'bid' => 376,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'css_class' => 'clear-block',
);
  $export['block'][] = array(
  'bid' => 377,
  'module' => 'views',
  'delta' => 'success_stories-block',
  'theme' => 'irsjobs',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Success Stories',
  'cache' => -1,
  'css_class' => 'irs-block',
);
  $export['block'][] = array(
  'bid' => 378,
  'module' => 'views',
  'delta' => 'success_stories-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Success Stories',
  'cache' => -1,
  'css_class' => 'irs-block',
);
  $export['block'][] = array(
  'bid' => 379,
  'module' => 'views',
  'delta' => 'success_stories-block',
  'theme' => 'stark',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Success Stories',
  'cache' => -1,
  'css_class' => 'irs-block',
);
  $export['block_custom'][] = array(
  'bid' => 1,
  'body' => '<p><a href="/resources/understanding-gs"><img alt="" src="/sites/default/files/wysiwyg-uploads/images/GS-Schedule.png" style="width: 81px; height: 80px;" />Learn the GS Schedule</a></p>
',
  'info' => 'Action Item : GS Schedules',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 2,
  'body' => '<p><a href="/application-process"><img alt="" src="/sites/default/files/wysiwyg-uploads/images/How-to-apply.png" style="width: 81px; height: 80px;" />How To Apply</a></p>
',
  'info' => 'Action Item : How to Apply',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 3,
  'body' => '<p><a href="/careers">View Open IRS Careers</a></p>
',
  'info' => 'Action Item : View Open Jobs',
  'format' => 'filtered_html',
);
  $export['block_custom'][] = array(
  'bid' => 4,
  'body' => '<script type="text/javascript" src="https://maps.googleapis.com/maps/api/js?key=AIzaSyB_fHRYXIC40xgv17I_y-md6hPXemU-Jy4&sensor=false"></script>
<div class="google-map" id="regional-office-map" style="height:550px;width:960px; margin:0 auto;background-color:#f6f6f4;">&nbsp;</div>

<div class="google-map-data">
<ul>
	<li class="marker"><!-- <div class="imagery">
        <img class="thumbnail" src="/crs/core/img/regional-offices/Image-NewEngland.jpg" />
      </div> -->
	<div class="metadata">
	<h3><a href="">New England Regional Office</a></h3>

	<h4>CT, MA, ME, NH, RI, VT</h4>
	<span class="addr">408 Atlantic Ave.,<br />
	Suite 222<br />
	Boston, MA 02110</span>

	<div class="contact-data">T: (617) 424-5715<br />
	F: (617) 424-5727<br />
	<a href="mailto:askcrs@usdoj.gov">askcrs@usdoj.gov</a></div>
	</div>

	<div class="clear">&nbsp;</div>
	</li>
	<li class="marker"><!-- <div class="imagery">
        <img class="thumbnail" src="/crs/core/img/regional-offices/Image-NorthEastern.jpg" />
      </div> -->
	<div class="metadata">
	<h3><a href="/crs/Who-We-Are/Regional-and-Field-Offices/Northeastern-Region.html">Northeastern Regional Office</a></h3>

	<h4>NJ, NY, PR, VI</h4>
	<span class="addr">26 Federal Plaza,<br />
	Suite 36-118<br />
	New York, NY 10278</span>

	<div class="contact-data">T: (212) 264-0700<br />
	F: (212) 264-2143<br />
	<a href="mailto:askcrs@usdoj.gov">askcrs@usdoj.gov</a></div>
	</div>

	<div class="clear">&nbsp;</div>
	</li>
	<li class="marker"><!-- <div class="imagery">
        <img class="thumbnail" src="/crs/core/img/regional-offices/Image-MidAtlantic.jpg" />
      </div> -->
	<div class="metadata">
	<h3><a href="/crs/Who-We-Are/Regional-and-Field-Offices/Mid-Atlantic-Region.html">Mid-Atlantic Regional Office</a></h3>

	<h4>DC, DE, MD, PA, VA, WV</h4>
	<span class="addr">200 2nd &amp; Chestnut Street,<br />
	Suite 208<br />
	Philadelphia, PA 19106</span>

	<div class="contact-data">T: (215) 597-2344<br />
	F: (215) 597-9148<br />
	<a href="mailto:askcrs@usdoj.gov">askcrs@usdoj.gov</a></div>
	</div>

	<div class="clear">&nbsp;</div>
	</li>
	<li class="marker"><!-- <div class="imagery">
        <img class="thumbnail" src="/crs/core/img/regional-offices/Image-SouthEastern.jpg" />
      </div> -->
	<div class="metadata">
	<h3><a href="/crs/Who-We-Are/Regional-and-Field-Offices/Southeastern-Region.html">Southeastern Regional Office</a></h3>

	<h4>AL, FL, GA, KY, MS, NC, SC, TN</h4>
	<span class="addr">61 Forsyth Street, SW,<br />
	Suite 7B65<br />
	Atlanta, GA 30303</span>

	<div class="contact-data">T: (404) 331-6883<br />
	F: (404) 331-4471<br />
	<a href="mailto:askcrs@usdoj.gov">askcrs@usdoj.gov</a></div>
	</div>

	<div class="clear">&nbsp;</div>
	</li>
	<li class="marker"><!-- <div class="imagery">
        <img class="thumbnail" src="/crs/core/img/regional-offices/Image-SouthEastern.jpg" />
      </div> -->
	<div class="metadata">
	<h3><a href="/crs/Who-We-Are/Regional-and-Field-Offices/Southeastern-Region.html">Southeastern Field Office</a></h3>
	<span class="addr">51 SW First Avenue,<br />
	Suite 624<br />
	Miami, FL 33130</span>

	<div class="contact-data">T: (305) 536-5206<br />
	F: (305) 536-6778<br />
	<a href="mailto:askcrs@usdoj.gov">askcrs@usdoj.gov</a></div>
	</div>

	<div class="clear">&nbsp;</div>
	</li>
	<li class="marker"><!-- <div class="imagery">
        <img class="thumbnail" src="/crs/core/img/regional-offices/Image-MidWestern.jpg" />
      </div> -->
	<div class="metadata">
	<h3><a href="/crs/Who-We-Are/Regional-and-Field-Offices/Midwestern-Region.html">Midwestern Regional Office</a></h3>

	<h4>IL, IN, MI, MN, OH, WI</h4>
	<span class="addr">230 South Dearborn Street,<br />
	Room 2130<br />
	Chicago, Illinois 60604</span>

	<div class="contact-data">T: (312) 353-4391<br />
	F: (312) 353-4390<br />
	<a href="mailto:askcrs@usdoj.gov">askcrs@usdoj.gov</a></div>
	</div>

	<div class="clear">&nbsp;</div>
	</li>
	<li class="marker"><!-- <div class="imagery">
        <img class="thumbnail" src="/crs/core/img/regional-offices/Image-MidWestern.jpg" />
      </div> -->
	<div class="metadata">
	<h3><a href="/crs/Who-We-Are/Regional-and-Field-Offices/Midwestern-Region.html">Midwestern Field Office</a></h3>
	<span class="addr">211 West Fort Street,<br />
	Suite 1404<br />
	Detroit, MI 48226</span>

	<div class="contact-data">T: (313) 226-4010<br />
	F: (313) 226-2568<br />
	<a href="mailto:askcrs@usdoj.gov">askcrs@usdoj.gov</a></div>
	</div>

	<div class="clear">&nbsp;</div>
	</li>
	<li class="marker"><!-- <div class="imagery">
        <img class="thumbnail" src="/crs/core/img/regional-offices/Image-SouthWestern.jpg" />
      </div> -->
	<div class="metadata">
	<h3><a href="/crs/Who-We-Are/Regional-and-Field-Offices/Southwestern-Region.html">Southwestern Regional Office</a></h3>

	<h4>AR, LA, NM, OK, TX</h4>
	<span class="addr">Hardwood Center Building,<br />
	1999 Bryan Street,<br />
	Ste. 2050,<br />
	Dallas, TX 75201</span>

	<div class="contact-data">T: (214) 655-8175<br />
	F: (214) 655-8184<br />
	<a href="mailto:askcrs@usdoj.gov">askcrs@usdoj.gov</a></div>
	</div>

	<div class="clear">&nbsp;</div>
	</li>
	<li class="marker"><!-- <div class="imagery">
        <img class="thumbnail" src="/crs/core/img/regional-offices/Image-SouthWestern.jpg" />
      </div> -->
	<div class="metadata">
	<h3><a href="/crs/Who-We-Are/Regional-and-Field-Offices/Southwestern-Region.html">Southwestern Field Office</a></h3>
	<span class="addr">515 Rusk Avenue,<br />
	Suite 12605,<br />
	Houston, TX 77002</span>

	<div class="contact-data">T: (713) 718-4861<br />
	F: (713) 718-4862<br />
	<a href="mailto:askcrs@usdoj.gov">askcrs@usdoj.gov</a></div>
	</div>

	<div class="clear">&nbsp;</div>
	</li>
	<li class="marker"><!-- <div class="imagery">
        <img class="thumbnail" src="/crs/core/img/regional-offices/Image-Central.jpg" />
      </div> -->
	<div class="metadata">
	<h3><a href="/crs/Who-We-Are/Regional-and-Field-Offices/Central-Region.html">Central Regional Office</a></h3>

	<h4>IA, KS, MO, NE</h4>
	<span class="addr">601 E. 12th Street,<br />
	Suite 0802<br />
	Kansas City, MO 64106</span>

	<div class="contact-data">T: (816) 426-7434<br />
	F: (816) 426-7441<br />
	<a href="mailto:askcrs@usdoj.gov">askcrs@usdoj.gov</a></div>
	</div>

	<div class="clear">&nbsp;</div>
	</li>
	<li class="marker"><!-- <div class="imagery">
        <img class="thumbnail" src="/crs/core/img/regional-offices/Image-RockyMountain.jpg" />
      </div> -->
	<div class="metadata">
	<h3><a href="/crs/Who-We-Are/Regional-and-Field-Offices/Rocky-Mountain-Region.html">Rocky Mountain Regional Office</a></h3>

	<h4>CO, MT, ND, SD, UT, WY</h4>
	<span class="addr">1244 Speer Blvd.,<br />
	Suite 650<br />
	Denver, CO 80204-3584</span>

	<div class="contact-data">T: (303) 844-2973<br />
	F: (303) 844-2907<br />
	<a href="mailto:askcrs@usdoj.gov">askcrs@usdoj.gov</a></div>
	</div>

	<div class="clear">&nbsp;</div>
	</li>
	<li class="marker"><!-- <div class="imagery">
        <img class="thumbnail" src="/crs/core/img/regional-offices/Image-Western.jpg" />
      </div> -->
	<div class="metadata">
	<h3><a href="/crs/Who-We-Are/Regional-and-Field-Offices/Western-Region.html">Western Regional Office</a></h3>

	<h4>AZ, CA, GU, HI, NV</h4>
	<span class="addr">888 South Figueroa Street,<br />
	Suite 2010<br />
	Los Angeles, CA 90017</span>

	<div class="contact-data">T: (213) 894-2941<br />
	F: (213) 894-2880<br />
	<a href="mailto:askcrs@usdoj.gov">askcrs@usdoj.gov</a></div>
	</div>

	<div class="clear">&nbsp;</div>
	</li>
	<li class="marker"><!-- <div class="imagery">
        <img class="thumbnail" src="/crs/core/img/regional-offices/Image-Western.jpg" />
      </div> -->
	<div class="metadata">
	<h3><a href="/crs/Who-We-Are/Regional-and-Field-Offices/Western-Region.html">Western Field Office</a></h3>
	<span class="addr">90 Seventh Street,<br />
	Suite 3-300<br />
	San Francisco, CA 94103</span>

	<div class="contact-data">T: (415) 744-6565<br />
	F: (415) 744-6590<br />
	<a href="mailto:askcrs@usdoj.gov">askcrs@usdoj.gov</a></div>
	</div>

	<div class="clear">&nbsp;</div>
	</li>
	<li class="marker"><!-- <div class="imagery">
        <img class="thumbnail" src="/crs/core/img/regional-offices/Image-NorthWestern.jpg" />
      </div> -->
	<div class="metadata">
	<h3><a href="/crs/Who-We-Are/Regional-and-Field-Offices/Northwestern-Region.html">Northwestern Regional Office</a></h3>

	<h4>AK, ID, OR, WA</h4>
	<span class="addr">915 Second Avenue,<br />
	Suite 1808<br />
	Seattle, WA 98174</span>

	<div class="contact-data">T: (206) 220-6700<br />
	F: (206) 220-6706<br />
	<a href="mailto:askcrs@usdoj.gov">askcrs@usdoj.gov</a></div>
	</div>

	<div class="clear">&nbsp;</div>
	</li>
</ul>
</div>
',
  'info' => 'Demo Map Block',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 5,
  'body' => '<h2>We support <a href="/find-job/students">students</a>, <a href="/resources/equal-opportunity/veteran-hiring">veterans</a>, and <a href="/resources/understanding-gs">individuals with disabilities</a>.</h2>

<p>The IRS supports diversity through equal opportunity employment of students, veterans, and people&nbsp;with disabilities. We are proud of our dynamically diverse workforce. We know the individual&nbsp;strengths and abilities of our unique employees make us a stronger and more unique organziation.</p>
',
  'info' => 'Section Callout',
  'format' => 'filtered_html',
);
  $export['block_custom'][] = array(
  'bid' => 6,
  'body' => '<h2>Make a Career Change for the Better</h2>

<p>We think it’s important to be part of a proactive organization that lets you apply your talents to real-world challenges,&nbsp;provides you with the training you need to excel — and does it all in service to the country you love. That’s exactly what you\'ll find here at the Internal Revenue Service.</p>

<p>As part of the IRS workforce, your eﬀorts will help make America stronger as we continue to support the nation’s most vital&nbsp;programs, from Homeland Security to America’s defense, to Social Security — as well as programs and projects that are a bit&nbsp;closer to home, like parklands and forests, roads and bridges, libraries, museums, schools, and more.</p>
',
  'info' => 'Homepage - Make a Career Change',
  'format' => 'filtered_html',
);
  $export['block_custom'][] = array(
  'bid' => 7,
  'body' => '<div class="irs-inner-block">
<p>Find out what’s important to us and what&nbsp;inspires us to do amazing things together.</p>
<p><a href="/life-at-irs">LEARN MORE &gt;</a></p>
</div>',
  'info' => 'Life at the IRS Block',
  'format' => 'php_code',
);
  $export['block_custom'][] = array(
  'bid' => 8,
  'body' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam maximus, arcu in lobortis venenatis, justo massa suscipit ipsum, eu dignissim quam orci vitae dolor.&nbsp;</p>

<p><a class="button small-button" href="#">Learn More</a></p>
',
  'info' => 'Internship Program Block',
  'format' => 'filtered_html',
);
  $export['block_custom'][] = array(
  'bid' => 9,
  'body' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam maximus, arcu in lobortis venenatis, justo massa suscipit ipsum, eu dignissim quam orci vitae dolor. Nam odio nulla, facilisis sit amet tempor at, condimentum ac erat</p>

<p><a class="button small-button" href="#">Learn More</a>&nbsp;</p>
',
  'info' => 'Pathways Program Block',
  'format' => 'filtered_html',
);
  $export['block_custom'][] = array(
  'bid' => 10,
  'body' => '<div style="clear:both;"></div>',
  'info' => 'Clear Block',
  'format' => 'php_code',
);
return $export;
}
