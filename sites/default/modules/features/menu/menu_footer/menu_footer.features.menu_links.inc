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

  // Exported menu link: menu-menu-footer_hng-dn:huong-dan.
  $menu_links['menu-menu-footer_hng-dn:huong-dan'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'huong-dan',
    'router_path' => 'huong-dan',
    'link_title' => 'Hướng Dẫn',
    'options' => array(
      'attributes' => array(
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
      'identifier' => 'menu-menu-footer_hng-dn:huong-dan',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-footer_khuyn-mi:khuyen-mai.
  $menu_links['menu-menu-footer_khuyn-mi:khuyen-mai'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'khuyen-mai',
    'router_path' => 'khuyen-mai',
    'link_title' => 'Khuyến Mại',
    'options' => array(
      'identifier' => 'menu-menu-footer_khuyn-mi:khuyen-mai',
      'attributes' => array(
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
  // Exported menu link: menu-menu-footer_qu-tng:qua-tang.
  $menu_links['menu-menu-footer_qu-tng:qua-tang'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'qua-tang',
    'router_path' => 'qua-tang',
    'link_title' => 'Quà Tặng',
    'options' => array(
      'attributes' => array(
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
      'identifier' => 'menu-menu-footer_qu-tng:qua-tang',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
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
  // Exported menu link: menu-menu-footer_t-vn-nh-gi:tu-van-danh-gia.
  $menu_links['menu-menu-footer_t-vn-nh-gi:tu-van-danh-gia'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'tu-van-danh-gia',
    'router_path' => 'tu-van-danh-gia',
    'link_title' => 'Tư Vấn Đánh Giá',
    'options' => array(
      'attributes' => array(
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
      'identifier' => 'menu-menu-footer_t-vn-nh-gi:tu-van-danh-gia',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
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
  // Exported menu link: menu-menu-footer_tin-khuyn-mi:tin-khuyen-mai.
  $menu_links['menu-menu-footer_tin-khuyn-mi:tin-khuyen-mai'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'tin-khuyen-mai',
    'router_path' => 'tin-khuyen-mai',
    'link_title' => 'Tin Khuyến Mại',
    'options' => array(
      'attributes' => array(
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
      'identifier' => 'menu-menu-footer_tin-khuyn-mi:tin-khuyen-mai',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Hướng Dẫn');
  t('Khuyến Mại');
  t('Liên Hệ');
  t('Quà Tặng');
  t('Sản Phẩm');
  t('Thương Hiệu');
  t('Tin Khuyến Mại');
  t('Tư Vấn Đánh Giá');

  return $menu_links;
}
