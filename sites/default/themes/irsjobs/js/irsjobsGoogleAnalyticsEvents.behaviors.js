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