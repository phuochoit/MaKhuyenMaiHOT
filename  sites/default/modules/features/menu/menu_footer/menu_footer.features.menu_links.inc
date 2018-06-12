<?php
/**
 * @file
 * menu_footer.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_footer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-footer_khuyn-mi:khuyen-mai.
  $menu_links['menu-menu-footer_khuyn-mi:khuyen-mai'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'khuyen-mai',
    'router_path' => 'khuyen-mai',
    'link_title' => 'Khuyến Mại',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-footer_khuyn-mi:khuyen-mai',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-footer_lin-h:node/209.
  $menu_links['menu-menu-footer_lin-h:node/209'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'node/209',
    'router_path' => 'node/%',
    'link_title' => 'Liên Hệ',
    'options' => array(
      'attributes' => array(
        'title' => 'Liên Hệ',
        'class' => array(
          0 => 'fa',
          1 => 'fa-angle-right',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-footer_lin-h:node/209',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-footer_sn-phm:san-pham.
  $menu_links['menu-menu-footer_sn-phm:san-pham'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'san-pham',
    'router_path' => 'san-pham',
    'link_title' => 'Sản Phẩm',
    'options' => array(
      'attributes' => array(
        'title' => 'Sản Phẩm',
        'class' => array(
          0 => 'fa',
          1 => 'fa-angle-right',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-footer_sn-phm:san-pham',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-footer_thng-hiu:store.
  $menu_links['menu-menu-footer_thng-hiu:store'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'store',
    'router_path' => 'store',
    'link_title' => 'Thương Hiệu',
    'options' => array(
      'attributes' => array(
        'title' => 'Thương Hiệu',
        'class' => array(
          0 => 'fa',
          1 => 'fa-angle-right',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-footer_thng-hiu:store',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Khuyến Mại');
  t('Liên Hệ');
  t('Sản Phẩm');
  t('Thương Hiệu');

  return $menu_links;
}
