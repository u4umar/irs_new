<?php print render($title_prefix); ?>

<?php if ($title): ?>
  <h1 class="title" id="page-title">
    <?php print $title; ?>
  </h1>

  <?php if (!empty($page_tagline)): ?>
    <div class="page-tagline" id="page-tagline">
      <?php print $page_tagline; ?>
    </div>
  <?php endif; ?>

  <?php if ($breadcrumb): ?>
      <div class="block block--breadcrumb">
        <?php print $breadcrumb; ?>
      </div>
  <?php endif; ?>
<?php endif; ?>

<?php print render($title_suffix); ?>

<div<?php print $attributes; ?>>
  <?php print $content; ?>
</div>
