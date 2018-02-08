<?php
/**
 * Implements hook_html_head_alter().
 * We are overwriting the default meta character type tag with HTML5 version.
 */
function makhuyenmai_html_head_alter(&$head_elements) {
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
function makhuyenmai_breadcrumb($variables) {
    $breadcrumb[] = l('Home','<front>');

    if (!empty($breadcrumb)) {
        // Provide a navigational heading to give context for breadcrumb links to
        // screen-reader users. Make the heading invisible with .element-invisible.
        $heading = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
        // Uncomment to add current page to breadcrumb
        // $breadcrumb[] = drupal_get_title();
        return '<nav class="breadcrumb">' . $heading . implode(' » ', $breadcrumb) . '</nav>';
    }
}

/**
 * Duplicate of theme_menu_local_tasks() but adds clearfix to tabs.
 */
function makhuyenmai_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs primary clearfix">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs secondary clearfix">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }
  return $output;
}

/**
 * Override or insert variables into the node template.
 */
function makhuyenmai_preprocess_node(&$variables) {
    
    $variables['submitted'] = t('Published by !username on !datetime', array('!username' => $variables['name'], '!datetime' => $variables['date']));
    if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
        $variables['classes_array'][] = 'node-full';
    }
    if($variables['node']->type == 'san_pham'){
        if(empty($variables['node']->field_get_content) || $variables['node']->field_get_content['und'][0]['value'] == 1){
            dpm($variables['node']);
            $url = $variables['node']->field_url_khuyen_mai['und'][0]['url'];
            $merchant = $variables['node']->field_merchant['und'][0]['value'];
            $content = _dom_html_from_url($url,$merchant);
            if(!empty($content)){
                $node = node_load($variables['node']->nid);
                $node->field_get_content['und'][0]['value'] = 0;
                $node->body['und'][0]['value'] = $content;
                node_save($node);
            }
        }
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
function makhuyenmai_preprocess_region(&$variables, $hook) {
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
function makhuyenmai_preprocess_block(&$variables, $hook) {
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
function makhuyenmai_process_block(&$variables, $hook) {
  // Drupal 7 should use a $title variable instead of $block->subject.
  $variables['title'] = $variables['block']->subject;
}

/**
 * Changes the search form to use the "search" input element of HTML5.
 */
function makhuyenmai_preprocess_search_block_form(&$vars) {
  $vars['search_form'] = str_replace('type="text"', 'type="search"', $vars['search_form']);
}

function _getUrlContent($url){
    $ch = curl_init();
    curl_setopt($ch, CURLOPT_AUTOREFERER, TRUE);
    curl_setopt($ch, CURLOPT_HEADER, 0);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
    curl_setopt($ch, CURLOPT_URL, $url);
    curl_setopt($ch, CURLOPT_FOLLOWLOCATION, TRUE);       
    $data = curl_exec($ch);
    curl_close($ch);

    return $data;
}

function _dom_html_from_url($url, $domain){
    if(empty($url) || empty($domain)) return;
    switch ($domain) {
        case 'fptshop':
            $dom = _getUrlContent($url);
            $classname = 'fs-dtctbox clearfix';
            $dom = _getUrlContent($url);
            $bodycontainer = _getHTMLByCLASS($classname,$dom);
            return $bodycontainer;
        case 'lazada':
            $classname = 'l-fluid-description__text-wrap';
            $dom = _getUrlContent($url);
            $bodycontainer = _getHTMLByCLASS($classname,$dom);
            return $bodycontainer;
        case 'tiki.vn':
            $dom = _getUrlContent($url);
            $bodycontainer = _getHTMLByID('gioi-thieu', $dom);
            return $bodycontainer;
        case 'www.lotte.vn':
            $dom = _getUrlContent($url);
            $bodycontainer = _getHTMLByID('tab_content_product_introduction', $dom);
            return $bodycontainer;
    }
}


function _getHTMLByCLASS($class, $html){
    $innerHTML = ''; 
    $dom = new DOMDocument;
    libxml_use_internal_errors(true);
    $dom->loadHTML('<?xml encoding="UTF-8">'.$html);
    $dom->encoding = 'UTF-8';
    $xpath   = new DOMXPath($dom);
    $elements = $xpath->query("//div[@class='$class']");
    foreach ($elements as $child) { 
        $tmp_doc = new DOMDocument(); 
        $tmp_doc->appendChild($tmp_doc->importNode($child,true));   
        $innerHTML .= $tmp_doc->saveHTML(); 
    }
    dpm($innerHTML);
    if(!empty($innerHTML)){
        return _preg_replace_content($innerHTML);
    }
    return FALSE;
}

function _preg_replace_content($html){
    $html = preg_replace('#<noscript(.*?)>(.*?)</noscript>#is', '', $html);
    // $html = preg_replace('/src="(.+?)"/','',$html); // Removes the old src
    $html = str_replace('data-original','src',$html); 
    return $html;
}
// DOMDocument by id
function _getHTMLByID($id, $html) {
    $dom = new DOMDocument;
    libxml_use_internal_errors(true);
    $dom->loadHTML('<?xml encoding="UTF-8">'.$html);
    $dom->encoding = 'UTF-8';
    $node = $dom->getElementById($id);
    if ($node) {
        return $dom->saveHTML($node);
    }
    return FALSE;
}