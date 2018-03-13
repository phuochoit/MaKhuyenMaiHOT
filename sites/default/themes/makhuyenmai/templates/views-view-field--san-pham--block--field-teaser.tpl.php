<div class="field-article-item">
    <div class="article-content">
        <div class="article-title">
            <?php print l($row->node_title, 'node/'.$row->nid); ?>
        </div>
        <div class="article-teaser">
            <?php print $output; ?>
        </div>
    </div>
    <div class="article-footer">
        <div class="row">
            <div class="col-9 left">
            <?php 
                if(!empty($row->field_field_category)){
                    print l($row->field_field_category[0]['rendered']['#title'], 'taxonomy/term/'.$row->field_field_category[0]['raw']['tid']);      
                }
            ?>
            </div>
            <div class="col right">
                <?php print l('Chi Tiết', 'node/'.$row->nid); ?>
            </div>
        </div>
    </div>
</div>