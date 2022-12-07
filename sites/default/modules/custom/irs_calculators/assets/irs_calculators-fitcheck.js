// Wrap in JQuery tag so not to prevent any conflicts

(function($){

    var fitcheck = {
        $container: {},
        $questions: {},
        irsposition: [], // Scores
        init: function(){
            var that = this;

            // Set the main block container
            this.$container = $('#fit-check-calculator');

            // If the container does not exist on page, stop init
            if (!this.$container.length){
                return;
            }

            // Get the questions
            this.$questions = $('.question', this.$container);

            // Apply click event to next /prev buttons
            $('.button:not(".ignore")', this.$container).click(function(e){
                e.preventDefault();

                var $self = $(this);

                // Get the parent question
                $parent = $self.closest('.question');

                // Get the index of this question for actions
                index = parseInt($parent.attr('data-index'));

                // Get action
                action = $self.attr('data-action');

                // If next action, make sure a radio button is chosen
                if (action == 'next'){
                    $radios = $('input', $parent);

                    if ($radios.length){
                        selected = $('input:checked', $parent).val();

                        // If no option is selected, display alert and stop script
                        if (typeof selected == 'undefined'){
                            alert('Please make a selection.');
                            return;
                        }
                    }
                }

                // Hide the parent question div
                $parent.hide();

                switch(action){
                    case 'next':
                        show_index = index + 1;
                        break;
                    case 'back':
                        show_index = index - 1;
                        break;
                    case 'submit':
                        // Process the results
                        that.doResult();

                        // Stop further execution of function
                        return;
                        break;
                }

                $('"[data-index=\'' + show_index + '\']"', this.$container).show();

            });
        },
        doResult: function(){
            var that = this;

            // Get up all the selected options
            $options = $('input:checked', this.$container);

            // Add up the values
            $options.each(function(index) {
                $self = $(this);

                str = $self.val();
                var values = str.split(',');

                for (var i = 0; i < values.length; i++) {
                    // If not already set, set to 0
                    if (typeof that.irsposition[i] == 'undefined'){
                        that.irsposition[i] = [];
                        that.irsposition[i]['score'] = 0;
                        that.irsposition[i]['position'] = i;
                    }

                    // Add in the weight values
                    that.irsposition[i]['score'] += parseInt(values[i]);
                }
            });

            // Sort the irsposition
            this.irsposition.sort(this.sortScore);

            // Show the message
            result = this.irsposition[this.irsposition.length - 1];
            result_index = result['position'];

            $('[data-result-id="'+result_index+'"]').show();

        },
        sortScore: function(a, b){
            var x = a['score'];
            var y = b['score'];
            return ((x < y) ? -1 : ((x > y) ? 1 : 0));
        }
    }

    $(function(){
        // Initialize the Fit Check Calculator
        fitcheck.init();
    });
}(jQuery));