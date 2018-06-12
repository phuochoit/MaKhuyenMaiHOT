<?php
    global $base_url;
    $aff_link = '/outlink/'.base64_encode($node->nid);
    $alias = $base_url.'/'.drupal_get_path_alias('node/'.$node->nid);
    $statistics = statistics_get($node->nid);
    // dpm($node);
?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="content content-node-products node-products-<?php print $node->nid?>" <?php print $content_attributes; ?>>
        <div class="node-products-wrap-info node-post-wrap-info">
            <h1 class="node-title"><?php print $node->title;?></h1>
            <div class="box-share">
                <ul class="clearfix">
                    <li class="box-count-view">
                        <span>
                            <i class="fa fa-eye" aria-hidden="true"></i> 
                            <?php print !empty($statistics) ? $statistics['totalcount']  : 0;?> Lượt Xem
                        </span>
                    </li>
                    <li>
                        <span class="addthis_inline_share_toolbox"></span>
                    </li>
                </ul>
            </div>
            
            <div class="col-sm-12 col-md-6 left_top_content">
                <figure class="node-post-image">
                    <?php if(isset($content['field_image'])) :?>
                        <?php print render($content['field_image']); ?>
                    <?php else: ?>
                        <img typeof="Image" class="img-fluid" src="/sites/makhuyenmaihot.dd/files/no_image_available.png">
                    <?php endif;?>
                </figure>
            </div>
            <div class="col-sm-12 col-md-6 right_top_content">
                <div class="clearfix products_price_all">
                    <?php if(empty($node->field_discount['und']['0']['value'])) :?>
                        <div class="price-detail">
                            <span class="price-discount"> <?php print number_format($node->field_price['und']['0']['value'],0,'',','); ?> VND </span>
                        </div>
                    <?php else:?>
                        <div class="price-detail">
                            <span class="price-discount"><?php print number_format($node->field_discount['und']['0']['value'],0,'',','); ?> VND </span>
                            <span class="price-price"> <?php print number_format($node->field_price['und']['0']['value'],0,'',','); ?> VND </span>
                        </div>
                        <?php if(empty($node->field_discount_amount['und']['0']['value'])) : ?>
                            <?php $amount = $node->field_price['und']['0']['value'] - $node->field_discount['und']['0']['value'] ?>
                            <span class="price-discount-amount">Tiết kiệm <strong><?php print number_format($amount,0,'',','); ?> VND</strong></span>
                        <?php else: ?>
                            <span class="price-discount-amount">Tiết kiệm <strong><?php print number_format($node->field_discount_amount['und']['0']['value'],0,'',','); ?> VND </strong></span>
                        <?php endif;?>

                        <?php if(empty($node->field_discount_amount['und']['0']['value'])) : ?>
                            <?php $rate = $node->field_discount['und']['0']['value'] / $node->field_price['und']['0']['value']; ?>
                            <span class="price-rate">Giảm <strong><?php print number_format($rate, 1, '.', ''); ?> % </strong></span>
                        <?php else: ?>
                            <span class="price-rate">Giảm <strong><?php print $node->field_discount_amount['und']['0']['value']; ?> % </strong></span>
                        <?php endif;?>
                    <?php endif;?>
                </div>
                <div class="clearfix box_promotion">
                    <ul class="clearfix">
                        <li>Chú Ý: Giá sản phẩm có thể chưa chính xác. Hoặc do nhà cung cấp thay đổi theo chương trình khuyến mại mới nhất!</li>
                        <li>Để có giá chính xác nhất bạn có thể chọn vào mua ngay hoặc xem 
                            <a href="<?php print $aff_link;?>" target="_blank" title="<?php print $node->title;?>">ở đây</a>.
                        </li>
                    </ul>
                </div>
                <div class="clearfix products-outlink">
                    <a href="<?php print $aff_link;?>" target="_blank" title="<?php print $node->title;?>">Mua Ngay</a>
                </div>
            </div>
        </div>
        <div class="clearfix"></div>
        <div class="node-products-wrap-content node-post-wrap-content">
            <?php print $node->body['und'][0]['value'];?>
        </div>
        <div class="clearfix"></div>
        <div class="node-article-wrap-comments node-post-wrap-comments">
            <?php print render($content['facebook_comments']); ?>
        </div>
    </div>
</article> <!-- /.node -->
