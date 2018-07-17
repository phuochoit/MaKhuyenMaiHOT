<?php $statistics = statistics_get($node->nid); ?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="content content-node-article node-article-<?php print $node->nid?>" <?php print $content_attributes; ?>>
        <div class="node-article-wrap-info node-post-wrap-info">
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
        </div>
        <div class="clearfix"></div>
        <div class="node-article-wrap-content node-post-wrap-content">
            <?php print $node->body['und'][0]['value'];?>
        </div>
        <div class="clearfix"></div>
        <div class="node-article-wrap-comments node-post-wrap-comments">
            <?php print render($content['facebook_comments']); ?>
        </div>
    </div>
</article> <!-- /.node -->
