<?php if ($page['highlighted']) : ?>
  <?php print render($page['highlighted']); ?>
<?php endif; ?>

<?php if ($page['help']): ?>
  <?php print render($page['help']); ?>
<?php endif; ?>

<div class="region region--content">
  <a id="main-content"></a>

  <?php if ($messages): ?>
    <div class="block--messages">
      <?php print $messages; ?>
    </div>
  <?php endif; ?>

  <?php if ($rendered_tabs = render($tabs)): ?>
    <div class="block--admin-tools">
      <?php print $rendered_tabs; ?>
    </div>
  <?php endif; ?>

  <?php if ($action_links): ?>
    <ul class="action-links">
      <?php print render($action_links); ?>
    </ul>
  <?php endif; ?>

  <?php print render($page['content']); ?>

  <?php if ($feed_icons): ?>
    <div class="feed-icon">
      <?php print $feed_icons; ?>
    </div>
  <?php endif; ?>
</div>
