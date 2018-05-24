<?php
    $aff_link = '/outlink/'.base64_encode($node->nid);
?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="content content-node-products node-products-<?php print $node->nid?>" <?php print $content_attributes; ?>>
        <div class="node-products-wrap-info node-post-wrap-info">
            <h1 class="node-title"><?php print $node->title;?></h1>
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
                        <span class="price-discount"> <?php print number_format($node->field_price['und']['0']['value'],0,'',','); ?> VND </span>
                    <?php else:?>
                        <span class="price-discount"><?php print number_format($node->field_discount['und']['0']['value'],0,'',','); ?> VND </span>
                        <span class="price-price"> <?php print number_format($node->field_price['und']['0']['value'],0,'',','); ?> VND </span>

                        <?php if(empty($content['field_discount_amount'])) : ?>
                            <?php $amount = $node->field_price['und']['0']['value'] - $node->field_discount['und']['0']['value'] ?>
                            <span class="price-discount-amount"><?php print number_format($amount,0,'',','); ?> VND</span>
                        <?php else: ?>
                            <span class="price-discount-amount"> <?php print number_format($node->field_discount_amount['und']['0']['value'],0,'',','); ?> VND </span>
                        <?php endif;?>

                        <?php if(empty($content['field_discount_rate'])) : ?>
                            <?php $rate = $node->field_discount['und']['0']['value'] / $node->field_price['und']['0']['value']; ?>
                            <span class="price-rate"><?php print number_format($rate, 1, '.', ''); ?> % </span>
                        <?php else: ?>
                            <span class="price-rate"><?php print $node->field_discount_amount['und']['0']['value']; ?> % </span>
                        <?php endif;?>
                    <?php endif;?>
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
       <?php print render($content['facebook_comments']); ?>
    </div>
</article> <!-- /.node -->
