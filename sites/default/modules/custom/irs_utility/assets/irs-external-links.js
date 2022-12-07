Drupal.behaviors.IRSExternalLinks = {
    attach: function (context, settings) {
        (function ($) {
            // Get the current body of the page
            $body = $('body');

            /**
             * Get window object but allow for cases where its an iframe on page (any Drupal Overlays)
             */
            if ($body.hasClass('overlay')) {
                var parent = window.parent;

                // Reassign the body to the parent window body
                $body = $('body', parent);
            } else {
                var parent = window;
            }

            /**
             * Construct the dialog element (so only one instance is used throughout)
             */
            if (typeof parent.$external_dialog == 'undefined') {
                // Append the dialog container to the page
                $body.append('<div id="external-dialog" title="External Link" style="display: none;"></div>');

                // Set the properties for the dialog
                parent.$external_dialog = $('#external-dialog', $body);
                parent.$external_dialog.html(
                        '<div class="announcement">'
                        + '<h4>You are leaving the IRS Careers website</h4>'
                        + '<p>Click the following link to continue: <span class="external-link"></span></p>'
                        + '</div>'
                        + '<div class="response">'
                        + '<p class="privacy"><h4>Privacy Information</h4>You will be leaving the jobs.irs.gov domain and entering an external link. The link provides additional information that may be useful or interesting and is being provided consistent with the intended purpose of the IRS Careers Web site. However, IRS cannot attest to the accuracy of information provided by this link or any other linked site. Providing links to a non-IRS Web site does not constitute an endorsement by IRS or any of its employees of the sponsors of the site or the information or products presented on the site. Also, be aware that the privacy protection provided on the IRS.gov domain (see Privacy and Security Notice) may not be available at the external link.</p>'
                        + '</div>'
                );

                // Attach the dialog function to the dialog container
                parent.$external_dialog.dialog({
                    autoOpen: false,
                    modal: true,
                    closeOnEscape: true,
                    draggable: false,
                    minWidth: 500
                });
            }

            /**
             * Bind a click function to close the dialog on clicking of external link
             */
            $('a', parent.$external_dialog).live('click', function (e) {
                parent.$external_dialog.dialog('close');
            });

            /**
             * Bind a click function to links in order to check if external links
             */
            $('a:not([rel="dialog"])', context).live('click', function (e) {
                var href = this.href;

                // Do not process on any anchors
                if (href == '' || href.indexOf('#') >= 0){
                    return;
                }

                // Default values
                var allowed = [window.location.host, 'irs.gov', 'metrostarsystems.com'];
                var is_external = true;

                // Check if the link is one of the allowed domains
                $.each(allowed, function (i) {
                    // If an allowed domain, stop this function from further processing
                    // And allow dom to proceed
                    if (href.indexOf(allowed[i]) != -1) {
                        is_external = false;
                        return;
                    }
                });

                // If an allowed internal url, cancel further processing
                if (!is_external || (href.match("^../") || href.match("^/"))) {
                    return;
                }

                // Prevent default actions and further JQuery events
                e.preventDefault();
                e.stopPropagation();

                // Construct the link to output
                ext_link = '<a href="' + this.href + '" rel="dialog" target="_blank">' + this.href + '</a>';

                // Modify the link and display the dialog
                $('.external-link', parent.$external_dialog).html(ext_link);
                parent.$external_dialog.dialog('open');
            });
        }(jQuery));
    }
}
