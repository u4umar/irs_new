<article <?php print $attributes; ?>>
  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>

  <?php if (!$page && $title): ?>
    <header>
      <h2 <?php print $title_attributes; ?>>
        <a href="<?php print $node_url ?>" title="<?php print $title ?>">
          <?php print $title ?>
        </a>
      </h2>
    </header>
  <?php endif; ?>

  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <footer class="submitted">
      <?php print $date; ?> -- <?php print $name; ?>
    </footer>
  <?php endif; ?>

  <div class="column-left">
    <?php
    // Embed the Static Google Map View into the left column
    $args = (isset($node)) ? $node->nid : null;
    print views_embed_view('office_locations','block_1', $args);
    ?>
  </div>

  <div class="column-right">
    <h2<?php print $title_attributes; ?>><?php print $title ?></h2>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>
</article>
