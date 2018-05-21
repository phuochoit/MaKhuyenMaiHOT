<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */

$store_nid = $row->node_field_data_field_store_nid;
$img = file_create_url($row->field_field_image[0]['raw']['uri']);
$store_path = drupal_get_path_alias('node/'.$store_nid); 
$date = !empty($row->field_field_end_time) ? $row->field_field_end_time[0]['raw']['value'] : null;
$end_date = !empty($date) ? date('d-m-Y',strtotime($date)) : null;
$coupon_code = !empty($row->field_field_coupon_code) ? $row->field_field_coupon_code[0]['raw']['value'] : null;
$teaser = trim($row->field_field_teaser[0]['raw']['value']);
$aff_link = '/outlink/'.base64_encode($row->nid);
?>

<div data-id="<?php print $row->nid;?>" id="coupon-item-<?php print $row->nid;?>" class="coupon-item has-thumb store-listing-item c-type-code coupon-listing-item shadow-box coupon-live coupon-item-<?php print $row->nid;?>">
    <div class="store-thumb-link col-sm-12 col-md-3">
        <div class="store-thumb">
            <a href="<?php print $store_path;?>">
                <img src="<?php print $img;?>" class="attachment-wpcoupon_medium-thumb size-wpcoupon_medium-thumb" alt="" >   
            </a>
        </div>
    </div>
    
    <div class="latest-coupon col-sm-12 col-md-5">
        <h3 class="coupon-title">
            <a title="<?php print $row->node_title;?>" rel="nofollow" class="coupon-link" data-type="<?php !empty($coupon_code) ? 'code' : 'sale'?>" data-coupon-id="<?php print $row->nid;?>" data-aff-url="<?php print $aff_link;?>" data-code="<?php print $coupon_code; ?>" href="/<?php print $store_path;?>?coupon-id=<?php print $row->nid;?>"><?php print $row->node_title;?></a>
        </h3>
        <div class="c-type">
            <?php if(!empty($coupon_code)) : ?>
                <span class="c-code c-code">Code</span>
            <?php else :?>
                <span class="c-code c-sale">Sale</span>
            <?php endif;?>
            <?php if(!empty($end_date)) :?>
                <span class="exp">Hạn: <?php print $end_date;?></span>
            <?php endif;?>
        </div>
        <div class="coupon-des">
            <?php if(drupal_strlen($teaser) < 100) : ?>
                <div class="coupon-des-full not-substr">
                    <p><?php print $teaser; ?></p>
                </div>
            <?php else: ?>
                <div class="coupon-des-ellip">
                    <p>
                        <?php print drupal_substr($teaser , 0, 100) . '...' ?>
                        <a class="more" href="#">Xem thêm</a>
                    </p>
                </div>
                <div class="coupon-des-full">
                    <p> 
                        <?php print $teaser; ?>
                        <a class="more less" href="#">Thu gọn</a>
                    </p>
                </div>
            <?php endif;?>
                      
        </div>
    </div>

    <div class="coupon-detail coupon-button-type col-sm-12 col-md-4">
        <?php if(!empty($coupon_code)) : ?>
            <a id="coupon-detai-c-<?php print $row->nid;?>" rel="nofollow" data-type="code" data-coupon-id="<?php print $row->nid;?>" href="javascript:void(0);" class="coupon-button coupon-code " data-tooltip="Click để Copy mã" data-position="top center" data-inverted="" data-code="<?php print $coupon_code; ?>" data-aff-url="" onclick="CouponRedirect_<?php print $row->nid;?>();">
                <span class="code-text" rel="nofollow">
                    <?php print $coupon_code?>
                </span>
                <span class="get-code">Lấy mã</span>
            </a> 
            <input id="c-<?php print $row->nid;?>" style="position: absolute; opacity: 0;" autocomplete="off" readonly="" value="<?php print $coupon_code?>" type="text">
        <?php else :?>
            <a id="<?php print $row->nid;?>" rel="nofollow" data-type="sale" data-coupon-id="<?php print $row->nid;?>" data-aff-url="" class="coupon-deal coupon-button" href="<?php print $aff_link;?>" target="_blank">
                Chi tiết 
                <i class="fa fa-shopping-cart" aria-hidden="true"></i>
            </a>
        <?php endif;?>
        <div class="clear"></div>
    </div>
    <div class="clear"></div>
    <div class="coupon-footer coupon-listing-footer col-sm-12 col-md-12">
        <ul class="clearfix">
            <li>
                <span>
                    <i class="fa fa-eye" aria-hidden="true"></i> 
                    <?php print !empty($row->node_counter_totalcount) ? $row->node_counter_totalcount : 0;?> đã xem - <?php print !empty($row->node_counter_daycount) ? $row->node_counter_daycount : 0;?> hôm nay
                </span>
            </li>
        </ul>
    </div>
</div>
<?php if(!empty($coupon_code)) : ?>
<script type="text/javascript">
    function CouponRedirect_<?php print $row->nid;?>(){
        var copyText=document.getElementById("c-<?php print $row->nid;?>");copyText.select();
        document.execCommand("Copy");
        s=prompt('Copy thành công (Khi xem điện thoại vui lòng copy lại mã lần nữa). Bấm OK để chuyển tới trang khuyến mãi và sử dụng mã nhé!','<?php print $coupon_code?>'); 
        window.open('<?php print $aff_link ;?>'); 
    }
</script>
<?php endif;?>