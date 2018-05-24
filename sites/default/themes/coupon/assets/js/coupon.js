(function ($) {
    $(document).ready(function () {
        $('#block-views-store-block-store-carousel #block_store_carousel').owlCarousel({
            items: 5,
            loop: true,
            autoplayTimeout: 3000000,
            margin: 20,
            responsiveClass: true,
            autoplay: true,
            nav: true,
            dots: false
        });
        
        result = $("#block-system-main-menu").height();
        if (parseInt(result) > 0) {
            setHeightHeaderLogo(result);
        }
        show_full_coupon_item();
        SetProductHeight();

        // countDown();

        // var count = 3;
        // var redirect = "https://fast.accesstrade.com.vn/deep_link/4731474359141607542?url=https%3A//www.yes24.vn/mua-sam-tha-ga-km675310.html";
        // function countDown() {
        //     var timer = document.getElementById("timer");
        //     if (count > 0) {
        //         count--;
        //         timer.innerHTML = "Bạn đang được chuyển tới trang đích trong <b>" + count + "</b> giây nữa";
        //         setTimeout("countDown()", 1000);
        //     } else {
        //         window.location.href = redirect;
        //     }
        // }

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
        show_full_coupon_item();
        SetProductHeight();
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

    function show_full_coupon_item(){
        $('body').on('click', '.coupon-item .more, .coupon-item .less', function (e) {
            e.preventDefault();
            more = $(this);
            p = more.closest('.coupon-item');
            p.toggleClass('show-full');
        });
    }
    
    function SetProductHeight(){
        block_height = getProductHeight();
        block_height_title = getProductTitleHeight();
        block_height_article = getProductArticleHeight();

        page_height = getPageProductHeight();
        page_height_title = getPageProductTitleHeight();
        page_height_article = getPageProductArticleHeight();

        product_coupon_categories_height = get_product_coupon_categorie_height();
        product_coupon_categories_height_article = get_product_coupon_categorie_article_height();
        product_coupon_categories_height_article_title = get_product_coupon_categorie_article_height();

        $('#block-views-product-block .views-row .block-dark-border').height(block_height);
        $('#block-views-product-block .views-row .article-item').height(block_height_article + 20);
        $('#block-views-product-block .views-row .article-item .article-title').height(block_height_title);

        $('.page-san-pham .view-id-product  .views-row .block-dark-border').height(page_height);
        $('.page-san-pham .view-id-product  .views-row .article-item').height(page_height_article);
        $('.page-san-pham .view-id-product .views-row .article-item .article-title').height(page_height_title);

        $('#product .view-display-id-block_product_by_coupon_categories .views-row .block-dark-border').height(product_coupon_categories_height);
        $('#product .view-display-id-block_product_by_coupon_categories .views-row .article-item').height(product_coupon_categories_height_article);
        $('#product .view-display-id-block_product_by_coupon_categories .views-row .article-item .article-title').height(product_coupon_categories_height_article_title);

    }

    // product_coupon_categories
    function get_product_coupon_categorie_height() {
        $('#product').show();
        max_height = 0;
        $('#product .view-display-id-block_product_by_coupon_categories .views-row .block-dark-border').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });
        $('#product').removeAttr('style');
        return max_height;
    }
    function get_product_coupon_categorie_article_height() {
        $('#product').show();
        max_height = 0;
        $('#product .view-display-id-block_product_by_coupon_categories .views-row .article-item').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });
        $('#product').removeAttr('style');
        return max_height;
    }
    function get_product_coupon_categorie_article_height() {
        $('#product').show();
        max_height = 0;
        $('#product .view-display-id-block_product_by_coupon_categories .views-row .article-item .article-title').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });
        $('#product').removeAttr('style');
        return max_height;
    }
    
    // page prodct
    function getPageProductArticleHeight() {
        max_height = 0;
        $('.page-san-pham .view-id-product .views-row .article-item').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });
        return max_height;
    }

    function getPageProductHeight() {
        max_height = 0;
        $('.page-san-pham .view-id-product .views-row .block-dark-border').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });
        return max_height;
    }

    function getPageProductTitleHeight() {
        max_height = 0;
        $('.page-san-pham .view-id-product .views-row .article-item .article-title').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });
        return max_height;
    }

    // block

    function getProductTitleHeight() {
        max_height = 0;
        $('#block-views-product-block .views-row .article-item .article-title').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });
        return max_height;
    }

    function getProductArticleHeight(){
        max_height = 0;
        $('#block-views-product-block .views-row .article-item').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });
        return max_height;
    }

    function getProductHeight(){
        max_height = 0;
        $('#block-views-product-block .views-row .block-dark-border').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });
        return max_height;
    }



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