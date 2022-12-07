<!DOCTYPE html>
<html lang="<?php print $language->language; ?>"
      dir="<?php print $language->dir; ?>">
  <head>
    <?php print $head; ?>

    <meta http-equiv="X-UA-Compatible" content="IE=Edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no" />
    <title><?php print $head_title; ?></title>

    <?php print $styles; ?>
    <?php print $scripts; ?>
    <!--[if lt IE 9]>
      <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
    <![endif]-->
  </head>

  <body <?php print $attributes;?>>
    <div id="skip-link">
      <a href="#main-content" class="element-invisible element-focusable">
        <?php print t('Skip to main content'); ?>
      </a>
    </div>

    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>
  </body>
</html>
