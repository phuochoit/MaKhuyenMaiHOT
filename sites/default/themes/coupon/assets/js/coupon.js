(function ($) {
    $(document).ready(function () {
        $('#block-views-store-block-store-carousel #block_store_carousel').owlCarousel({
            items: 5,
            loop: true,
            autoplayTimeout: 3000,
            margin: 10,
            responsiveClass: true,
            autoplay: true,
            nav: true,
            dots: false
        });
        result = $("#block-system-main-menu").height();
        if (parseInt(result) > 0) {
            setHeightHeaderLogo(result);
        }

        // let PromotionHighlight = getHeightPromotionHighlight();
        // let HeightTopproduct = getHeightTopproduct();
        // let HeightPromotionHighlightArticle = getHeightPromotionHighlightArticle();
        // let resultHeightPromotioin = getHeightPromotion();
        // let HeightPromotionArticle = getHeightPromotionHighlightArticle();
        // setHeightBlockHighlight(PromotionHighlight);
        // setHeightPromotion(resultHeightPromotioin);
        // setHeightTopproduct(HeightTopproduct);
        // setHeightBlockHighlightArticle(HeightPromotionHighlightArticle);
        // setHeightPromotiontArticle(HeightPromotionArticle);


    });

    $(document).ajaxComplete(function (event, xhr, settings) {
        // SetHeightPromotionHighlightRowFirst();
        // SetHeightPromotionHighlightRowNotFirst();
        // SetHeightPromotionHighlightArticleRowNotFirst();
        // SetHeightHomePromotion();
        // SetHeightTopproduct();
        // let HeightTopproduct = getHeightTopproduct();
        // let HeightPromotionArticle = getHeightPromotionHighlightArticle();
        // let resultHeightPromotioin = getHeightPromotion();

        // setHeightTopproduct(HeightTopproduct);
        // setHeightPromotion(resultHeightPromotioin);
        // setHeightPromotiontArticle(HeightPromotionArticle);
    });
    $(window).resize(function () {
        // get height menu header
        result = $("#block-system-main-menu").height();
        if (parseInt(result) > 0) {
            setHeightHeaderLogo(result);
        } else {
            setHeightHeaderLogo('auto');
        }

    });

    function setHeightHeaderLogo(height) {
        $("#header-logo").height(height);
    }

    function getHeightHomePromotion() {
        max_height = 0;
        $('#block-home-promotion .views-row .field-article-item .article-content').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });
        return max_height;
    }
    function SetHeightHomePromotion() {
        max_height = 0;
        height = getHeightHomePromotion();
        $('#block-home-promotion .views-row .field-article-item .article-content').height(height);
        
    }

    function getHeightPromotionHighlightRowFirst() {
        let max_height = 0;
        $('#block-promotion-highlight .view-content .item-list-content .views-row-first').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });
        return max_height;
    }
    function SetHeightPromotionHighlightRowFirst() {
        height = getHeightPromotionHighlightRowFirst();
        $('#block-promotion-highlight .view-content .item-list-content .views-row-first .views-field-field-image .field-content').height(height);
    }

    function getHeightPromotionHighlightRowNotFirst() {
        let max_height = 0;
        $('#block-promotion-highlight .view-content .item-list-content .views-row .wrapper-views-row-not-first').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });

        return max_height;
    }
    function SetHeightPromotionHighlightRowNotFirst() {
        height = getHeightPromotionHighlightRowNotFirst();
        $('#block-promotion-highlight .view-content .item-list-content .views-row .wrapper-views-row-not-first').height(height);
    }


    function getHeightPromotionHighlightArticleRowNotFirst() {
        let max_height = 0;
        $('#block-promotion-highlight .view-content .item-list-content .views-row .wrapper-views-row-not-first .article-content').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });

        return max_height;
    }

    function SetHeightPromotionHighlightArticleRowNotFirst() {
        height = getHeightPromotionHighlightArticleRowNotFirst();
        $('#block-promotion-highlight .view-content .item-list-content .views-row .wrapper-views-row-not-first .article-content').height(height);
    }

    function getHeightTopproduct() {
        let max_height = 0;
        $('#block-top-product .views-row .views-field-field-teaser .field-article-item .article-content').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });
        return max_height;
    }
    function SetHeightTopproduct() {
        height = getHeightTopproduct();
        $('#block-top-product .views-row .views-field-field-teaser .field-article-item .article-content').height(height);
    }
    //     let article_height =  getHeightTopproductArticle();
    //     article_height = article_height + 20;

    //     $('#block-top-product .views-row .wrapper-view-field .field-article-item .article-content').height(article_height);

    //     return max_height;
    // }

    // function getHeightTopproductArticle() {
    //     let max_height = 0;
    //     $('#block-top-product .view-content .views-row .wrapper-view-field .article-content').each(function (i, val) {
    //         max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
    //     });
    //     return max_height;
    // }

    // function getHeightPromotion() {
    //     let max_height = 0;
    //     $("#block-home-promotion .views-row").each(function (i, val) {
    //         max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
    //     });

    //     return max_height;
    // }

    // function getHeightPromotionArticle() {
    //     let max_height = 0;
    //     $('#block-home-promotion .views-row .wrapper-view-field .article-content').each(function (i, val) {
    //         max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
    //     });

    //     return max_height;
    // }


    // function setHeightTopproduct(height) {
    //     $('#block-top-product .view-content .views-row .wrapper-view-field').height(height);
    // }

    // function setHeightBlockHighlightArticle(height) {
    //     $('#block-promotion-highlight .wrapper-views-row-not-first .field-article-item .article-content').height(height);
    //     let image_height = getHeightPromotionHighlight();
    //     $('#block-promotion-highlight .wrapper-views-row-not-first .views-field-field-image').height(image_height - height - 80);
    // }

    // function setHeightBlockHighlight(height) {
    //     $('#block-promotion-highlight .wrapper-views-row-not-first').height(height);
    // }

    // function setHeightPromotion(height) {
    //     $('#block-home-promotion .views-row .wrapper-view-field').height(height);
    // }

    // function setHeightPromotiontArticle(height) {
    //     $('#block-home-promotion .views-row .wrapper-view-field .field-article-item .article-content').height(height + 20);
    //     let image_height = getHeightPromotion();
    //     $('#block-home-promotion .views-row .wrapper-view-field .views-field-field-image').height(image_height - height);
    // }

})(jQuery);