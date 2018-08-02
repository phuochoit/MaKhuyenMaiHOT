<?php
/**
 * Implements hook_html_head_alter().
 * We are overwriting the default meta character type tag with HTML5 version.
 */
function loiviphamgiaothong_html_head_alter(&$head_elements) {
    $head_elements['system_meta_content_type']['#attributes'] = array(
        'charset' => 'utf-8'
    );
}

/**
 * Return a themed breadcrumb trail.
 *
 * @param $breadcrumb
 *   An array containing the breadcrumb links.
 * @return a string containing the breadcrumb output.
 */
function loiviphamgiaothong_breadcrumb($variables) {
    $breadcrumb = (drupal_is_front_page()) ? null : $variables['breadcrumb'];

    if (!empty($breadcrumb)) {
        $heading = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
        return '<nav class="breadcrumb">' . $heading . implode(' » ', $breadcrumb) . '</nav>';
    }
}

/**
 * Duplicate of theme_menu_local_tasks() but adds clearfix to tabs.
 */
function loiviphamgiaothong_menu_local_tasks(&$variables) {
    $output = '';
    if (!empty($variables['primary'])) {
        $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
        $variables['primary']['#prefix'] .= '<ul class="nav nav-tabs clearfix">';
        $variables['primary']['#suffix'] = '</ul>';
        $output .= drupal_render($variables['primary']);
    }
    if (!empty($variables['secondary'])) {
        $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
        $variables['secondary']['#prefix'] .= '<ul class="nav nav-tabs secondary clearfix">';
        $variables['secondary']['#suffix'] = '</ul>';
        $output .= drupal_render($variables['secondary']);
    }
    return $output;
}

/**
 *  theme_menu_local_tasks_alter
 *  add class to link
 */
function loiviphamgiaothong_menu_local_tasks_alter(&$data, $router_item, $root_path){
    if(isset($data['tabs'][0])){
        $tabs =  $data['tabs'][0];  
        $i = 1; 
        $attributes = array(
            'attributes' => array(
                'class' => array('nav-link')
            )
        );
        foreach($tabs['output'] as &$t){
            $t['#link']['localized_options'] = $attributes; 
        }
        $data['tabs'][0] = $tabs;
    }
}

/**
 * theme_menu_local_task
 * remove class active in li
 */
function loiviphamgiaothong_menu_local_task($variables) {
    $link = $variables['element']['#link'];
    $link_text = $link['title'];
    if (!empty($variables['element']['#active'])) {
        $active = '<span class="element-invisible">' . t('(active tab)') . '</span>';
        if (empty($link['localized_options']['html'])) {
            $link['title'] = check_plain($link['title']);
        }
        $link['localized_options']['html'] = TRUE;
        $link_text = t('!local-task-title!active', array(
            '!local-task-title' => $link['title'],
            '!active' => $active,
        ));
    }
    return '<li class="nav-item">' . l($link_text, $link['href'], $link['localized_options']) . "</li>\n";
}

/**
 * Override or insert variables into the node template.
 */
function loiviphamgiaothong_preprocess_node(&$variables) {
    $variables['submitted'] = t('Published by !username on !datetime', array('!username' => $variables['name'], '!datetime' => $variables['date']));
    if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
        $variables['classes_array'][] = 'node-full';
    }
}

/**
 * Preprocess variables for region.tpl.php
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
function loiviphamgiaothong_preprocess_region(&$variables, $hook) {
    // Use a bare template for the content region.
    if ($variables['region'] == 'content') {
        $variables['theme_hook_suggestions'][] = 'region__bare';
    }
}

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
function loiviphamgiaothong_preprocess_block(&$variables, $hook) {
    // Use a bare template for the page's main content.
    if ($variables['block_html_id'] == 'block-system-main') {
        $variables['theme_hook_suggestions'][] = 'block__bare';
    }
    $variables['title_attributes_array']['class'][] = 'block-title';
}

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
function loiviphamgiaothong_process_block(&$variables, $hook) {
    // Drupal 7 should use a $title variable instead of $block->subject.
    $variables['title'] = $variables['block']->subject;
}

/**
 * Changes the search form to use the "search" input element of HTML5.
 */
function loiviphamgiaothong_preprocess_search_block_form(&$vars) {
    $vars['search_form'] = str_replace('type="text"', 'type="search"', $vars['search_form']);
}
/**
 * hook preprocess_page
 */
function loiviphamgiaothong_preprocess_page(&$variables) {
    if(drupal_is_front_page()) {
        drupal_set_title('');
    }
    $header = drupal_get_http_header('status'); 
    if ($header == '404 Not Found') {     
        $variables['theme_hook_suggestions'][] = 'page__404';
    }
}
/**
 * hook preprocess_html
 */
function loiviphamgiaothong_preprocess_html(&$variables) {

}