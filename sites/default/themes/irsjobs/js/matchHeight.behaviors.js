// Behaviors usign the matchHeight jQuery plugin

(function ($) {
  // Tablet breakpoint must match $tablet in Sass
  var breakpoint = 720; // px

  // Main Menu Match Height Behavior
  //
  // Updates the heights of each section in the main menu to match.
  Drupal.behaviors.irsjobsMainMenuMatchHeight = {
    attach: function(context, settings) {
      setTimeout(function() {
        var mainMenu = $('.block--system-main-menu', context);

        if (mainMenu.length > 0
        &&  $(window).width() > breakpoint) {
          var primaryLinks = $(mainMenu)
            .children('ul.menu').children('li');

          primaryLinks.each(function(index) {
            var dropdown = $(this).children('ul.menu');
            var sections = $(dropdown).children('li');

            // Open dropdown
            $(dropdown).css({
              'display'   : 'block',
              'visibility': 'hidden'
            });

            // Only select the first two sectons in the Resources dropdown
            if (index === 3) {
              // Select first two sections
              $(dropdown).children('li:nth-child(-n+2)').matchHeight();
            }
            else {
              sections.matchHeight();
            }

            // Revert JS added dropdown style
            $(dropdown).removeAttr('style');
          });
        }
      }, 500);
    }
  };

  // Interactive Map Buttons Match Height Behavior
  //
  // Updates the heights of each footer button in the interactive map to match.
  Drupal.behaviors.irsjobsInteractiveMapButtonsMatchHeight = {
    attach: function (context, settings) {
      var mapBlock = $('.block--views-office-locations-block', context);

      if (mapBlock.length > 0
      &&  $(window).width() > breakpoint) {
        var buttons = $(mapBlock).find('.location .field-content span');
        buttons.matchHeight();
      }
    }
  };
})(jQuery);
