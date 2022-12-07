<?php

/**
 * @file
 * Default theme implementation to display a region.
 *
 * Available variables:
 * - $content: The content for this region, typically blocks.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - region: The current template type, i.e., "theming hook".
 *   - region-[name]: The name of the region with underscores replaced with
 *     dashes. For example, the page_top region would have a region-page-top
 *     class.
 * - $region: The name of the region variable as defined in the theme's .info
 *   file.
 *
 * Additional variables from preprocess_page.tpl.php :
 * - $front_page:
 * - $logo:
 * - $site-name:
 * - $site-slogan:
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $is_admin: Flags true when the current user is an administrator.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 *
 * @see template_preprocess()
 * @see template_preprocess_region()
 * @see template_process()
 */
?>

<div <?php print $attributes; ?>>
  <?php if ($logo): ?>
    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-logo">
      <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
    </a>
  <?php endif; ?>

  <?php if ($site_name || $site_slogan): ?>
    <?php if ($site_name): ?>
      <h1 class="site-name">
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
          <span><?php print $site_name; ?></span>
        </a>
      </h1>
    <?php endif; ?>

    <?php if ($site_slogan): ?>
      <h2 class="site-slogan"><?php print $site_slogan; ?></h2>
    <?php endif; ?>
  <?php endif; ?>

  <?php if($content): ?>
    <?php print $content; ?>
  <?php endif; ?>
</div>
