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
