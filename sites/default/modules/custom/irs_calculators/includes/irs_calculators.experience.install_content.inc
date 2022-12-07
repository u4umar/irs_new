<?php

/*
 * Experience Questions for installing
 */

$experience_questions = array();

$experience_questions['content'] = array(
  'title' => 'Experience Calculator',
  'body' => '
      <p>Not quite sure what your Work Experience
      and Education is equivalent to? Try the Experience Calculator!
      The purpose of the Experience Calculator is to assist you in determining which grade you are qualified for. Start Now!
      </p>
  '
);

$experience_questions['grade'] = array(
  'title' => '<strong>Part I</strong> To begin, select a Grade',
  'trigger-field' => 'work-experience',
  'options' => array(
    '5' => array(
      'title' => 'Grade 5',
      'trigger' => array('bachelor', 'no-degree', 'none'),
    ),
    '7' => array(
      'title' => 'Grade 7',
      'trigger' => array('academic', 'bachelor-grad', 'bachelor', 'no-degree', 'none')
    ),
    '9' => array(
      'title' => 'Grade 9',
      'trigger' => array('master', 'bachelor-grad', 'bachelor', 'no-degree', 'none')
    ),
    '11' => array(
      'title' => 'Grade 11',
      'trigger' => array('phd', 'master-phd', 'master', 'bachelor', 'no-degree', 'none')
    )
  ),
);

$experience_questions['work-experience'] = array(
  'title' => '<strong>Part II</strong> Please provide your work experience.',
  'options' => array(
      'week' => array(
        'title' => 'Hours per week worked'
      ),
      'month' => array(
        'title' => 'Number of months worked'
      )
  ),
);

$experience_questions['education'] = array(
  'title' => '<strong>Part III</strong> Now, select your highest level of college education',
  'options' => array(
    'academic' => array(
      'title' => '1 Academic year of Graduate Education or Higher'
    ),
    'phd' => array(
      'title' => 'PhD Degree or Higher'
    ),
    'master-phd' => array(
      'title' => 'Graduate Education Above Master\'s Degree (towards PhD)',
      'condition' => array(
        array(
          'description' => 'Grade 11 selection',
          'type' => 'grade',
          'value' => '11',
          'inputs' => array(
            '[:semester-hours]' => '<input class="" title="Enter semester hours" maxlength="4" tabindex="3" value="" name="semester-hours">',
            '[:quarter-hours]' => '<input class="" title="Enter quarter hours" maxlength="4" tabindex="4" value="" name="quarter-hours">',
          ),
          'body' =>
            '<p>Let\'s see if you qualify with a combination of Work Experience and Education.
            <br/>
            (You must include the total hours of graduate education including the ones obtained in your Master\'s Degree.)
            </p>
            <p>
                Enter semester hours:
                [:semester-hours]
                Enter quarter hours:
                [:quarter-hours]
            </p>'),
      )
    ),
    'master' => array(
      'title' => 'Master\'s Degree or Higher'
    ),
    'bachelor-grad' => array(
      'title' => 'Bachelor\'s Degree with Some Graduate Education',
      'condition' => array(
        array(
          'description' => 'Grade 9 selection',
          'type' => 'grade',
          'value' => '9',
          'inputs' => array(
            '[:semester-hours]' => '<input class="" title="Enter semester hours" maxlength="4" tabindex="3" value="" name="semester-hours">',
            '[:quarter-hours]' => '<input class="" title="Enter quarter hours" maxlength="4" tabindex="4" value="" name="quarter-hours">',
          ),
          'body' =>
            '<p>
            Let\'s see if you qualify with a combination of Work Experience and Education.
            <br/>(Include the hours of graduate education only.)
            </p>
            <p>
                Enter semester hours:
                [:semester-hours]
                Enter quarter hours:
                [:quarter-hours]
            </p>'
        ),
        array(
          'description' => 'Grade 7 selection',
          'type' => 'question',
          'value' => '7',
          'body' => 'saa'
        )
      )
    ),
    'bachelor-under' => array(
      'title' => 'Bachelor\'s Degree or Higher'
    ),
    'bachelor' => array(
      'title' => 'Bachelor\'s Degree',
      'condition' => array(
        array(
          'description' => 'Grade 7 selection',
          'type' => 'question',
          'value' => '7',
          'body' => 'saa'
        ),
      ),
    ),
    'no-degree' => array(
      'title' => 'No Degree, Some Undergraduate Education',
      'condition' => array(
        array(
            'description' => 'Grade 5 selection',
            'type' => 'grade',
            'value' => '5',
            'inputs' => array(
              '[:semester-hours]' => '<input class="" title="Enter semester hours" maxlength="4" tabindex="3" value="" name="semester-hours">',
              '[:quarter-hours]' => '<input class="" title="Enter quarter hours" maxlength="4" tabindex="4" value="" name="quarter-hours">',
            ),
            'body' =>
              '<p>Let\'s see if you qualify with a combination of Work Experience and Education.</p>
              <p>
                  Enter semester hours:
                    [:semester-hours]
                  Enter quarter hours:
                    [:quarter-hours]
              </p>'
        ),
      )
    ),
    'none' => array(
      'title' => 'No College'
    ),
  )
);

$experience_questions['saa'] = array(
  'type' => 'question-condition',
  'title' => '<strong>Part IV</strong> Let\'s see if you qualify for Superior Academic Achievement (SAA)',
  'options' => array(),
  'inputs' => array(
    '[:semester-hours]' => '<input type="text" class="" title="Enter semester hours" maxlength="4" value="" name="semester-hours">',
    '[:quarter-hours]' => '<input type="text" class="" title="Enter quarter hours" maxlength="4" value="" name="quarter-hours">',
    '[:semester-grade-a]' => '<input type="text" name="semester-grade-a" class="" value="" title="Semester hours where an A grade was earned" />',
    '[:semester-grade-b]' => '<input type="text" name="semester-grade-b" class="" value="" maxlength="4" title="Semester hours where an B grade was earned" />',
    '[:semester-grade-c]' => '<input type="text" name="semester-grade-c" class="" value="" maxlength="4" title="Semester hours where an C grade was earned" />',
    '[:semester-grade-d]' => '<input type="text" name="semester-grade-d" class="" value="" maxlength="4" title="Semester hours where an D grade was earned" />',
    '[:semester-grade-f]' => '<input type="text" name="semester-grade-f" class="" value="" maxlength="4" title="Semester hours where an F grade was earned" />',
    '[:quarter-grade-a]' => '<input type="text" name="quarter-grade-a" class="" value="" maxlength="4" title="Quarter hours where an A grade was earned" />',
    '[:quarter-grade-b]' => '<input type="text" name="quarter-grade-b" class="" value="" maxlength="4" title="Quarter hours where an B grade was earned" />',
    '[:quarter-grade-c]' => '<input type="text" name="quarter-grade-c" class="" value="" maxlength="4" title="Quarter hours where an C grade was earned" />',
    '[:quarter-grade-d]' => '<input type="text" name="quarter-grade-d" class="" value="" maxlength="4" title="Quarter hours where an D grade was earned" />',
    '[:quarter-grade-f]' => '<input type="text" name="quarter-grade-f" class="" value="" maxlength="4" title="Quarter hours where an F grade was earned" />',
    '[:bachelor-not-applicable]' => '<input type="radio" name="bachelor-only" value="NA"  title="Not Applicable" />',
    '[:bachelor-3-plus-all]' => '<input type="radio" name="bachelor-only" value="3-plus"  title="3.0 or higher on a 4.0 scale for all completed courses" />',
    '[:bachelor-3-plus-2yr]' => '<input type="radio" name="bachelor-only" value="3-plus-2yr"  title="3.0 or higher on a 4.0 scale for all completed courses in the last two years of study" />',
    '[:bachelor-3-5-all]' => '<input type="radio" name="bachelor-only" value="3-5-all"  title="3.5 or higher on a 4.0 scale for all completed courses in the major field of study" />',
    '[:bachelor-3-5-2yr]' => '<input type="radio" name="bachelor-only" value="3-5-2yr"  title="3.5 or higher on a 4.0 scale for all completed courses in the major completed in the last two years." />',
    '[:bachelor-upper-3rd]' => '<input type="radio" name="bachelor-only" value="upper-3rd"  title="Class standing - upper third of the graduating class in college" />',
    '[:bachelor-honor]' => '<input type="radio" name="bachelor-only" value="honor"  title="Honor Association - membership in one of the national scholastic honor societies" />',
    '[:start:only-for-some-education]' => '<div class="" data-js-show="bachelor-grad">',
    '[:stop:only-for-some-education]' => '</div>'
  ),
  'body' => '
    <p>Fill in your grades below</p>
    <p>
    <table>
        <tr><td colspan="4">Enter number of credits earned at each grade level</td></tr>
        <tr>
         <td>
          <table>
               <thead>
               <tr><td colspan="6" class="style1">Semester</td></tr>
               <tr>
                  <th id="Semester hours where an A grade was earned">A</th>
                  <th id="Semester hours where an B grade was earned">B</th>
                  <th id="Semester hours where an C grade was earned">C</th>
                  <th id="Semester hours where an D grade was earned">D</th>
                  <th id="Semester hours where an F grade was earned">F</th>
                  <th id="Calculated GPA for Semester Hours" scope="col">GPA</th>
               </tr>
               </thead>
               <tr>
                  <td>[:semester-grade-a]</td>
                  <td>[:semester-grade-b]</td>
                  <td>[:semester-grade-c]</td>
                  <td>[:semester-grade-d]</td>
                  <td>[:semester-grade-f]</td>
                  <td title="Semester hours GPA"></td>
               </tr>
            </table>
        </td>
      </tr>
      <tr>
        <td>
          <table>
           <thead>
           <tr><td colspan="5" class="style1">Quarter</td></tr>
           <tr>
            <th id="Quarter hours where an A grade was earned">A</th>
            <th id="Quarter hours where an B grade was earned">B</th>
            <th id="Quarter hours where an C grade was earned">C</th>
            <th id="Quarter hours where an D grade was earned">D</th>
            <th id="Quarter hours where an F grade was earned">F</th>
            <th id="Calculated GPA for Quarter Hours">GPA</th>
           </tr>
           </thead>
           <tr>
            <td>[:quarter-grade-a]</td>
            <td>[:quarter-grade-b]</td>
            <td>[:quarter-grade-c]</td>
            <td>[:quarter-grade-d]</td>
            <td>[:quarter-grade-f]</td>
            <td title="Quarter hours GPA"></td>
           </tr>
          </table>
        </td>
        </tr>
    </table>
    <p>
        <ul>
          <li>[:bachelor-not-applicable] Not Applicable</li>
          <li>[:bachelor-3-plus-all] 3.0 or higher on a 4.0 scale for all completed courses</li>
          <li>[:bachelor-3-plus-2yr] 3.0 or higher on a 4.0 scale for all completed courses in the last two years of study.</li>
          <li>[:bachelor-3-5-all] 3.5 or higher on a	4.0 scale for all completed courses in the major field of study.</li>
          <li>[:bachelor-3-5-2yr] 3.5 or higher on a 4.0 scale for all completed courses in the major completed in the last two years.</li>
          <li>[:bachelor-upper-3rd] Class standing - upper third of the graduating class in college.</li>
          <li>[:bachelor-honor] Honor Association - membership in one of the national scholastic honor societies.</li>
       </ul>
    </p>
    [:start:only-for-some-education]
      <p>
          If you do not qualify for the grade 7 with SAA, you can still qualify with a combination of experience and education. Enter your semester/quarter hours below.
          <br/>
          (Include the hours of graduate education only.)
          <br/>
          Enter semester hours:
            [:semester-hours]
          Enter quarter hours:
            [:quarter-hours]
      </p>
    [:stop:only-for-some-education]
  ',
);