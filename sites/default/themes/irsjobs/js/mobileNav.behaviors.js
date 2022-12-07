(function ($) {
  // Drupal Theme Function for HTML Output
  Drupal.theme.prototype.irsjobsMainMenu =
    function(menuItems, searchForm, logoLink, homeText) {
      var output = '';
      output += '<div class="block block--mobile-navigation">';

      output += '<header class="block--mobile-navigation__header">';
      output += '<button type="button" class="js-menu-trigger sliding-panel-button">';
      output += '<i class="fa fa-bars"></i><span>Click for Mobile Navigation</span>';
      output += '</button>';

      output += '<div class="mobile-branding">';
      output += '<a href="/" title="' + homeText + '" rel="home" class="site-logo">';
      output += '<img src="' + logoLink + '" alt="' + homeText + '" />'
      output += '</a>';
      output += '</div>';

      output += '<button type="button" class="js-search-trigger search-form-button">';
      output += '<i class="fa fa-search"></i><span>Click for Search</span>';
      output += '</button>';
      output += '</header>';

      output += '<div class="mobile-search-form-container">' + searchForm + '</div>';

      output += '<nav class="menu menu--mobile-navigation js-menu sliding-panel-content">';
      output += '<button type="button" class="sliding-panel-close">';
      output += '<i class="fa fa-times fa-2"></i>';
      output += '<span>Close Mobile Navigation</span>';
      output += '</button>';
      output += menuItems;
      output += '</nav>';

      output += '<div class="js-menu-screen sliding-panel-fade-screen"></div>';

      output += '</div>';

      return $(output);
    };

  // Drupal Javascript Behavior
  Drupal.behaviors.irsjobsMobileNavigation = {
    attach: function(context, settings) {
      // Prepend to the DOM and apply responsive behavior
      $('body', context).once('irsjobsMobileNavigation', function() {
        // Retrieve Dynamic Data
        var menuItems = Drupal.theme('irsjobsMainMenu',
                                      settings.irsjobsMobileNavigation,
                                      settings.irsjobsMobileSearch,
                                      settings.irsjobsMobileBranding,
                                      settings.irsjobsMobileHomeText);

        // Set all tabindex for all links so they aren't navigated by tab
        menuItems.find('.menu--mobile-navigation a').attr("tabindex", "-1");

        // Add placeholder attribute to form text input
        menuItems.find('.form-text').attr('placeholder', 'Search');
        menuItems.prependTo(this);

        // Add contact form link to Primary Sliding Panel
        var primaryList = $('.sliding-panel-content > ul.menu');
        primaryList.children().last().removeClass('last');

        var contactFormItem = $(document.createElement('li'));
        contactFormItem.html('<a class="menu-link--contact" href="/contact-irs" tabindex="-1">Get In Touch</a>');
        contactFormItem.addClass('leaf last');
        contactFormItem.appendTo(primaryList);


        // Add event listeners

        // Primary Sliding Panel (1st Level Links)
        $('.sliding-panel-button, .sliding-panel-fade-screen, .sliding-panel-close')
          .bind('click touchstart', function(event) {
            event.preventDefault();
            $('.sliding-panel-content, .sliding-panel-fade-screen')
              .toggleClass('is-visible');
          });

        // Subsidary Sliding Panels (nth Level Links)
        $('.sliding-panel-content > ul.menu li.expanded').each(function() {
          var elementParentLink = $(this).find('> a');
          var elementChildMenu  = $(this).find('> ul.menu');

          var elementChildMenuParentLink =
            $(elementParentLink).clone();
          var elementBacktoParent =
            $('<li><a href="#" class="back-nav" tabindex="-1">Back</a></li>');

          // Add Menu Parent Link to Child Links for Landing Page Access
          $(elementChildMenuParentLink).prependTo($(elementChildMenu)).wrap('<li>');

          // Add Back Navigation to Child Links
          $(elementBacktoParent).appendTo($(elementChildMenu));

          // Enable Flyout Subnavigation Toggle
          $(elementParentLink).bind('click touchstart', function(event) {
            event.preventDefault();
            $(this).parent('li')
              .toggleClass('is-visible');
          });

          $(elementBacktoParent).bind('click touchstart', function(event) {
            event.preventDefault();
            $(this).parent('ul').parent('li')
              .toggleClass('is-visible');
          });
        });

        // Search Form
        $('.search-form-button')
          .bind('click', function(event) {
            event.preventDefault();
            $('.mobile-search-form-container')
              .toggleClass('is-visible');
          });

        // Mobibe Contact Form
        contactFormItem.bind('click', function(event) {
          event.preventDefault();
          $('#block-webform-client-block-404.mobile').css({
            'transform': 'translateX(0)'
          });
        });
      });
    }
  };
})(jQuery);
