(function ($) {
  // Contact Form Behavior
  //
  // Moves the Webform: Contact the IRS block from the Postscript First region
  // to outside the page container, add the form close button, and handles the
  // slideout animation using jQuery.animate().
  Drupal.behaviors.irsjobsContactForm = {
    attach: function(context, settings) {
      var form = $('#block-webform-client-block-404');

      if (form.length > 0) {
        // Tablet breakpoint must match $tablet in Sass
        var breakpoint = 720; // px

        var page = $('.l-page');
        var close =
          $('<div>').addClass('close-slideout')
          .css({
            "position": "absolute",
            "top":      "2em",
            "right":    "2em",
            "display":  "block"
          }).append($('<img>').attr('src', '/sites/default/themes/irsjobs/images/icons/close.png'));

        // Mobile devices
        if ($(window).width() <= breakpoint) {
          var mobileForm = form.addClass('slideout mobile').append($(close));

          // Bind close action
          close.bind("click", function() {
            mobileForm.css({
              'transform': 'translateX(-100%)'
            });
          });

          // Add form to page
          page.after(mobileForm);
        }

        // Laptops and Desktops
        else {
          // Bind close action
          close.bind("click", function() {
            page.animate({
              left: parseInt(page.css('left'),10) == 0 ? - form.outerWidth() : 0
            });
          });

          // Add form to page
          page.css({
            'position': 'relative',
            'left':     0,
            'z-index':  1
          }).after(form.addClass('slideout').css({
            'position':   'fixed',
            'z-index':    0,
            'right':      0,
            'top':        ($('#toolbar').length) ? parseInt($('#toolbar').outerHeight()) : 0,
            'width':      '425px',
            'padding':    '2em',
            'height':     '100%',
            'box-shadow': 'inset 5px 0 10px rgba(0,0,0,.5)'
          }).append($(close)));

          $('a#contact-form').bind('click', function(event) {
            event.preventDefault();
            page.animate({
              left: parseInt(page.css('left'),10) == 0 ? - form.outerWidth() : 0
            });
          });

          $(form).submit(function() {
            disableInputs(form);
            setTimeout(function() { enableInputs(form) }, 7000);
          });

          var disableInputs = function(form) {
            $(form).find(":input").each(function() {
              var formElement = $(this);
              if(formElement.attr('type') === 'submit') {
                if(!formElement.attr('disabled')) {
                  formElement.attr("disabled", true).addClass("temporarily-disabled");
                }
              } else {
                if(!formElement.attr('readonly')) {
                  formElement.attr("readonly", true).addClass("temporarily-readonly");
                }
              }
            });
          };
          var enableInputs = function(form) {
            $(form).find(".temporarily-disabled").removeAttr("disabled").removeClass("temporarily-disabled");
            $(form).find(".temporarily-readonly").removeAttr("readonly").removeClass("temporarily-readonly");
          };
        }
      }
    }
  };



})(jQuery);

/**
 * JavaScript pertaining to career path fit check calculator on the front page
 * is handled in infobox_packed.js.
 */

(function ($) {
  // Tablet breakpoint must match $tablet in Sass
  var breakpoint = 720; // px

  // Creates GoogleMap object using XML data to draw the state boundaries,
  // and pins the regional office locations using an pin image asset.
  function GoogleMap() {
    /* Properties */
    var obj     = this;
    obj.mapID   = null;
    obj.dataSet = null;

    /* Methods */
    obj.generateMap = function() {
      var marker = null;
      var markerCoords = [];
      var markerActive = null;
      var infoWindowActive = null;
      var mapTypeStyle = "irsjobsoffices";
      var mapOptions = {
        backgroundColor:        "#f6f6f4",
        center:                 new google.maps.LatLng(38,-93.4),
        disableDoubleClickZoom: true,
        draggable:              false,
        zoom:                   4,
        minZoom:                4,
        maxZoom:                4,
        disableDefaultUI:       true,
        styles:                 [],
        mapTypeControlOptions: {
          mapTypeIds:[google.maps.MapTypeId.ROADMAP,mapTypeStyle]
        },
        mapTypeId:              mapTypeStyle
      };

      var polyFill;
      var map = new google.maps.Map(document.getElementById(obj.mapID), mapOptions);

      //Geocode Data provided in the fields with the class of addr
      $(obj.dataSet).find('[data-geoaddress]').each(function(i) {
        var strLocationTitle = $(this).text();
        var strDestination   = $(this).parent('a').attr('href');
        var locationType     = $(this).attr('data-officetype');

        var address = $(this).attr('data-geoaddress').replace(/(<([^>]+)>)/ig,"");
        address     = encodeURIComponent(address);

        var geocode = "http://maps.googleapis.com/maps/api/geocode/json?address="+address+"&sensor=false";
        var intRequestCount = 0;

        $.ajax({
          url:        geocode,
          async:      false,
          beforeSend: function() {
            setTimeout(function() {},2500);
          },
          success: function(response) {
            if (response.status == "OK") {
              responseLat = response.results[0].geometry.location.lat;
              responseLng = response.results[0].geometry.location.lng;
              var imgIcon = "/sites/default/themes/irsjobs/images/icons/map-default.png";
              var objBoxStyle = {
                width: "200px",
                height:"30px",
                color:"#fff",
                "font-family":"'museo-slab',Georgia, serif",
                "text-align":"center",
                "line-height":"30px",
                background: "#4b4f56",
                "border-radius":"5px"
              };

              if (locationType.length && locationType.match(/\bregional\b/gi)) {
                imgIcon = "/sites/default/themes/irsjobs/images/icons/map-regional.png";
                objBoxStyle = {
                  width: "200px",
                  height:"30px",
                  color:"#fff",
                  "font-family":"'museo-slab',Georgia, serif",
                  "text-align":"center",
                  "line-height":"30px",
                  background: "#96ce4d",
                  "border-radius":"5px"
                }
              }

              marker = new google.maps.Marker({
                map: map,
                draggable:false,
                animation: google.maps.Animation.DROP,
                position: new google.maps.LatLng(responseLat,responseLng),
                icon:imgIcon,
                objTitle:strLocationTitle,
                objStyle:objBoxStyle,
                objDestination:strDestination/*
                objDOM:eleTarget*/
              });
            }

            markerCoords.push(marker);
          }
        });
      });

      // Set Marker Interactions
      for(var i = 0; i<markerCoords.length; i++){
        /* Hover Interaction */
        google.maps.event.addListener(markerCoords[i], 'mouseover', function() {
          var infoTitle = "Location Title to Come";
          infoBox = new InfoBox({
            content: this.objTitle,
            disableAutoPan: true,
            maxWidth: 200,
            pixelOffset: new google.maps.Size(-100, -60),
            zIndex: null,
            boxStyle: this.objStyle,
            closeBoxMargin: "",
            closeBoxURL: "",
            infoBoxClearance: new google.maps.Size(1,1)
          });

          infoBox.open(map, this);
        });

        google.maps.event.addListener(markerCoords[i], 'mouseout', function() {
          infoBox.close();
        });

        /* Click Interaction */
        google.maps.event.addListener(markerCoords[i], 'click', function(){
          window.location.href = this.objDestination;
        });
      }

      // Read in and populate the polygons for all of the State boundaries
      // documented in /crs/core/js/xml/states.xml,
      // provided by http://econym.org.uk/gmap/states.xml
      $.ajax({
        url: "/sites/default/themes/irsjobs/xml/states.xml",
        success: function(response) {
          var data = $(response);
          $(data).find('state').each(function() {
            var coordinates = new Array();
            var statePoly = $(this);

            $(statePoly).find('point').each(function() {
              var lat = $(this).attr('lat');
              var lng = $(this).attr('lng');
              coordinates.push(new google.maps.LatLng(lat,lng));
            });

            polyFill = new google.maps.Polygon({
              paths:         coordinates,
              strokeColor:   "#ffffff",
              strokeOpacity: 1.0,
              strokeWeight:  1,
              fillColor:     "#cbcbca",
              fillOpacity:   1.0
            });

            polyFill.setMap(map);
          });
        }
      });
    }

    obj.initialize = function(eleCur) {
      obj.mapID = $(eleCur).attr('id');
      obj.dataSet = $('.office-locations.interactive-map.list .location-dataset');
      obj.generateMap();
    }
  }

  // Google Map Behavior
  //
  // Renders the interactive GoogleMap located on the About Us page.
  Drupal.behaviors.irsjobsGoogleMap = {
    attach: function(context, settings) {
      if ($('#regional-office-map').length
      &&  $('#regional-office-map').hasClass('google-map')) {
        var gmap = new GoogleMap();
        gmap.initialize($('#regional-office-map'));
      }
    }
  };

  // Card Flip Behavior
  //
  // If flippable cards are found on the page then a toggler element is added
  // to append .flipped to the element on a user click. .flipped is removed on
  // when the mouse leaves the element.
  Drupal.behaviors.irsjobsInteractionCardFlip = {
    attach: function(context, settings) {
      var flippableElements = $('.flip');

      if (flippableElements.length > 0) {
        flippableElements.each(function() {
          var elementToggler =
            $('<div class="toggler">+</div>')
            .unbind()
            .bind('click', function() {
              var card =
                $(this).parents('.flip')
                       .find('.card');

              $(card).toggleClass('flipped')
                .one('mouseleave', function() {
                  $(card).toggleClass('flipped');
                });
            });

          $(this).find('.card .front').append(elementToggler);
        });
      }
    }
  };

  // Exposed Filter Collapse Behavior
  //
  // Collapses the exposed filter block on career pages when the block
  // title is clicked.
  Drupal.behaviors.irsjobsExposedFilterCollapse = {
    attach: function(context, settings) {
      if($('#block-views-exp-usajobs-page-1').length
      || $('#block-views-exp-usajobs-page-2').length
      || $('#block-views-exp-usajobs-page-3').length
      || $('#block-views-exp-usajobs-page-4').length
      || $('#block-views-exp-gs-schedules-page').length) {
        var filterTitles = "#block-views-exp-usajobs-page-1 .block__title, "
                         + "#block-views-exp-usajobs-page-2 .block__title, "
                         + "#block-views-exp-usajobs-page-3 .block__title, "
                         + "#block-views-exp-usajobs-page-4 .block__title, "
                         + "#block-views-exp-gs-schedules-page .block__title";

        var filterBodies = "#block-views-exp-usajobs-page-1 .block__content, "
                         + "#block-views-exp-usajobs-page-2 .block__content, "
                         + "#block-views-exp-usajobs-page-3 .block__content, "
                         + "#block-views-exp-usajobs-page-4 .block__content, "
                         + "#block-views-exp-gs-schedules-page .block__content";

        // $('.block--views-exp-usajobs-page-1 .block__content').hide(1000);
        $(filterBodies).toggle("blind", 500);
        $(filterTitles).toggleClass("collapsed");
        // Due to Drupal Behaviors reloading on dynamic Ajax events we always
        // unbind any previous functionality.
        $(filterTitles).unbind().bind('click', function() {
          $(filterBodies).toggle("blind", 500);
          $(this).toggleClass("collapsed");
        });
      }
    }
  };

  // Careers Filter Display Actions Behavior
  //
  // Displays the action items in the career pages filter results. The
  // results assume no JavaScript is enabled by adding a .no-js to
  // .action-items.
  Drupal.behaviors.irsjobsCareersFilterDisplayActions = {
    attach: function(context, settings) {
      setTimeout(function() {
        if ($('.USAJobs.page.by-date').length
        &&  $('.actions ul.action-items').length) {
          $('.actions ul.action-items').removeClass('no-js');

          // Due to Drupal Behaviors reloading on dynamic Ajax events
          // we always unbind any previous functionality.
          $(".actions ul.action-items li.social-sharing")
            .addClass('toggle')
            .unbind()
            .bind('click', function() {
              var tableRow = $(this).parent().parent().parent();
              $(tableRow).toggleClass('sharethis-open');
            });
        }
      }, 500);
    }
  };


  Drupal.behaviors.irsjobsFilterCollapseToggler = {
    attach:function(context,settings){
      if($('#block-views-exp-usajobs-page-1').length || $('#block-views-exp-usajobs-page-2').length || $('#block-views-exp-usajobs-page-3').length || $('#block-views-exp-usajobs-page-4').length || $('#block-views-exp-gs-schedules-page').length){
          // Due to Drupal Behaviors reloading on dynamic Ajax events we always unbind any previous functionality
          $("#block-views-exp-usajobs-page-1 .block-title, #block-views-exp-usajobs-page-2 .block-title,#block-views-exp-usajobs-page-3 .block-title, #block-views-exp-usajobs-page-4 .block-title, #block-views-exp-gs-schedules-page .block-title" ).unbind().bind('click',function(){
            $("#block-views-exp-usajobs-page-1 .content, #block-views-exp-usajobs-page-2 .content, #block-views-exp-usajobs-page-3 .content, #block-views-exp-usajobs-page-4 .content, #block-views-exp-gs-schedules-page .content").toggle("blind", 500);
          });
      }
    }
  };
  Drupal.behaviors.irsjobsShareThisCollapseToggler = {
    attach:function(context,settings){
      setTimeout(function(){
        if($('.USAJobs.page.by-date').length && $('.actions ul.action-items').length ){
          $('.actions ul.action-items').removeClass('no-js');
          // Due to Drupal Behaviors reloading on dynamic Ajax events we always unbind any previous functionality
          $(".actions ul.action-items li.social-sharing").addClass('.toggle').unbind().bind('click',function(){
            $(this).parent().parent().find('.sharethis').toggle('drop',250, false);
          });
        }
      },500);
    }
  };

  Drupal.behaviors.irsjobsShareThisHomepageToggler = {
    attach:function(context,settings){
      if($('#block-views-usajobs-block-2').length){
        $('#sharethis-trigger').unbind().bind('click',function(event){
          event.preventDefault();
          $('.sharethis-wrapper').toggle('drop',250, false);
        });
      }
    }
  };

  // Careers Filter Pass Info To Contact Form Behavior
  //
  // When the contact action item is clicked on career page filter results,
  // the job information and selection is passed to the contact form and the
  // form slides into view.
  Drupal.behaviors.irsjobsCareersFilterPassInfoToContactForm = {
    attach: function(context, settings) {
      if ($('.USAJobs.page.by-date').length
      &&  $('.actions ul.action-items .contact').length) {
        // Due to Drupal Behaviors reloading on dynamic Ajax events we always
        // unbind any previous functionality.
        $('.actions ul.action-items .contact').unbind()
          .bind('click',function() {
            $(this).toggleClass('active');

            // Grab Job Information
            var eleParentRow = $(this).parents('.views-table tbody tr.odd, .views-table tbody tr.even');
            var strOfficeLocation = $(eleParentRow).find('td.views-field-php').text().trim();
            var strAnnouncementNumber = $(eleParentRow).find('td.position [data-guid]').attr('data-guid');
            var strInterestStatement =
              'I am currently interested in the open position of '
              + $(eleParentRow).find('td.position').text().trim()
              + ' at the location of '
              + strOfficeLocation
              + '. Please contact me with more information regarding this opportunity.';

            if ($('#block-webform-client-block-404').length) {
              var target = $('#block-webform-client-block-404');

              // Set Form Properties

              // Set the Contact Purpose form element value
              $(target).find('select[name*="purpose"]').val('1');
              $(target).find('select[name*="purpose"]').trigger("change");

              // Set the Announcement ID form element value
              $(target).find('select[name*="open_job_ids"]').val(strAnnouncementNumber);

              // Set the Office Location form element value
              if (strOfficeLocation.match(/multiple/ig)) {
                $(target).find('select[name*="job_locations"]')
                  .append($('<option value="-1">Multiple Locations</option>'))
                  .val(-1);
              }
              $(target).find('select[name*="job_locations"] option')
                .each(function(){
                  var tmpStoredCity = strOfficeLocation.split(',')[0];
                  var tmpCityList = $(this).text().split(',')[0];
                  if (tmpStoredCity == tmpCityList) {
                    $(target).find('select[name*="job_locations"]')
                      .val($(this).val());
                  }
                });

              // Set the Contact Question form element value
              $(target).find('[name*="question_or_comment"]')
                .val(strInterestStatement);

              // Animate Form Slideout
              if ($(window).width() <= breakpoint) {
                $('#block-webform-client-block-404.mobile').css({
                  'transform': 'translateX(0)'
                });
              }
              else {
                $('.l-page').animate({
                  left: parseInt($('.l-page').css('left'),10) == 0 ? - $(target).outerWidth() : 0
                });
              }
            }
          });
      }
    }
  };

  // Front Page Career Share Toggle Behavior
  //
  // Displays social media icons to share a job on the random featured job
  // view block on the front page.
  Drupal.behaviors.irsjobsFrontPageCareerShareToggle = {
    attach: function(context, settings) {
      if ($('#block-views-usajobs-block-2').length > 0) {
        $('#sharethis-trigger').unbind()
          .bind('click', function(event) {
            event.preventDefault();
            $('.sharethis-wrapper').toggle('drop', 250, false);
          });
      }
    }
  };

  // Subpage Navigation Behavior
  //
  // Moves the active page link in the subpage navigation menu to the top
  // of the menu on desktop devices. For mobile, adds a default item used to
  // open and close the menu.
  Drupal.behaviors.irsjobsSubpageNavigation = {
    attach: function(context, settings) {
      var menuBlock = $('.block--menu-block-1, .block--menu-block-3');

      if (menuBlock.length > 0) {
        var menu       = menuBlock.find('.menu');
        var activeLink = menu.find('.leaf.active');

        // Mobile devices
        if ($(window).width() <= breakpoint) {
          // Remove first class from menu
          menu.find('.first').removeClass('first');

          // Add defaultItem to menu
          $(document.createElement('li'))
            .html('<a class="default-item">Select a Page</a>')
            .addClass('first leaf')
            .prependTo(menu);

          var defaultItem = menu.find('.leaf.first');

          // Click defaultItem to open and close menu
          $(defaultItem).bind('click', function(event) {
            event.preventDefault();
            $(this).parent().toggleClass('open');
          });
        }
        // Laptop and Desktop devices
        else {
          // Move activeLink to top of menu
          if (activeLink.length > 0) {
            menu.find('.leaf.first')
              .removeClass('first');

            activeLink.prependTo(menu)
              .addClass('first');
          }
        }
      }
    }
  };

  // Overview List Equal Card Heights Behavior
  //
  // Searches the page for a view that uses the overview-list mixin,
  // calculates the maximum height of the cards in one row, and
  // updates the heights of both cards in the row.
  Drupal.behaviors.irsjobsOverviewListEqualCardHeights = {
    attach: function(context, settings) {
      var timeout;

      function resizeCards(context) {
        // Only blocks that need this have the featured-pages
        // or office-locations classes in the containing view.
        var supportedBlocks = $('.featured-pages, .office-locations', context);

        if (supportedBlocks.length > 0) {
          var cardHeights = [];
          var cardContainers = supportedBlocks.find('li.flip');

          if ($(window).width() > breakpoint) {
            cardContainers.each(function() {
              var minHeight = $(this).height();

              var frontHeight = 0;
              $(this).find('.face.front')
                .children()
                .each(function() {
                  frontHeight += $(this).outerHeight(true);
                });

              var backHeight = 0;
              $(this).find('.face.back')
                .children()
                .each(function() {
                  backHeight += $(this).outerHeight(true);
                });


              var maxHeight = Math.max(frontHeight,
                                       backHeight);

              var height = Math.max(maxHeight,
                                    minHeight);

              cardHeights.push(height);
            });

            for (var i = 0; i < cardHeights.length; i += 2) {
              var leftCardHeight  = cardHeights[i];
              var rightCardHeight = cardHeights[i + 1];

              var finalHeight = Math.max(leftCardHeight,
                                         rightCardHeight);

              $(cardContainers[i]).height(finalHeight);
              $(cardContainers[i + 1]).height(finalHeight);
            }

            // Resize last card if alone in row
            if (i % 2 == 1) {
              var minHeight   = $(cardContainers).last().height();
              var indexLast   = cardHeights.length - 1;
              var innerHeight = cardHeights[indexLast];

              if (innerHeight > minHeight) {
                $(cardContainers).last().height(innerHeight);
              }
            }
          }
          else {
            $(cardContainers).height("auto");
          }
        }
      }

      $(window).bind('load', function() {
        resizeCards(context);
      });

      $(window).bind('resize', function() {
        clearTimeout(timeout);
        timeout = setTimeout(resizeCards(context), 150);
      });
    }
  };
})(jQuery);

(function ($) {

Drupal.behaviors.irsjobsAccessibleNav = {
	attach: function(context, settings) {

		// Adds classes to parent LI tags on focus and blur
		$('body', context).once('irsjobsAccessibleNav', function() {
			$navigation = $('.block--system-main-menu');

			$navigation.find('a').each(function(){
				// $(this).bind('blur', function(){
				// 	$(this).parent('li').toggleClass('active-focus');
				// });

				// $(this).bind('focus', function(){
				// 	$(this).parent('li').toggleClass('active-focus');
				// });
			});
		});
	}	
};

})(jQuery);

 (function ($) {

  // Google Analytics Events Tracker
  //
  // Tracks events on various page interactions
  // and reports to google analytics


    Drupal.behaviors.irsjobsCareerPathEventTracker = {
    attach: function(context, settings) {
      $('#block-irs-calculators-fit-check', context).once('irsjobsCareerPathEventTracker', function(){
        if($('#career-path-start').length > 0) {
          $('#career-path-start').click(function() {
            ga('send', 'event', 'Career Tools: FitCheck', 'Click', 'FitCheck Started')
          });
        }
      });
    }
  };

  Drupal.behaviors.irsjobsFooterLinksFacebookTracker = {
    attach: function(context, settings) {
      $('#footer', context).once('irsjobsFooterLinksFacebookTracker', function(){
        if($('#facebook').length > 0) {
          $('#facebook').click(function() {
            ga('send', 'event', 'Social Media: Footer', 'Click', 'Facebook')
          });
        }
      });
    }
  };

  Drupal.behaviors.irsjobsFooterLinksGovLoopTracker = {
    attach: function(context, settings) {
      $('#footer', context).once('irsjobsFooterLinksGovLoopTracker', function(){
        if($('#govloop').length > 0) {
          $('#govloop').click(function() {
            ga('send', 'event', 'Social Media: Footer', 'Click', 'GovLoop')
          });
        }
      });
    }
  };

  Drupal.behaviors.irsjobsFooterLinksYouTubeTracker = {
    attach: function(context, settings) {
      $('#footer', context).once('irsjobsFooterLinksYouTubeTracker', function(){
        if($('#youtube').length > 0) {
          $('#youtube').click(function() {
            ga('send', 'event', 'Social Media: Footer', 'Click', 'YouTube')
          });
        }
      });
    }
  };

  Drupal.behaviors.irsjobsFooterLinksLinkedInTracker = {
    attach: function(context, settings) {
      $('#footer', context).once('irsjobsFooterLinksLinkedInTracker', function(){
        if($('#linkedin').length > 0) {
          $('#linkedin').click(function() {
            ga('send', 'event', 'Social Media: Footer', 'Click', 'LinkedIn')
          });
        }
      });
    }
  };

  Drupal.behaviors.irsjobsFooterLinksTwitterTracker = {
    attach: function(context, settings) {
      $('#footer', context).once('irsjobsFooterLinksTwitterTracker', function(){
        if($('#twitter').length > 0) {
          $('#twitter').click(function() {
            ga('send', 'event', 'Social Media: Footer', 'Click', 'Twitter')
          });
        }
      });
    }
  };

})(jQuery);
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

//# sourceMappingURL=irsjobs.behaviors.js.map
