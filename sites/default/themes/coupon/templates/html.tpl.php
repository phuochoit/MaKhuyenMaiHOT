<?php 
    global $base_url;
?>
<!DOCTYPE html>
<!--[if lt IE 7]> <html class="ie6 ie" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"> <![endif]-->
<!--[if IE 7]>    <html class="ie7 ie" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"> <![endif]-->
<!--[if IE 8]>    <html class="ie8 ie" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"> <![endif]-->
<!--[if gt IE 8]> <!--> 
<html class="" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"> <!--<![endif]-->
    <head>
        <?php print $head; ?>
        <!-- Set the viewport width to device width for mobile -->
        <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no">
        <title><?php print $head_title; ?></title>

        <link rel="stylesheet" id="redux-google-fonts-st_options-css" href="https://fonts.googleapis.com/css?family=Open+Sans%3A300%2C400%2C600%2C700%2C800%2C300italic%2C400italic%2C600italic%2C700italic%2C800italic&amp;ver=1526702456" type="text/css" media="all">
        <?php print $styles; ?>
        <!-- IE Fix for HTML5 Tags -->
        <!--[if lt IE 9]>
            <script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
        <![endif]-->
        <!-- Global site tag (gtag.js) - Google Analytics -->
        <script async src="https://www.googletagmanager.com/gtag/js?id=UA-110122717-1"></script>
        <script>
            window.dataLayer = window.dataLayer || [];
            function gtag(){dataLayer.push(arguments);}
            gtag('js', new Date());

            gtag('config', 'UA-110122717-1');
        </script>

        <script type="text/javascript">
            var __atsmarttag = {
                pub_id: '4731474359141607542'
            };
            var key = ["hà nội","ha noi","đà nẵng","da nang","phú quốc","phu quoc","nha trang","hội an","hoi an","tp ho chi minh","tp hồ chí minh","đà lạt","da lat","phú yên","phu yen ","vũng tàu","vung tau","bangkok","manila","hue", "tp hue", "huế"];
            var rand_key = key[Math.floor(Math.random() * key.length)];
            (function () {
                var script = document.createElement('script');
                script.src = '//static.accesstrade.vn/js/atsmarttag.min.js?v=1.1.0';
                script.type = 'text/javascript';
                script.async = true;
                (document.getElementsByTagName('head')[0]||document.getElementsByTagName('body')[0]).appendChild(script);
            })();
            window.__at_smartwidget = {
                atid: 4731474359141607542, // accesstrade user id
                row: 1, // number of row
                product_size: 3, // number of product on one row,
                keyword: rand_key,
                utm_source: "phuochoit"
            };
        </script>
        
        
    </head>

    <body class="<?php print $classes; ?>" <?php print $attributes;?>>

        <?php print $page_top; ?>
        <?php print $page; ?>
        <?php print $scripts; ?>
        <?php print $page_bottom; ?>
        
        <?php if(isset($_GET['coupon-id']) && !empty($_GET['coupon-id'])) : ?>
            <?php
                $node_coupon = node_load($_GET['coupon-id']);
                $aff_link = '/outlink/'.base64_encode($node_coupon->nid);
                $statistics = statistics_get($node_coupon->nid);
               
                $qstore = db_query("SELECT fi.field_image_fid fid FROM field_data_field_image fi WHERE fi.bundle = :bundle AND fi.entity_id = :entity_id", array(':bundle' => 'stores', ':entity_id' => $node_coupon->field_store['und'][0]['nid']))->fetchObject();
                $file = file_load($qstore->fid);
                $uri = $file->uri;
                $img = file_create_url($uri);
                $store_path = drupal_get_path_alias($_GET['q']);
                $share_path = $base_url.'/'.$store_path.'?coupon-id='.$_GET['coupon-id'];
            ?>
            <div class="modal modal-coupon fade" id="modal-coupon-<?php print $node_coupon->nid?>" tabindex="-1" role="dialog" aria-labelledby="modal-coupon-<?php print $node_coupon->nid?>">
                <div class="modal-dialog" role="document">
                    <div class="modal-content">
                        <div class="modal-header coupon-header clearfix">
                            <div class="coupon-store-thumb">
                                <img src="<?php print $img ;?>" class="coupon_thumb" alt="<?php print $node_coupon->title?>">        
                            </div>
                            <div class="coupon-title" title="<?php print $node_coupon->title?>">
                                <h4 class="modal-title" id="modal-title-label-<?php print $node_coupon->nid?>">
                                    <?php print $node_coupon->title?>
                                </h4>
                                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
                            </div>
                        </div>
                        <div class="modal-body">
                            <p class="coupon-type-text">
                                <?php print !empty($node_coupon->field_coupon_code) ? 'Copy mã dưới và dùng ở bước thanh toán' : 'Giảm giá trực tiếp trên sản phẩm' ; ?>
                            </p>
                            <div class="modal-code">
                                <?php if(!empty($node_coupon->field_coupon_code)): ?>
                                    <div class="coupon-code">
                                        <div class="input-group">
                                            <input type="text" class="form-control code-text" value="<?php print $node_coupon->field_coupon_code['und'][0]['value'];?>" 
                                            aria-describedby="basic-addon2" autocomplete="off" readonly="">
                                            <div class="input-group-btn">
                                                <button type="button" class="btn btn-default" id="btn-savecoupon">
                                                    <span class="btn-text">Copy</span>
                                                    <span class="fa fa-files-o" aria-hidden="true"></span>
                                                </button>
                                            </div>
                                        </div>
                                    </div>
                                <?php else:?>
                                    <a class="btn-sale" target="_blank" rel="nofollow" title="<?php print $node_coupon->title?>" href="<?php print $aff_link;?>">Đến trang khuyến mại <span class="fa fa-angle-right" aria-hidden="true"></span></a>
                                <?php endif;?>
                            </div>
                            <div class="clearfix modal-coupon-detail">
                                <?php if(!empty($node_coupon->field_coupon_code)): ?>
                                    <a href="<?php print $aff_link;?>" rel="nofollow" target="_blank" class="ui button btn btn_secondary go-store" title="<?php print $node_coupon->title?>" >Đến trang khuyến mại <span class="fa fa-angle-right" aria-hidden="true"> </a>
                                <?php endif;?>
                                <div class="show-detail">
                                    <a class="show"  data-toggle="collapse" href="#collapse-coupon-<?php print $node_coupon->nid?>" aria-expanded="false" aria-controls="collapse-coupon-<?php print $node_coupon->nid?>">
                                        Xem chi tiết
                                    </a>
                                    <div class="collapse collapse-coupon" id="collapse-coupon-<?php print $node_coupon->nid?>">
                                        <div class="collapse-well">
                                            <?php print $node_coupon->field_teaser['und'][0]['value'];?>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </div>
                        <div class="modal-footer">
                            <ul class="modal-footer-share clearfix">
                                <li>
                                    <span>
                                        <i class="fa fa-eye" aria-hidden="true"></i> 
                                        <?php if(empty($statistics)):?>
                                            0 đã xem - 0 hôm nay
                                        <?php else:?>
                                            <?php print $statistics['totalcount']; ?> đã xem - <?php print $statistics['daycount'] ; ?> hôm nay
                                        <?php endif;?>
                                    </span>
                                </li>
                                <li>
                                    <span class="addthis_inline_share_toolbox" data-url="<?php print $share_path?>"></span>
                                </li>
                            </ul>
                        </div>
                    </div>
                </div>	
            </div>
            <script type="text/javascript">
                jQuery(function ($) {
                    $(window).on('load',function(){
                        $('#modal-coupon-<?php print $_GET['coupon-id'];?>').modal('show');
                    });
                });
            </script>
        <?php endif;?>
        <script type="text/javascript" src="http://smartwidget.isvn.dungnt.net/smartwidget.js"></script>
        <script src="//images.dmca.com/Badges/DMCABadgeHelper.min.js"> 
        </script>
        <!-- Go to www.addthis.com/dashboard to customize your tools -->
        <script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-5b1bdfac58b0de6d"></script>

    </body>
   
</html>
