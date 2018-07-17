<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="row owl-carousel" id="block_store_carousel">
    <?php foreach ($rows as $id => $row): ?>
    <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
        <div class="view-item block-dark-border">
            <?php print $row; ?>
        </div>
    </div>
    <?php endforeach; ?>
</div>