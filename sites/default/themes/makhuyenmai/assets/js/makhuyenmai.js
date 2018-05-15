(function ($) {
    $(document).ready(function () {
        $('#view-content-top-articles-trademark').owlCarousel({
            loop: true,
            margin: 10,
            items: 4,
            responsiveClass: true,
            autoplay: true,
            nav: true,
            dots: false
        });
        SetHeightPromotionHighlightRowFirst();
        SetHeightPromotionHighlightRowNotFirst();
        SetHeightPromotionHighlightArticleRowNotFirst();
        SetHeightHomePromotion();
        SetHeightTopproduct();

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
        SetHeightPromotionHighlightRowFirst();
        SetHeightPromotionHighlightRowNotFirst();
        SetHeightPromotionHighlightArticleRowNotFirst();
        SetHeightHomePromotion();
        SetHeightTopproduct();
        // let HeightTopproduct = getHeightTopproduct();
        // let HeightPromotionArticle = getHeightPromotionHighlightArticle();
        // let resultHeightPromotioin = getHeightPromotion();

        // setHeightTopproduct(HeightTopproduct);
        // setHeightPromotion(resultHeightPromotioin);
        // setHeightPromotiontArticle(HeightPromotionArticle);
    });
    // $(window).resize(function () {
    //     if ($('#subscribe_popup').hasClass('popup-overlay')) {
    //         $('#subscribe_popup').center();
    //     }
    //     // get height menu header
    //     let resultHieghtKhuyenMai = $("#block-home-promotion .views-row").height();

    //     if (parseInt(result) > 0 || parseInt(resultHieghtKhuyenMai) > 0) {
    //         setHeightBlockHighlight(result);
    //         setHeightBlockKhuyenMai(resultHieghtKhuyenMai);
    //     } else {
    //         setHeightBlockHighlight('auto');
    //         setHeightBlockKhuyenMai('auto');
    //     }

    // });

    function getHeightHomePromotion() {
        let max_height = 0;
        $('#block-home-promotion .views-row .field-article-item .article-content').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });
        return max_height;
    }
    function SetHeightHomePromotion() {
        let max_height = 0;
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