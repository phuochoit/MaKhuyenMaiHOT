<?php
/**
 * @file
 * meta_tag.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function meta_tag_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] - [site:name]',
      ),
      'description' => array(
        'value' => 'Cập nhật mã giảm giá, chương trình khuyến mại, voucher, coupon , voucher lazada, khuyến mãi Lazada, coupon Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
      ),
      'abstract' => array(
        'value' => 'Chia sẻ mã giảm giá, khuyến mại',
      ),
      'keywords' => array(
        'value' => 'chương trình khuyến mại, khuyến mại, Mã giảm giá,  [site:name], Makhuyenmaihot.info, ma giam gia, magiamgia, voucher, coupon , khuyen mai, ma khuyen mai',
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
        'value' => 'chương trình khuyến mại, khuyến mại, Mã giảm giá,  [site:name], Makhuyenmaihot.info, ma giam gia, magiamgia, voucher, coupon , khuyen mai, ma khuyen mai',
      ),
      'standout' => array(
        'value' => '',
      ),
      'rating' => array(
        'value' => 'general',
      ),
      'referrer' => array(
        'value' => '',
      ),
      'generator' => array(
        'value' => '',
      ),
      'rights' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '[site:url]sites/default/files/logo-facebook.png',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'set_cookie' => array(
        'value' => '',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'geo.position' => array(
        'value' => '',
      ),
      'geo.placename' => array(
        'value' => '',
      ),
      'geo.region' => array(
        'value' => '',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'pragma' => array(
        'value' => '',
      ),
      'cache-control' => array(
        'value' => '',
      ),
      'expires' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
      ),
      'fb:app_id' => array(
        'value' => '187003351838948',
      ),
      'fb:pages' => array(
        'value' => 'https://www.facebook.com/makhuyenmaihot',
      ),
      'itemtype' => array(
        'value' => 'Article',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title] - [site:name]',
      ),
      'itemprop:description' => array(
        'value' => 'Cập nhật mã giảm giá , chương trình khuyến mại, voucher, coupon , voucher lazada, khuyến mãi Lazada, coupon Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
      ),
      'itemprop:image' => array(
        'value' => '[site:url]sites/default/files/logo-facebook.png',
      ),
      'author' => array(
        'value' => '',
      ),
      'publisher' => array(
        'value' => 'https://plus.google.com/communities/102659297950748163191',
      ),
      'og:site_name' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'og:title' => array(
        'value' => '[current-page:title] - [site:name]',
      ),
      'og:determiner' => array(
        'value' => '',
      ),
      'og:description' => array(
        'value' => 'Cập nhật mã giảm giá , chương trình khuyến mại, voucher, coupon , voucher lazada, khuyến mãi Lazada, coupon Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
      ),
      'og:updated_time' => array(
        'value' => '',
      ),
      'og:see_also' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '[site:url]sites/default/files/logo-facebook.png',
      ),
      'og:image:url' => array(
        'value' => '[site:url]sites/default/files/logo-facebook.png',
      ),
      'og:image:secure_url' => array(
        'value' => '[site:url]sites/default/files/logo-facebook.png',
      ),
      'og:image:type' => array(
        'value' => '',
      ),
      'og:image:width' => array(
        'value' => 1200,
      ),
      'og:image:height' => array(
        'value' => 630,
      ),
      'og:latitude' => array(
        'value' => '',
      ),
      'og:longitude' => array(
        'value' => '',
      ),
      'og:street_address' => array(
        'value' => '',
      ),
      'og:locality' => array(
        'value' => '',
      ),
      'og:region' => array(
        'value' => '',
      ),
      'og:postal_code' => array(
        'value' => '',
      ),
      'og:country_name' => array(
        'value' => '',
      ),
      'og:email' => array(
        'value' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
      ),
      'og:locale' => array(
        'value' => '',
      ),
      'og:locale:alternate' => array(
        'value' => '',
      ),
      'article:author' => array(
        'value' => '',
      ),
      'article:publisher' => array(
        'value' => '',
      ),
      'article:section' => array(
        'value' => '',
      ),
      'article:tag' => array(
        'value' => '',
      ),
      'article:published_time' => array(
        'value' => '',
      ),
      'article:modified_time' => array(
        'value' => '',
      ),
      'article:expiration_time' => array(
        'value' => '',
      ),
      'profile:first_name' => array(
        'value' => '',
      ),
      'profile:last_name' => array(
        'value' => '',
      ),
      'profile:username' => array(
        'value' => '',
      ),
      'profile:gender' => array(
        'value' => '',
      ),
      'og:audio' => array(
        'value' => '',
      ),
      'og:audio:secure_url' => array(
        'value' => '',
      ),
      'og:audio:type' => array(
        'value' => '',
      ),
      'book:author' => array(
        'value' => '',
      ),
      'book:isbn' => array(
        'value' => '',
      ),
      'book:release_date' => array(
        'value' => '',
      ),
      'book:tag' => array(
        'value' => '',
      ),
      'og:video:url' => array(
        'value' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
      ),
      'og:video:width' => array(
        'value' => '',
      ),
      'og:video:height' => array(
        'value' => '',
      ),
      'og:video:type' => array(
        'value' => '',
      ),
      'video:actor' => array(
        'value' => '',
      ),
      'video:actor:role' => array(
        'value' => '',
      ),
      'video:director' => array(
        'value' => '',
      ),
      'video:writer' => array(
        'value' => '',
      ),
      'video:duration' => array(
        'value' => '',
      ),
      'video:release_date' => array(
        'value' => '',
      ),
      'video:tag' => array(
        'value' => '',
      ),
      'video:series' => array(
        'value' => '',
      ),
      'twitter:card' => array(
        'value' => '',
      ),
      'twitter:site' => array(
        'value' => '',
      ),
      'twitter:site:id' => array(
        'value' => '',
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
      'twitter:creator:id' => array(
        'value' => '',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title] - [site:name]',
      ),
      'twitter:description' => array(
        'value' => 'Cập nhật mã giảm giá , chương trình khuyến mại, voucher, coupon , voucher lazada, khuyến mãi Lazada, coupon Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
      ),
      'twitter:dnt' => array(
        'value' => '',
      ),
      'twitter:image' => array(
        'value' => '[site:url]sites/default/files/logo-facebook.png',
      ),
      'twitter:image:width' => array(
        'value' => '',
      ),
      'twitter:image:height' => array(
        'value' => '',
      ),
      'twitter:image:alt' => array(
        'value' => '[site:name]',
      ),
      'twitter:image0' => array(
        'value' => '',
      ),
      'twitter:image1' => array(
        'value' => '',
      ),
      'twitter:image2' => array(
        'value' => '',
      ),
      'twitter:image3' => array(
        'value' => '',
      ),
      'twitter:player' => array(
        'value' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
      ),
      'twitter:app:country' => array(
        'value' => '',
      ),
      'twitter:app:name:iphone' => array(
        'value' => '',
      ),
      'twitter:app:id:iphone' => array(
        'value' => '',
      ),
      'twitter:app:url:iphone' => array(
        'value' => '',
      ),
      'twitter:app:name:ipad' => array(
        'value' => '',
      ),
      'twitter:app:id:ipad' => array(
        'value' => '',
      ),
      'twitter:app:url:ipad' => array(
        'value' => '',
      ),
      'twitter:app:name:googleplay' => array(
        'value' => 'Mã Giảm Giá: Khuyến mãi, Coupon',
      ),
      'twitter:app:id:googleplay' => array(
        'value' => 'com.phuochoit.magiamgia',
      ),
      'twitter:app:url:googleplay' => array(
        'value' => 'https://play.google.com/store/apps/details?id=com.phuochoit.magiamgia',
      ),
      'twitter:label1' => array(
        'value' => '',
      ),
      'twitter:data1' => array(
        'value' => '',
      ),
      'twitter:label2' => array(
        'value' => '',
      ),
      'twitter:data2' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: global:403.
  $config['global:403'] = array(
    'instance' => 'global:403',
    'disabled' => FALSE,
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'itemprop:name' => array(
        'value' => '[site:name]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:404.
  $config['global:404'] = array(
    'instance' => 'global:404',
    'disabled' => FALSE,
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'itemprop:name' => array(
        'value' => '[site:name]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => 'Makhuyenmaihot.info - Tổng hợp khuyến mại, mã giảm giá mới nhất',
      ),
      'description' => array(
        'value' => 'Cập nhật mã giảm giá, chương trình khuyến mại, voucher, coupon, voucher lazada khuyến mãi Lazada, coupon Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
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
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'original-source' => array(
        'value' => '[site:url]',
      ),
      'itemtype' => array(
        'value' => 'Blog',
      ),
      'itemprop:name' => array(
        'value' => 'Makhuyenmaihot.info - Tổng hợp khuyến mại, mã giảm giá mới nhất',
      ),
      'itemprop:description' => array(
        'value' => 'Cập nhật mã giảm giá , chương trình khuyến mại, voucher, coupon, voucher lazada khuyến mãi Lazada, coupon Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
      ),
      'og:site_name' => array(
        'value' => 'Makhuyenmaihot.info - Tổng hợp khuyến mại, mã giảm giá mới nhất',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'og:title' => array(
        'value' => 'Makhuyenmaihot.info - Tổng hợp khuyến mại, mã giảm giá mới nhất',
      ),
      'og:description' => array(
        'value' => 'Cập nhật mã giảm giá , chương trình khuyến mại, voucher, coupon, voucher lazada khuyến mãi Lazada, coupon Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
      ),
      'twitter:title' => array(
        'value' => 'Makhuyenmaihot.info - Tổng hợp khuyến mại, mã giảm giá mới nhất',
      ),
      'twitter:description' => array(
        'value' => 'Cập nhật mã giảm giá , chương trình khuyến mại, voucher, coupon, voucher lazada khuyến mãi Lazada, coupon Tiki, Shopee, Adayroi, Voucher CGV, Shopee ... và nhiều thương hiệu uy tín tại Việt Nam.',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:title] - [site:name]',
      ),
      'description' => array(
        'value' => '[node:summary]',
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
      'itemprop:name' => array(
        'value' => '[node:title] - [site:name]',
      ),
      'itemprop:description' => array(
        'value' => '[node:summary]',
      ),
      'og:title' => array(
        'value' => '[node:title] - [site:name]',
      ),
      'og:description' => array(
        'value' => '[node:summary]',
      ),
      'og:updated_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'article:published_time' => array(
        'value' => '[node:created:custom:c]',
      ),
      'article:modified_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'twitter:title' => array(
        'value' => '[node:title] - [site:name]',
      ),
      'twitter:description' => array(
        'value' => '[node:summary]',
      ),
    ),
  );

  // Exported Metatag config instance: node:products.
  $config['node:products'] = array(
    'instance' => 'node:products',
    'disabled' => FALSE,
    'config' => array(
      'description' => array(
        'value' => '[node:field_teaser]',
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
      'image_src' => array(
        'value' => '[node:field_image]',
      ),
      'itemtype' => array(
        'value' => 'Review',
      ),
      'itemprop:description' => array(
        'value' => '[node:field_teaser]',
      ),
      'itemprop:image' => array(
        'value' => '[node:field_image]',
      ),
      'og:url' => array(
        'value' => '[current-page:url]',
      ),
      'og:description' => array(
        'value' => '[node:field_teaser]',
      ),
      'og:image' => array(
        'value' => '[node:field_image]',
      ),
      'og:image:url' => array(
        'value' => '[node:field_image]',
      ),
      'og:image:secure_url' => array(
        'value' => '[node:field_image]',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url]',
      ),
      'twitter:description' => array(
        'value' => '[node:field_teaser]',
      ),
      'twitter:image' => array(
        'value' => '[node:field_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:stores.
  $config['node:stores'] = array(
    'instance' => 'node:stores',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => 'Khuyến mại [node:title] - Mã giảm giá [node:title] mới nhất - [site:name]',
      ),
      'description' => array(
        'value' => '[node:field_teaser]',
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
      'image_src' => array(
        'value' => '[node:field_image]',
      ),
      'itemprop:name' => array(
        'value' => 'Khuyến mại [node:title] - Mã giảm giá [node:title] mới nhất - [site:name]',
      ),
      'itemprop:description' => array(
        'value' => '[node:field_teaser]',
      ),
      'itemprop:image' => array(
        'value' => '[node:field_image]',
      ),
      'og:url' => array(
        'value' => '[current-page:url]',
      ),
      'og:title' => array(
        'value' => 'Khuyến mại [node:title] - Mã giảm giá [node:title] mới nhất - [site:name]',
      ),
      'og:description' => array(
        'value' => '[node:field_teaser]',
      ),
      'og:image' => array(
        'value' => '[node:field_image]',
      ),
      'og:image:url' => array(
        'value' => '[node:field_image]',
      ),
      'og:image:secure_url' => array(
        'value' => '[node:field_image]',
      ),
      'og:image:width' => array(
        'value' => 1200,
      ),
      'og:image:height' => array(
        'value' => 630,
      ),
      'twitter:title' => array(
        'value' => 'Khuyến mại [node:title] - Mã giảm giá [node:title] mới nhất - [site:name]',
      ),
      'twitter:description' => array(
        'value' => '[node:field_teaser]',
      ),
      'twitter:image' => array(
        'value' => '[node:field_image]',
      ),
    ),
  );

  // Exported Metatag config instance: user.
  $config['user'] = array(
    'instance' => 'user',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[user:name] | [site:name]',
      ),
      'image_src' => array(
        'value' => '[user:picture:url]',
      ),
      'itemprop:name' => array(
        'value' => '[user:name]',
      ),
      'itemtype' => array(
        'value' => 'Person',
      ),
      'itemprop:image' => array(
        'value' => '[user:picture:url]',
      ),
      'og:title' => array(
        'value' => '[user:name]',
      ),
      'og:type' => array(
        'value' => 'profile',
      ),
      'profile:username' => array(
        'value' => '[user:name]',
      ),
      'og:image' => array(
        'value' => '[user:picture:url]',
      ),
      'twitter:title' => array(
        'value' => '[user:name]',
      ),
      'twitter:image' => array(
        'value' => '[user:picture:url]',
      ),
    ),
  );

  // Exported Metatag config instance: view.
  $config['view'] = array(
    'instance' => 'view',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[view:description]',
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
      'image_src' => array(
        'value' => 'http://www.makhuyenmaihot.info/sites/default/files/logo.png',
      ),
      'canonical' => array(
        'value' => '[view:url]',
      ),
      'itemprop:image' => array(
        'value' => 'http://www.makhuyenmaihot.info/sites/default/files/logo.png',
      ),
      'og:image' => array(
        'value' => 'http://www.makhuyenmaihot.info/sites/default/files/logo.png',
      ),
      'twitter:image' => array(
        'value' => 'http://www.makhuyenmaihot.info/sites/default/files/logo.png',
      ),
    ),
  );

  return $config;
}
