<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="content node-stores node-stores-<?php print $node->nid?>"<?php print $content_attributes; ?>>
        <?php
            // Hide comments, tags, and links now so that we can render them later.
            hide($content['comments']);
            hide($content['links']);
            hide($content['field_tags']);
            print render($content);
        ?>
    </div>
</article> <!-- /.node -->
