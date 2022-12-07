// Wrap in JQuery tag so not to prevent any conflicts

(function($){

    var experience = {
        $container: {},
        $questions: {},
        $education: {},
        grade_value: null,
        $conditions: {},
        $outcome: {},
        init: function(){
            var that = this;

            // Set the main block container
            this.$container = $('#experience-calculator');

            // If the container does not exist on page, stop init
            if (!this.$container.length){
                return;
            }

            // Store the education options
            this.$education = $('input[name="education"]', this.$container);

            // Store the conditions
            this.$conditions = $('.option-condition, .question-condition', this.$container);

            // Set the container for select in calc
            this.Calc.init(this.$container);

            // Auto process on init
            // (some browsers, FF, store radio selected on refresh)
            this.doEducation();

            if (this.grade_value == null){
                $grade = $('input[name="grade"]:checked', this.$container);
                this.grade_value = $grade.val();
            }

            this.resetConditions();

            // Add the trigger to the Grade radios
            $('input[name="grade"]', this.$container).change(function(e){
                that.resetConditions();
                that.doEducation();
            });

            $('input[name="education"]', this.$container).change(function(e){
                that.resetConditions();
                that.checkEducationConditions();
            });

            // Bind to the calculate button
            $('.button[data-action="calculate"]', this.$container).click(function(e){
                e.preventDefault();

                that.doCalculate();
            });

            // Bind to the semester GPA
            $('input[name *= "-grade-"]', this.$container).keydown(function(e){
                // Allow: backspace, delete, tab, escape, and enter
                if ( e.keyCode == 46 || e.keyCode == 8 || e.keyCode == 9 || e.keyCode == 27 || e.keyCode == 13 ||
                    // Allow: Ctrl+A
                    (e.keyCode == 65 && e.ctrlKey === true) ||
                    // Allow: home, end, left, right
                    (e.keyCode >= 35 && e.keyCode <= 39)) {
                    // let it happen, don't do anything
                    $(this).attr('data-key-press', 'true');
                    return;
                } else {
                    if (e.shiftKey || (e.keyCode < 48 || e.keyCode > 57) && (e.keyCode < 96 || e.keyCode > 105 )) {
                        $(this).attr('data-key-press', 'false');
                        e.preventDefault();
                        return;
                    }
                }

                $(this).attr('data-key-press', 'true');
            });
            $('input[name *= "-grade-"]', this.$container).keyup(function(e){
                $self = $(this);
                if ($self.attr('data-key-press') == 'true'){
                    that.Calc.setGPA($(this));
                }
            })
        },
        doEducation: function(){
            var that = this;

            // Get the checked Grade
            $grade = $('input[name="grade"]:checked');

            // Store the grade value
            this.grade_value = $grade.val();

            // Uncheck all experience radios and hide their containers
            that.$education.removeAttr("checked");

            // Get selected option trigger values and turn to array
            var trigger_values_str = $grade.attr('data-trigger-values');

            var trigger_values = (typeof trigger_values_str != 'undefined') ? trigger_values_str.split(',') : [];

            // Loop through education radios and decide to hide or show
            that.$education.each(function(index) {
                $self = $(this);

                // Get parent container
                $container = $self.closest('.option');

                // Get options id
                id = $container.attr('data-option-id');

                if ($.inArray(id, trigger_values) != -1){
                    $container.show();
                } else {
                    $container.hide();
                }

            });
        },
        doCalculate: function(){
            if (typeof this.grade_value == 'undefined'){
                alert('Must select a Grade.');
                return;
            }

            // Important note
            str_note = '<div class="note"><strong>Important Note:</strong> The Experience Calculator is designed to provide general guidance. Your experience and education will be verified by an HR Professional later in the process to determine final eligibility.</div>';

            // Call the calculation function dynamically
            outcome_html = this.Calc['Grade' + this.grade_value]();

            // If not already part of dom, add in the outcome right under the calculate button
            if (!this.$outcome.length){
                this.$container.append('<div id="outcome_container"></div>');
                this.$outcome = $('#outcome_container', this.$container);
            }

            this.$outcome.html(outcome_html + str_note);
        },
        resetConditions: function(){
            // Clear out all the inputs in the conditions
            $('input', this.$conditions)
                .not(':button, :submit, :reset, :hidden, :radio')
                .val('');

            $('input:radio', this.$conditions).attr('checked', false);

            this.$conditions.hide();

            if (this.$outcome.length){
                this.$outcome.html('');
            }
        },
        checkEducationConditions: function(){
            that = this;

            // Get the check work experience option and its option key
            $education = $('input[name="education"]:checked', this.$container);

            if (!$education.length)
                return;

            var education_key = $education.closest('.option').attr('data-option-id');

            // Find the first matching TRUE condition (there isn't two conditions for a grade / experience combo)
            var $conditions = $('[data-condition-option="'+education_key+'"]', this.$container);
            $conditions.hide();

            $conditions.each(function(index) {
                $self = $(this);

                var type = $self.attr('data-condition-type');
                var value = $self.attr('data-condition-value');

                switch (type){
                    case 'grade':
                        if (that.grade_value == value){
                            $self.show();
                            return;
                        }
                        break;
                    case 'question':
                        if (that.grade_value == value){
                            // Get the question id to show
                            question_id = $self.html();
                            $question_container = $('.'+question_id, that.$container);

                            // Show the question
                            $question_container.show();

                            // Any show wrappers for specific ids
                            $('[data-js-show]' ,$question_container).each(function() {
                                $self = $(this);

                                // Get the id to show for
                                show_id = $self.attr('data-js-show');

                                if (show_id == education_key){
                                    $self.show();
                                } else {
                                    $self.hide();
                                }
                            });
                        }
                }
            });

        }
    };

    experience.Calc = {
        $container: {},
        $saa_container: {},
        tally: {
            experience: null,
            education: null,
            education_level: null,
            semester: {
                inputs: [],
                conversion: []
            },
            quarter: {
                inputs: [],
                conversion: []
            }
        },
        init: function($container){
            if (!this.$container.length){
                this.$container = $container;
                this.$saa_container = $('.saa', $container);
            }
        },
        setEducation: function(){
            // Set the education level
            $education_level = $('input[name="education"]:visible:checked', this.$container);
            this.tally.education_level = ($education_level.length) ? $education_level.val() : '';

            // Set the semester and quarter values
            $semester = $('input[name="semester-hours"]:visible', this.$container);
            $quarter = $('input[name="quarter-hours"]:visible', this.$container);

            $saa = $('.saa:visible', this.$container);

            if (!$saa.length){
                semester = ($semester.length && $semester.val() != '') ? parseInt($semester.val() / 30 * 12) : 0;
                quarter = ($quarter.length && $quarter.val() != '') ? parseInt($quarter.val()) / 30 / 1.5 * 12 : 0;
            } else {
                valid_levels = ['bachelor', 'bachelor-grad', 'master', 'master-phd'];
                if ($.inArray(this.tally.education_level, valid_levels) != -1){
                    semester = ($semester.length && $semester.val() != '') ? $semester.val() / 18 * 12 : 0;
                    quarter = ($quarter.length && $quarter.val() != '') ? $quarter.val() / 18 / 1.5 * 12 : 0;
                } else {
                    semester = 0;
                    quarter = 0;
                }
            }

            this.tally.education = semester + quarter;
        },
        setExperience: function(){
            $month = $('input[name="month"]:visible', this.$container);
            $week = $('input[name="week"]:visible', this.$container);

            month = ($month.length && $month.val() != '') ? parseInt($month.val()) : 0;
            week = ($week.length && $week.val() != '') ? parseInt($week.val()) : 0;

            $saa = $('.saa', this.$container);

            if (!$saa.length){
                if (week > 34){
                    this.tally.experience = month;
                } else {
                    this.tally.experience = week * month * 4 / 160;
                }
            } else {
                if (week > 34){
                    this.tally.experience = month;
                } else {
                    this.tally.experience = (week * month * 4 / 160);
                }
            }
        },
        setGPA: function($self){
            // Assure SAA block is being shown
            $saa = $('.saa:visible', this.$container);

            // Valid grade to process
            var grades=new Array('f', 'd', 'c', 'b', 'a');

            // Find out it semester or quarter GPA to process
            name = $self.attr('name');
            $container = $self.closest('table');
            type = (name.indexOf('semester') != -1) ? 'semester' : 'quarter';

            // Add the gpa
            var gpa_total = 0;
            var gpa_conversion = 0;

            // Process each letter grade for type
            $.each(grades, function(index, value) {
                $grade_gpa = $('input[name="'+type+'-grade-'+value+'"]', $container);
                grade_gpa = ($grade_gpa.length) ? parseInt($grade_gpa.val()) : 0;

                if (!isNaN(grade_gpa)){
                    gpa_total += grade_gpa;
                    gpa_conversion += grade_gpa * index;
                }
            });

            // Write out the GPA in appropriate cell
            gpa_calc = gpa_conversion / gpa_total;
            $('tbody tr td:last', $container).html(gpa_calc.toFixed(2));
        },
        setSAA: function(){
            // Assure SAA block is being shown
            $saa = $('.saa:visible', this.$container);
            if (!$saa.length){
                if (this.tally.semester.inputs.length > 0){
                    // Reset the values if they have been set prior
                    $.each(grades, function(index, value) {
                        this.tally.semester.inputs[value] = 0;
                        this.tally.semester.conversion[value] = 0;

                        this.tally.quarter.inputs[value] = 0;
                        this.tally.quarter.conversion[value] = 0;
                    });
                };

                return;
            };
        },
        outcomeString: function(str_total, str_qfy){
          return '<div class="result-message"><div class="outcome">'+str_total+'</div><div class="qualify">'+str_qfy+'</div></div>';
        },
        qualifyString: function(total, total_years, month_diff){
            str_total = '';

            month_diff = parseInt(month_diff);

            if (total_years == 1){
                if (month_diff == 0){
                    str_total = "You have 1 year of total experience.";
                } else if (month_diff == 1) {
                    str_total = "You have 1 year, 1 month of total experience.";
                } else {
                    str_total = "You have 1 year, " + month_diff + " months of total experience";
                };
            } else if (total_years > 1) {
                if (month_diff == 0){
                    str_total = "You have " + total_years + " years of total experience.";
                } else if (month_diff == 1) {
                    str_total = "You have " + total_years + " years, 1 month of total experience."
                } else {
                    str_total = "You have " + total_years + " years, " + month_diff + " months total experience";
                };
            } else {
                if (total < 1){
                    str_total = "You have less than the required amount of experience.";
                } else if (total == 1) {
                    str_total = "You have 1 month of total experience.";
                } else {
                    str_total = "You have " + parseInt(total) + " months of total experience.";
                }
            }

            return str_total;
        },
        Grade5: function(){
            // Get the input values
            this.setExperience();
            this.setEducation();

            // Default values
            var str_qfy = '';
            var str_total = '';

            // Default text
            var str_not_qualify = 'You do not qualify for the Grade 5.';
            var str_qualify = 'You qualify for the Grade 5.';

            if (this.tally.education_level == 'bachelor'){
                str_qfy = "With a Bachelors degree or higher, you qualify for the Grade 5.";
            } else {
                if (this.tally.experience == 0){
                    // Set the totals
                    total = this.tally.education;
                    total_years = Math.floor(total / 12);
                    month_diff = parseInt(total - (total_years * 12));

                    if (total_years == 1){
                        str_qfy = str_not_qualify;
                    } else if (total_years >= 4) {
                        str_qfy = str_qualify;
                    } else {
                        str_qfy = str_not_qualify;
                    }

                    // If no experience, then education is 1-1 ratio
                    str_total = this.qualifyString(total, total_years, month_diff);
                } else {
                    // They have some experience, so first figure experience only
                    console.log(this.tally.education);
                    if (this.tally.education == 0){
                        // Experience but no education
                        total = this.tally.experience;
                        total_years = Math.floor(total / 12);
                        month_diff = parseInt(total - (total_years * 12));

                        if (total_years == 1){
                            str_qfy = str_not_qualify;

                            if (month_diff == 0){
                                str_total = "You have 1 year of total experience.";
                            } else if (month_diff == 1){
                                str_total = "You have 1 year, 1 month of total experience.";
                            } else {
                                str_total = "You have 1 year, " + month_diff + " months of total experience"
                            };
                        } else if (total_years >= 3){
                            str_qfy = str_qualify;

                            if (month_diff == 0){
                                str_total = "You have 1 year of total experience.";
                            } else if (month_diff == 1){
                                str_total = "You have 1 year, 1 month of total experience.";
                            } else {
                                str_total = "You have " + total_years + " year, " + month_diff + " months of total experience"
                            };
                        } else {
                            str_qfy = str_not_qualify;

                            if (total < 1){
                                str_total = "You have less than the required amount of experience.";
                            } else if (total == 1){
                                str_total = "You have 1 month of total experience.";
                            } else {
                                str_total = "You have " + total + " months of total experience.";
                            };
                        };
                    } else {
                        // They have education and experience
                        total = this.tally.experience + (this.tally.education * .75);
                        total_years = Math.floor(total / 12);

                        years = total_years * 12;
                        month_diff = total - (total_years * 12);

                        if (total_years == 1){
                            str_qfy = str_not_qualify;
                        } else if (total_years >= 3) {
                            str_qfy = str_qualify;
                        } else {
                            str_qfy = str_not_qualify;
                        }; // (total_years == 1)
                    }; // (this.education == 0)

                    str_total = this.qualifyString(total, total_years, month_diff);
                }; // (this.tally.experience == 0)
            }; // (this.tally.education_level == 'bachelor')

            return this.outcomeString(str_total, str_qfy);
        }, // experience.Calc.Grade5
        Grade7: function(){
            // Education
            if (typeof this.tally.education_level == 'undefined'){
                alert('Must select your highest level of college education');
                return;
            }

            // Process the GPAs
            this.setSAA();

            // Get the input values
            this.setExperience();
            this.setEducation();

            var masters = (this.tally.education_level == 'academic') ? 12 : 0;
            var experience = this.tally.experience / 12;
            var education = this.tally.education / 12;
            var total = this.tally.experience + this.tally.education + masters;
            var total_years = Math.floor(total / 12);

            var years = total_years * 12;
            var month_diff = total - (total_years * 12);

            // Set eligibility values
            str_is_elible = 'Eligible';
            str_not_elible = 'Ineligible';
            str_eligible = '';

            // Get the selected grade scale radio
            $scales = $('input[name="bachelor-only"]', this.$saa_container);
            $scale = this.$container.find('input[name="bachelor-only"]:checked');
            scale_value = ($scale.length) ? $scale.val() : '';

            console.log($scales);
            console.log(this.$container);
            console.log($scale);
            console.log(scale_value);

            // Process the education level
            if (this.tally.education_level == 'bachelors'){
                if (this.tally.semester.gpa > 2.99 ){
                    str_eligible = str_is_elible;
                } else {
                    // Scale option to look for
                    valid_scales = ['3-plus', '3-plus-2yr', '3-5-All', '3-5-2yr'];

                    found = $.inArray(scale_value, valid_scales);

                    if (found != -1){
                        str_eligible = str_is_elible;
                    };
                };
            } else {
                // EdLevel was not high enough for SAA (need at least Bachelors)
                str_eligible = str_not_elible;
            };

            // Calculations
            if (total_years == 1){
                if (month_diff == 0){
                    str_total = "You have 1 year of total experience.";
                } else if (month_diff == 1) {
                    str_total = "You have 1 year, 1 month of total experience.";
                } else {
                    str_total = "You have 1 year, " + parseInt(month_diff) + " months of total experience";
                };
            } else if (total_years > 1){
                if (month_diff == 0){
                    str_total = "You have " + total_years + " years of total experience.";
                } else if (month_diff == 1) {
                    str_total = "You have " + total_years + " years, 1 month of total experience."
                } else {
                    str_total = "You have " + total_years + " years, " + parseInt(month_diff) + " months of total experience" ;
                };
            } else {
                if (total < 1){
                    str_total = "You have less than the required amount of experience.";
                } else if (total == 1) {
                    str_total = "You have 1 month of total experience.";
                } else {
                    str_total = "You have " + parseInt(total) + " months of total experience.";
                }
            };

            // Qualifications
            if (this.tally.education_level == 'academic'){
                str_total = "With 1 Academic Year of Graduate Education or Higher you qualify for the Grade 7.";
            } else if (this.tally.education_level == 'bachelor-grad' || this.tally.education_level == 'bachelor') {
                if ($scale.length && scale_value != '' && scale_value != 'NA'){
                    str_total = "With a Bachelors degree and Superior Academic Achievement, you qualify for the Grade 7.";
                    str_qfy = '';
                } else {
                    if (experience >= 1){
                        str_qfy = "You have enough qualifying experience to qualify for the Grade 7.";
                    } else {
                        if (total_years >= 1) {
                            str_qfy = "Your combination of education and experience qualify you for the Grade 7.";
                        } else {
                            str_qfy = "Based on these calculations, you do not qualify for the Grade 7.";
                        };
                    };

                };
            } else {
                if (experience >= 1){
                    str_qfy = "You have enough qualifying experience to qualify for the Grade 7.";
                } else {
                    if (total_years >= 1){
                        str_qfy = "Your combination of education and experience qualify you for the Grade 7."
                    } else {
                        str_qfy = "Based on these calculations, you do not qualify for the Grade 7.";
                    }
                }
            };

            return this.outcomeString(str_total, str_qfy);
        },
        Grade9: function(){
            // Get the input values
            this.setExperience();
            this.setEducation();

            // Reset totals
            if (this.tally.education < 13){
                this.tally.education = 0;
            } else if (this.tally.education > 24) {
                this.tally.education -= 12;
            } else {
                this.tally.education -= 12;
            }

            // Set the master value
            var masters = (this.tally.education_level == 'master') ? 12 : 0;

            // Calc years and months
            total = this.tally.education + this.tally.experience + masters;
            total_years = Math.floor(total / 12);
            month_diff = parseInt(total - (total_years * 12));

            // Peform year and month string calculations
            str_total = this.qualifyString(total, total_years, month_diff);

            // Perform qualifications calculations
            if (this.tally.education_level == 'master'){
                str_total = '';
                str_qfy = "With a Masters Degree or higher you qualify for the Grade 9.";
            } else {
                if ((this.tally.experience / 12) >= 1){
                    str_qfy = "You have enough qualifying experience to qualify for the Grade 9.";
                } else {
                    if (total_years >= 1){
                        str_qfy = "Your combination of education and experience qualify you for the Grade 9.";
                    } else {
                        str_qfy = "Based on these calculations, you do not qualify for the Grade 9.";
                    };
                };
            };

            // Return the outcome html
            return this.outcomeString(str_total, str_qfy);
        },
        Grade11: function(){
            // Get the input values
            this.setExperience();
            this.setEducation();

            // Reset totals based on levels
            if (this.tally.education_level == 'master'){
                this.tally.education = 24 /3;
            }

            if (this.tally.education < 25){
                this.tally.education = 0;
            } else if (this.tally.education > 36) {
                this.tally.education -= 24;
            } else {
                this.tally.education -= 24;
            }

            // Calc years and months
            total = this.tally.education + this.tally.experience;
            total_years = Math.floor(total / 12);
            month_diff = parseInt(total - (total_years * 12));

            // Peform year and month string calculations
            str_total = this.qualifyString(total, total_years, month_diff);

            console.log(str_total);

            // Perform qualifications calculations
            if (this.tally.education_level == 'phd'){
                str_total = "";
                str_qfy = "With a PhD or higher you qualify for the Grade 11.";
            };

            if (this.tally.education_level  == 'no-degree' || this.tally.education_level == 'master-phd'){
                if (total_years >= 1){
                    str_qfy = "Your experience qualifies you for the Grade 11.";
                } else {
                    str_qfy = "Based on these calculations, you do not qualify for the Grade 11.";
                };
            };

            if (this.tally.education_level  == 'master' || this.tally.education_level == 'bachelor'){
                if ((this.tally.experience / 12) >= 1){
                    str_qfy = "You have enough qualifying experience to qualify for the Grade 11.";
                } else {
                    if (total_years >= 1){
                        str_qfy = "Your combination of education and experience qualify you for the Grade 11.";
                    } else {
                        str_qfy = "Based on these calculations, you do not qualify for the Grade 11.";
                    };
                };
            };

            if (this.tally.education_level == 'none'){
                if (total_years >= 1){
                    str_qfy = "Your experience qualifies you for the Grade 11.";
                } else {
                    str_qfy = "Based on these calculations, you do not qualify for the Grade 11.";
                }
            };

            // Return the outcome string
            return this.outcomeString(str_total, str_qfy);
        }
    };

    $(function(){
        // Initialize the Experience Calculator
        experience.init();
    });
}(jQuery));