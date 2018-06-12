<?php
/**
 * @file
 * main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_hng-dn:huong-dan.
  $menu_links['main-menu_hng-dn:huong-dan'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'huong-dan',
    'router_path' => 'huong-dan',
    'link_title' => 'Hướng Dẫn',
    'options' => array(
      'identifier' => 'main-menu_hng-dn:huong-dan',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_xem-thm:<front>',
  );
  // Exported menu link: main-menu_khuyn-mi:khuyen-mai.
  $menu_links['main-menu_khuyn-mi:khuyen-mai'] = array(
    'menu_name' => 'main-menu',
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
      'identifier' => 'main-menu_khuyn-mi:khuyen-mai',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_lin-h:node/209.
  $menu_links['main-menu_lin-h:node/209'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/209',
    'router_path' => 'node/%',
    'link_title' => 'Liên Hệ',
    'options' => array(
      'identifier' => 'main-menu_lin-h:node/209',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_qu-tng:qua-tang.
  $menu_links['main-menu_qu-tng:qua-tang'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'qua-tang',
    'router_path' => 'qua-tang',
    'link_title' => 'Quà Tặng',
    'options' => array(
      'identifier' => 'main-menu_qu-tng:qua-tang',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_xem-thm:<front>',
  );
  // Exported menu link: main-menu_sn-phm:san-pham.
  $menu_links['main-menu_sn-phm:san-pham'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'san-pham',
    'router_path' => 'san-pham',
    'link_title' => 'Sản Phẩm',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_sn-phm:san-pham',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_t-vn-nh-gi:tu-van-danh-gia.
  $menu_links['main-menu_t-vn-nh-gi:tu-van-danh-gia'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tu-van-danh-gia',
    'router_path' => 'tu-van-danh-gia',
    'link_title' => 'Tư Vấn Đánh Giá',
    'options' => array(
      'identifier' => 'main-menu_t-vn-nh-gi:tu-van-danh-gia',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_xem-thm:<front>',
  );
  // Exported menu link: main-menu_thng-hiu:store.
  $menu_links['main-menu_thng-hiu:store'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'store',
    'router_path' => 'store',
    'link_title' => 'Thương Hiệu',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_thng-hiu:store',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_tin-khuyn-mi:tin-khuyen-mai.
  $menu_links['main-menu_tin-khuyn-mi:tin-khuyen-mai'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tin-khuyen-mai',
    'router_path' => 'tin-khuyen-mai',
    'link_title' => 'Tin Khuyến Mại',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_tin-khuyn-mi:tin-khuyen-mai',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_xem-thm:<front>',
  );
  // Exported menu link: main-menu_trang-ch:<front>.
  $menu_links['main-menu_trang-ch:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Trang chủ',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'fa fa-home',
        'style' => '',
      ),
      'identifier' => 'main-menu_trang-ch:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_xem-thm:<front>.
  $menu_links['main-menu_xem-thm:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Xem Thêm',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_xem-thm:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
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
  t('Trang chủ');
  t('Tư Vấn Đánh Giá');
  t('Xem Thêm');

  return $menu_links;
}
