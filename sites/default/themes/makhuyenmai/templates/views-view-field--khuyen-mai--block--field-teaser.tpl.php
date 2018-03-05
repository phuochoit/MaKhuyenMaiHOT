<div class="field-article-item">
    <div class="article-content">
        <div class="article-title">
            <?php if($view->row_index == 0){
                print '<span class="marker marker-news-promotion">Khuyến Mãi Mới Nhất</span>';
            }
            ?>
            <?php print l($row->node_title, 'node/'.$row->nid); ?>
        </div>
        <div class="article-teaser">
            <?php print $output; ?>
        </div>
    </div>
    <div class="article-footer">
        <div class="left">
            <?php print l('Vào Trang Khuyến Mãi', 'node/'.$row->nid); ?>
        </div>
    </div>
</div>