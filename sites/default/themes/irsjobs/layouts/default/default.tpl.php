<?php

/**
 * @file
 * Default theme implementation to display the Frontpage Layout
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $secondary_menu_heading: The title of the menu used by the secondary links.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['branding']: Items for the branding region.
 * - $page['header']: Items for the header region.
 * - $page['navigation']: Items for the navigation region.
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see omega_preprocess_page()
 */

  $theme_path = drupal_get_path('theme','irsjobs');
?>
<div <?php print $attributes; ?>>
  <?php require_once "$theme_path/layouts/includes/header.tpl.php"; ?>

  <main id="main" role="main" class="section section--main">
    <?php if ($page['preface_first']
          ||  $page['preface_second']
          ||  $page['preface_third']) : ?>
      <div class="zone-wrapper zone-wrapper--preface">
        <div class="zone zone--preface">
          <?php print render($page['preface_first']); ?>
          <?php print render($page['preface_second']); ?>
          <?php print render($page['preface_third']); ?>
        </div>
      </div>
    <?php endif; ?>

    <div class="zone-wrapper zone-wrapper--content">
      <div class="zone zone--content">
        <?php print render($page['sidebar_first']); ?>
        <?php require_once "$theme_path/layouts/includes/content.tpl.php"; ?>
        <?php print render($page['sidebar_second']); ?>
      </div>
    </div>

    <?php if ($page['postscript_first']
          ||  $page['postscript_second']
          ||  $page['postscript_third']
          ||  $page['postscript_fourth']) : ?>
      <div class="zone-wrapper zone-wrapper--postscript">
        <div class="zone zone--postscript">
          <?php print render($page['postscript_first']); ?>
          <?php print render($page['postscript_second']); ?>
          <?php print render($page['postscript_third']); ?>
          <?php print render($page['postscript_fourth']); ?>
        </div>
      </div>
    <?php endif; ?>
  </main>

  <?php require_once "$theme_path/layouts/includes/footer.tpl.php"; ?>
</div>
