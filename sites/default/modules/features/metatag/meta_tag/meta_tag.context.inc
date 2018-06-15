<?php
/**
 * @file
 * meta_tag.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function meta_tag_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'khuyen-mai';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'khuyen-mai' => 'khuyen-mai',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'title' => array(
            'value' => 'Tất cả các Khuyến mại | [site:name]',
          ),
          'description' => array(
            'value' => 'Cập nhật tất cả các mã giảm giá , chương trình khuyến mại tại zalora, lazada, iki, Cdiscount, Mytour.. các trang web lớn ở VN, chia sẻ kinh nghiệm mua hàng online',
          ),
          'abstract' => array(
            'value' => 'Makhuyenmaihot.info',
          ),
          'keywords' => array(
            'value' => 'chương trình khuyến mại, khuyến mại, Mã giảm giá,  [site:name], Makhuyenmaihot.info, ma giam gia, magiamgia',
          ),
          'robots' => array(
            'value' => array(
              'index' => 'index',
              'follow' => 'follow',
              'noindex' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
          ),
          'news_keywords' => array(
            'value' => 'chương trình khuyến mại, khuyến mại, Mã giảm giá,  [site:name], Makhuyenmaihot.info, ma giam gia, magiamgia',
          ),
          'image_src' => array(
            'value' => '/sites/default/files/logo.png',
          ),
          'itemtype' => array(
            'value' => 'Event',
          ),
          'itemprop:name' => array(
            'value' => 'Tất cả các Khuyến mại | [site:name]',
          ),
          'itemprop:description' => array(
            'value' => 'Cập nhật tất cả các mã giảm giá , chương trình khuyến mại tại zalora, lazada, iki, Cdiscount, Mytour.. các trang web lớn ở VN, chia sẻ kinh nghiệm mua hàng online',
          ),
          'itemprop:image' => array(
            'value' => '/sites/default/files/logo.png',
          ),
          'twitter:title' => array(
            'value' => 'Tất cả các Khuyến mại | [site:name]',
          ),
          'twitter:description' => array(
            'value' => 'Cập nhật tất cả các mã giảm giá , chương trình khuyến mại tại zalora, lazada, iki, Cdiscount, Mytour.. các trang web lớn ở VN, chia sẻ kinh nghiệm mua hàng online',
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['khuyen-mai'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'store';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'store' => 'store',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'title' => array(
            'value' => 'Tất cả các thương hiệu - [site:name]',
          ),
          'description' => array(
            'value' => 'Tất cả các thương hiệu và các chương trinh khuyến mại, mã giảm giá Lazada, Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
          ),
          'robots' => array(
            'value' => array(
              'index' => 'index',
              'follow' => 'follow',
              'noindex' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
          ),
          'itemprop:description' => array(
            'value' => 'Tất cả các thương hiệu và các chương trinh khuyến mại, mã giảm giá Lazada, Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
          ),
          'og:description' => array(
            'value' => 'Tất cả các thương hiệu và các chương trinh khuyến mại, mã giảm giá Lazada, Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
          ),
          'twitter:description' => array(
            'value' => 'Tất cả các thương hiệu và các chương trinh khuyến mại, mã giảm giá Lazada, Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['store'] = $context;

  return $export;
}
