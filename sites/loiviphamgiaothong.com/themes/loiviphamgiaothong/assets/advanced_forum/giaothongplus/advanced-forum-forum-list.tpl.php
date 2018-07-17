<?php
/**
 * @file
 * Default theme implementation to display a list of forums and containers.
 *
 * Available variables:
 * - $forums: An array of forums and containers to display. It is keyed to the
 *   numeric id's of all child forums and containers.
 * - $forum_id: Forum id for the current forum. Parent to all items within
 *   the $forums array.
 *
 * Each $forum in $forums contains:
 * - $forum->is_container: Is TRUE if the forum can contain other forums. Is
 *   FALSE if the forum can contain only topics.
 * - $forum->depth: How deep the forum is in the current hierarchy.
 * - $forum->zebra: 'even' or 'odd' string used for row class.
 * - $forum->name: The name of the forum.
 * - $forum->link: The URL to link to this forum.
 * - $forum->description: The description of this forum.
 * - $forum->new_topics: True if the forum contains unread posts.
 * - $forum->new_url: A URL to the forum's unread posts.
 * - $forum->new_text: Text for the above URL which tells how many new posts.
 * - $forum->old_topics: A count of posts that have already been read.
 * - $forum->total_posts: The total number of posts in the forum.
 * - $forum->last_reply: Text representing the last time a forum was posted or
 *   commented in.
 * - $forum->forum_image: If used, contains an image to display for the forum.
 *
 * @see template_preprocess_forum_list()
 * @see theme_forum_list()
 */
?>

<?php
/*
  The $tables variable holds the individual tables to be shown. A table is
  either created from a root level container or added as needed to hold root
  level forums. The following code will loop through each of the tables.
  In each table, it loops through the items in the table. These items may be
  subcontainers or forums. Subcontainers are printed simply with the name
  spanning the entire table. Forums are printed out in more detail. Subforums
  have already been attached to their parent forums in the preprocessing code
  and will display under their parents.
 */
?>
<div class="forumsList sectionMain" id="forums">
    <?php foreach ($tables as $table_id => $table): ?>
        <?php $table_info = $table['table_info']; ?>
        <div class="forums-wrap taxnomy level_1 forum-<?php print $table_info->tid; ?>" id="forum-<?php print $table_info->tid; ?>">
            <div class="forumWrapInfo taxnomyWrapInfo forumStrip">
                <div class="forumWrapText">
			        <h3 class="forumWrapTitle">
                        <?php print $table_info->name; ?>
                    </h3>
			    </div>
                
            </div>
            <?php if ($collapsible): ?>
                    <span id="forum-collapsible-<?php print $table_info->tid; ?>" class="forum-collapsible" >&nbsp;</span>
                <?php endif; ?>
            <div class="forumList" id="forum-table-<?php print $table_info->tid; ?>">
                <?php foreach ($table['items'] as $item_id => $item): ?>

                    <?php
                        $term_icon = taxonomy_term_load($item->tid); // Load term
                        $icon_url = image_style_url('thumbnail', $term_icon->field_icon['und'][0]['uri']);
                    ?>
                    <div class="row row-forum-list forum level_2 forum_<?php print $item_id; ?>">
                        <div class="col col-2 forumIcon" title="Unread messages">
                            <img src="<?php print $icon_url ?>" class="img-fluid forum-icon"/>
                        </div>
                        <div class="col forumText">
			                <h3 class="forumTitle">
                                <a href="<?php print $item->link; ?>"><?php print $item->name; ?></a>
                            </h3>
                        
                            <div class="row forumStats pairsInline">

                                <div class="col col-6">
                                    <p>Đề tài thảo luận: <?php print $item->total_topics?></p>
                                </div>
                                <div class="col col-6">
                                    <p>Bài viết: <?php print $item->total_posts?></p> 
                                </div>
                            </div>
                        </div>
                        <div class="col col-4 forumSLastPost secondaryContent">
                            <?php if($item->total_topics > 0):?>
                                <div class="w-100 lastThreadTitle">
                                    <span><i class="fa fa-book"></i></span> 
                                    <?php $attributes = array(
                                        'attributes' => array(
                                            'title' => $item->last_post_obj->node_title,
                                            'class' => 'LastPostTitle'
                                            )
                                        );?>
                                    <?php print l($item->last_post_obj->node_title, 'node/'.$item->last_post_obj->nid, $attributes);?>
                                    </span>
                                </div>
                                <div class="w-100 lastThreadMeta">
                                    <span class="lastThreadUser">
                                        <a href="<?php print url('user/1', array('absolute' => FALSE));?>" class="username" dir="auto"><?php print $item->last_post_obj->name;?></a>,
                                    </span>
                                    <span class="DateTime muted lastThreadDate" data-latest="Mới nhất: " title="<?php print format_date($item->last_post_obj->created,'custom','d-m-Y H:i');?>"><?php print format_date($item->last_post_obj->created,'custom','d-m-Y');?></span>
                                </div>
                            <?php endif;?>
		                </div>
                    </div>
                <?php endforeach;?>
            </div>
        </div>
    <?php endforeach;?>
</div>