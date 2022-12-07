/*
 * Window level javascript functions for the Youtube player ability
 * To be used by the Behaviours defined
 */

var ytplayer = null;
var yt_v = null;

var onYouTubeIframeAPIReady = function(){
    if (yt_v == null){
        Array.prototype.slice.call(document.getElementById("ytplayer").attributes).forEach(function(item) {
            if (item.name == 'data-yt-v'){
                yt_v = item.value;
                return false;
            };
        });
    };

    ytplayer = new YT.Player('ytplayer', {
        height: '270',
        width: '480',
        videoId: yt_v,
        autoplay: 0,
        events: {
            'onReady': onPlayerReady,
            'onStateChange': onPlayerStateChange
        }
    });
};

var onPlayerReady = function(event){};
var onPlayerStateChange = function(event){};

var IRSYoutubeAjax = function(){

    var init = function(){
        var tag = document.createElement('script');
        tag.src = "https://www.youtube.com/iframe_api";
        var firstScriptTag = document.getElementsByTagName('script')[0];
        firstScriptTag.parentNode.insertBefore(tag, firstScriptTag);
    }

    if (ytplayer == null){
        init();
    }
};

/*
 * Drupal level behaviours for core functionality of actions for the Youtube player
 */

Drupal.behaviors.IRSEmployeeProfile = {
    attach: function (context, settings) {
        (function ($) {
            // Initial setting of the playlist object
            var $playlist = $('.profile-playlist', context);

            // Don't continue execution if neither player or playlist
            // is on the page
            if (!$playlist.length){
                return;
            };

            // Function to replace the title
            var changePlayerTitle = function(html){
              var $item = $('.view-display-id-attachment_profile_featured', $playlist)
                  .find('.views-field-title')
                  .find('.field-content')
                  .html(html);
            };

            // Bind to ajax events to check when Filter and Pager are executed
            $(document).ajaxComplete(function(event, xhr, settings){
                // Refresh the playlist object to the new one created by the Ajax call
                $playlist = $('.profile-playlist', context);

                // Process only if
                if (settings.data.indexOf('view_name=youtube&view_display_id=block_playlist') >= 0){
                    // Set the youtube id of first item in playlist otherwise set to null
                    $playlist_first = $('.views-row-first', $playlist).find('.youtube-data');
                    yt_v = ($playlist_first.length) ? $playlist_first.attr('data-yt-v') : null;
                    changePlayerTitle($playlist.find('.title').html());

                    // Process the reloading of the iframe due to view ajax cleaning of content
                    window.IRSYoutubeAjax();
                    window.onYouTubeIframeAPIReady();
                }
            });

            // Add click processing for playlist links and their images
            $('a,img', $playlist).live('click', function(e){
                e.preventDefault();

                // Get the video id from the element
                $parent = $(this).closest('li');
                $yt = $parent.find('.youtube-data');
                yt_v = $yt.attr('data-yt-v');

                // Update the title
                changePlayerTitle($parent.find('.title').html());

                // Cue up the video id on the player
                window.ytplayer.cueVideoById(yt_v);
            });
        }(jQuery));
    }
}
