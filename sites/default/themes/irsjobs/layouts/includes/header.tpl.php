<header id="header" role="banner" class="section section--header">
  <div class="zone-wrapper zone-wrapper--user">
    <div class="zone zone--user">
      <?php print render($page['user_first']); ?>
      <?php print render($page['user_second']); ?>
    </div>
  </div>

  <div class="zone-wrapper zone-wrapper--branding">
    <div class="zone zone--branding">
      <?php print render($page['branding']); ?>
      <?php print render($page['navigation']); ?>
    </div>
  </div>

  <?php
    /* Allow the header image to be populated by a content type view
       instead of CSS */
    $node = menu_get_object();
    if(!drupal_is_front_page()) {
      $args = (isset($node)) ? $node->nid : null;
      print views_embed_view('featured_subpage_imagery','block', $args);
    }
  ?>

  <div class="zone-wrapper zone-wrapper--header">
    <div class="zone zone--header">
      <?php print render($page['header_first']); ?>
      <?php print render($page['header_second']); ?>
    </div>
  </div>
</header>
