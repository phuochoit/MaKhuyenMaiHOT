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
$path = drupal_get_path_alias('node/'.$row->nid ); 
$store_path = drupal_get_path_alias($row->field_field_store[0]['rendered']['#href']); 
$store_title = $row->field_field_store[0]['rendered']['#title'];
$aff_link = '/outlink/'.base64_encode($row->nid);

?>


<div class="article-item row">
    <div class="article-title col-xs-12">
        <a href="<?php print $path;?>" title="<?php print $row->node_title ;?>"><?php print $row->node_title ;?></a>  
    </div>
    <div class="article-info col-xs-12">
        <?php if(empty($row->field_field_discount) || $row->field_field_discount[0]['raw']['value'] == 0) :?>
            <span><?php print $row->field_field_price[0]['rendered']['#markup'];?></span>
        <?php else:?>
            <span><?php print $row->field_field_discount[0]['rendered']['#markup'];?></span>
            <span class="price_old"><?php print $row->field_field_price[0]['rendered']['#markup'];?></span>
        <?php endif;?>
        <!-- <a class="brand-info" href="<?php print $store_path;?>" title="<?php print $store_title;?>">
            <?php print $store_title;?>
        </a> -->
    </div>
    <div class="article-footer col-xs-12">
        <a href="<?php print $aff_link;?>" target="_blank">Mua Ngay</a>
    </div>   
</div>
