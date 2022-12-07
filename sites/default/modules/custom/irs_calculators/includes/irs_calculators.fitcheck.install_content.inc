<?php

/*
 * Fit Check Default Questions for installing
 */

$fitcheck_questions = array();

$fitcheck_questions['academic-study'] = array(
  'question' => 'What is your field of academic study?',
  'options' => array(
    array(
      'title' => 'Accounting/Finance',
      'weight' => '5,4,3,4,4,2,2'
    ),
    array(
      'title' => 'Business/Marketing',
      'weight' => '3,4,3,5,4,2,2',
    ),
    array(
      'title' => 'Computer Science/IT & Engineering',
      'weight' => '1,1,1,2,1,5,3'
    ),
    array(
      'title' => 'Mathematics/Statistics',
      'weight' => '3,3,2,3,5,3,2'
    ),
    array(
      'title' => 'Law',
      'weight' => '2,4,3,2,1,2,5'
    ),
  )
);

$fitcheck_questions['ideal-job'] = array(
  'question' => 'Which of the following would your ideal job include?',
  'options' => array(
    array(
      'title' => 'Creating technology applications or tools',
      'weight' => '1,1,1,1,1,5,1'
    ),
    array(
      'title' => 'Managing specific projects or clients',
      'weight' => '4,4,5,4,4,3,3'
    ),
    array(
      'title' => 'Working with numbers',
      'weight' => '5,5,5,5,5,5,5'
    ),
    array(
      'title' => 'Working in a team environment',
      'weight' => '5,5,5,5,5,5,5'
    ),
    array(
      'title' => 'A dynamic environment with no set day-to-day schedule',
      'weight' => '4,4,1,1,4,3,5'
    ),
  ),
);

$fitcheck_questions['travel'] = array(
  'question' => 'Are you seeking a position that involves travel?',
  'options' => array(
    array(
      'title' => 'No, I do not wish to travel',
      'weight' => '1,1,5,1,4,5,1'
    ),
    array(
      'title' => 'Some travel is okay',
      'weight' => '5,5,1,4,3,3,3'
    ),
    array(
      'title' => 'I\'m willing to travel more than 50% of the time',
      'weight' => '1,1,1,2,1,1,5'
    ),
  ),
);

$fitcheck_questions['five-year'] = array(
  'question' => 'In what area of the IRS would you see yourself in five years?',
  'options' => array(
    array(
      'title' => 'Law Enforcement',
      'weight' => '1,1,1,1,1,1,5'
    ),
    array(
      'title' => 'Accounting',
      'weight' => '5,4,3,4,4,2,2'
    ),
    array(
      'title' => 'Information & Technology',
      'weight' => '1,1,1,1,1,5,1'
    ),
    array(
      'title' => 'Internal Support Role',
      'weight' => '3,5,5,3,5,1,1'
    ),
  ),
);

$fitcheck_questions['work-preference'] = array(
  'question' => 'Would you prefer to work internally at the IRS or externally with taxpayers?',
  'options' => array(
    array(
      'title' => 'Internally',
      'weight' => '1,1,1,1,1,5,1'
    ),
    array(
      'title' => 'Externally',
      'weight' => '5,5,5,5,5,1,5'
    ),
  ),
);


/*
 * Fit Check Default Content for installing
 */

$fitcheck_content = array();

$fitcheck_content['title'] = array(
  'body' => 'Which IRS Career Is Right For Me?'
);

$fitcheck_content['body'] = array(
  /*'body' => '<div class="introduction"><p>If you want to build the kind of career that enables growth for the entire nation, the IRS is the right place for you. There are more career opportunities here than you may have realized –it takes the talents of many professionals to help America achieve more.</p><p>Not sure what kind of career with the IRS you should pursue? Answer these five questions to find out what potential careers will make the best of your talents and skills within the agency that’s funding America’s future.</p></div>'*/
  'body' => '<div class="introduction"><h3 class="title">Find out where you fit <br/>in the IRS</h3></div>'
);

$fitcheck_content['internal-revenue-agents'] = array(
  'heading' => 'Your talents, skills and experience could be a good fit for a future as an Internal Revenue  Agent, Series 0512, Grade 5/7/9',
  'body' => "An independent and proactive decision-maker, you will  conduct field examinations of individual taxpayers and small businesses to  determine liability. You will use the latest in computers, telecommunications and data management systems, and apply  your knowledge of Internal Revenue Code, rulings, court decisions, agency  policies, regulations and more.",
  'more-info-url' => '',
);

$fitcheck_content['taxpayer-advisory'] = array(
  'heading' => 'Your talents, skills and experience could be a good fit for a future as an Individual Taxpayer  Advisory Specialist, Series 0501, Grade 5/7/9',
  'body' => "A professional, courteous and effective communicator, you’ll  work directly with taxpayers to advise and resolve collection issues – from  researching complex tax law to providing basic instruction on filing  requirements and extensions – to help them fulfill their Federal Tax  obligations. You will conduct interviews and review records to gain an  understanding of each taxpayer’s financial status, facilitate resolutions and  educate them on the consequences of various courses of action.",
  'more-info-url' => ''
);

$fitcheck_content['information-technology'] = array(
  'heading' => 'Your talents, skills and experience could be a good fit for a future as an Information  Technology Specialist (multiple specialties) Series 2210, Grade 5/7/9',
  'body' => 'Your strong knowledge and skill in applying IT principles,  methods and practices will allow you to excel in this position. You’ll be  responsible for assignments, defined by your supervisor, dealing with immediate  local issues or support on larger issues – from troubleshooting network issues  to testing and debugging programs according to detailed requirements.',
  'more-info-url' => ''
);

$fitcheck_content['tax-compliance-officer'] = array(
  'heading' => 'Your talents, skills and experience could be a good fit for a future as a Tax Compliance Officer,  Series 0526, Grade 5/7',
  'body' => "Working with small businesses, exempt organizations,  government entities and other clients with complex tax issues, you’ll  investigate liability issues, conduct financial condition analyses, advise and  audit taxpayers. Your knowledge of special features or varied issues that  require the application of certain tax laws and investigative techniques set  your work apart.",
  'more-info-url' => ''
);

$fitcheck_content['contact-representatives'] = array(
  'heading' => 'Your talents, skills and experience could be a good fit for a future as a Contact Representative,  Series 0962, Grade 4/5/6/7',
  'body' => "As the face of the IRS to many citizens, you’ll work  directly with taxpayers in person and on the telephone to provide procedural  and technical advice and explanations related to some basic issues, such as  individual and employment tax returns, related schedules and inquiries about  bills and notices. With the support of your supervisors, you’ll work to  interview and resolve issues, and elevate more complex problems to other  departments.",
  'more-info-url' => ''
);

$fitcheck_content['internal-revenue-officer'] = array(
  'heading' => 'Your talents, skills and experience could be a good fit for a future as an Internal Revenue Officer,  Series 1169, Grade 5/7',
  'body' => 'You will work directly with delinquent taxpayers, in their  homes, places of business or offices to counsel them on obligations, provide  guidance on a wide range of financial problems and assist them toward a  positive course of action. You will become familiar with the client, observing  indications of hardship or business failure, and assessing their ability to pay  outstanding taxes. Your goal is to resolve all delinquencies with a clear  course of action. In some cases, when appropriate, you will conduct  investigations and take enforced collection actions.',
  'more-info-url' => ''
);

$fitcheck_content['criminal-investigation-special-agent'] = array(
  'heading' => 'Your talents, skills and experience could be a good fit for a future as a Criminal Investigation Special Agent, Series 1811, Grade 5/7/9',
  'body' => 'As an IRS CI Special Agent, you will combine your accounting skills with law enforcement skills to investigate financial crimes. Special Agents are duly sworn law enforcement officers who are trained to ‘follow the money.’ No matter what the source, all income earned, both legal and illegal, has the potential of becoming involved in crimes which fall within the investigative jurisdiction of the IRS Criminal Investigation. Because of the expertise required to conduct these complex financial investigations, IRS Special Agents are considered the premier financial investigators for the Federal Government.',
  'more-info-url' => ''
);