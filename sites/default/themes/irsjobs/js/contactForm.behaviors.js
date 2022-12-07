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
