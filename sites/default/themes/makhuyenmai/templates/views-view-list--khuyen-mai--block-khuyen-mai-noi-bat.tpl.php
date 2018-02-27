<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php print $wrapper_prefix; ?>
    <?php if (!empty($title)) : ?>
            <h3><?php print $title; ?></h3>
    <?php endif; ?>
    <?php print $list_type_prefix; ?>
        <?php foreach ($rows as $id => $row): ?>
            <?php if($id == 0):?>
                <li class="<?php print $classes_array[$id]; ?> col-sm-12 col-xs-12">
                    <div class="wrapper-views-row-first">
                        <?php print $row; ?>
                    </div>
                </li>
            <?php else:?>
                <li class="<?php print $classes_array[$id]; ?> col-sm-6 col-xs-12">
                    <div class="wrapper-views-row-not-first">
                        <?php print $row; ?>
                    </div>
                </li>
            <?php endif;?>
        <?php endforeach; ?>
    <?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; ?>