<?php

/**
 * @file
 * Contains admin configuration form functions.
 */

/**
 * Callback for admin configuration form.
 */
function fb_random_autopost_admin_settings_form($form, $form_state) {
  if (!fb_random_autopost_load_sdk()) {
    drupal_set_message(t('Facebook SDK missing. Please check the Readme.txt file.'), 'error');
  }

  $form['fb_api'] = array(
    '#type' => 'fieldset',
    '#title' => t('Facebook APP details'),
    '#collapsible' => TRUE,
  );

  $form['fb_api']['fb_random_autopost_app_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook app ID'),
    '#required' => TRUE,
    '#default_value' => variable_get('fb_random_autopost_app_id', ''),
  );

  $form['fb_api']['fb_random_autopost_app_secret'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook app secret'),
    '#required' => TRUE,
    '#default_value' => variable_get('fb_random_autopost_app_secret', ''),
  );

  $node_types = node_type_get_types();
  $options = array();

  foreach ($node_types as $node_type) {
    $options[$node_type->type] = $node_type->name;
  }

  $form['other'] = array(
    '#type' => 'fieldset',
    '#title' => t('Other'),
    '#collapsible' => TRUE,
  );

  $form['other']['fb_random_autopost_node_types'] = array(
    '#type' => 'select',
    '#title' => t('Node types'),
    '#options' => $options,
    '#description' => t('Only nodes of selected types will be posted to facebook'),
    '#required' => TRUE,
    '#multiple' => TRUE,
    '#default_value' => variable_get('fb_random_autopost_node_types', array()),
  );

  $form['other']['fb_random_autopost_post_times'] = array(
    '#type' => 'select',
    '#title' => t('Post at'),
    '#options' => fb_random_autopost_get_time_options(),
    '#required' => TRUE,
    '#description' => t('Time of the day at which post should be published on facebook'),
    '#default_value' => variable_get('fb_random_autopost_post_times', ''),
    '#multiple' => TRUE,
  );

  $form['other']['fb_random_autopost_older_than'] = array(
    '#type' => 'textfield',
    '#title' => t('Include posts older than following number of days'),
    '#required' => TRUE,
    '#default_value' => variable_get('fb_random_autopost_older_than', 0),
    '#size' => 10,
  );

  $form['other']['fb_random_autopost_repeat_days'] = array(
    '#type' => 'textfield',
    '#title' => t('Do not repeat posts in less than following number of days'),
    '#required' => TRUE,
    '#default_value' => variable_get('fb_random_autopost_repeat_days', 30),
    '#size' => 10,
  );

  $pages = fb_random_autopost_fb_page_list();

  $form['other']['fb_random_autopost_fb_page'] = array(
    '#type' => 'select',
    '#title' => t('Facebook page'),
    '#options' => $pages,
    '#required' => (count($pages) > 1) ? 1 : 0,
    '#description' => t('Select a facebook page to which nodes will be posted'),
    '#default_value' => variable_get('fb_random_autopost_fb_page', ''),
  );

  $form = system_settings_form($form);

  $sync_access = 0;

  if (variable_get('fb_random_autopost_app_id') && variable_get('fb_random_autopost_app_secret')) {
    $sync_access = 1;
  }

  $form['actions']['sync_fb_pages'] = array(
    '#type' => 'submit',
    '#value' => t('Synchronize Facebook pages'),
    '#submit' => array('fb_random_autopost_fb_connect_submit'),
    '#limit_validation_errors' => array(),
    '#disabled' => !$sync_access,
  );

  return $form;
}

/**
 * Submit callback for sync facebook page button.
 */
function fb_random_autopost_fb_connect_submit($form, $form_state) {
  if ($fb = fb_random_autopost_load_sdk()) {
    global $base_url;
    $fb_callback_url = $base_url . '/fb-random-autopost-callback';
    $helper = $fb->getRedirectLoginHelper();
    $permissions = ['manage_pages', 'publish_pages'];
    $login_url = $helper->getLoginUrl($fb_callback_url, $permissions);
    drupal_goto($login_url);
  }
  else {
    drupal_set_message(t('Facebook SDK not available'), 'error');
  }
}

/**
 * Generates an array of time with 15 mins increment.
 */
function fb_random_autopost_get_time_options() {
  $begin = new DateTime('00:00');
  $end = new DateTime('24:00');

  $interval = DateInterval::createFromDateString('60 min');
  $times = new DatePeriod($begin, $interval, $end);

  $options = array();

  foreach ($times as $time) {
    $key = $time->format('H');
    $options[$key] = $time->format('H');
  }

  return $options;
}
