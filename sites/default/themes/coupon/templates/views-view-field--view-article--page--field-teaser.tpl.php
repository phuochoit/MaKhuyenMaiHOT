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
global $base_url;
$node_path = drupal_get_path_alias('node/'.$row->nid ); 
?>

<div class="content-box">
	<div class="content-box-title">
		<h1>
            <a href="<?php print $node_path;?>" title="<?php print $row->node_title ?>"><?php print $row->node_title ?></a>
        </h1>
	</div>
	<div class="content-box-content">
		<div class="box-header">
            <?php print $output; ?>
        </div>
		<div class="box-footer">
            <ul class="clearfix">
                <li class="box-count-view">
                    <span>
                        <i class="fa fa-eye" aria-hidden="true"></i> 
                        <?php print !empty($row->node_counter_totalcount) ? $row->node_counter_totalcount : 0; ?> Lượt Xem
                    </span>
                </li>
                <li>
                    <span class="addthis_inline_share_toolbox" data-url="<?php print $base_url.'/'.$node_path;?>"></span>
                </li>
            </ul>
		</div>
	</div>
</div>

