# Default View (Block)

A sample structure showing how Drupal cascades view classes.

```
/* Variables */

/* Selectors and Structure */
#YOUR_VIEW_BLOCK_ID {
  .block__title{} //Block Title
  .block__content{} //Block Content (View goes inside of this)
}

.view.view-YOUR_VIEW_CLASS { // Unique View Name
  .view-header{} // View Header (if exists)
  .view-content{
    // Content and Structure for Rows and Fields
  }
  .view-footer{} // View Footer (if exists)
}
```