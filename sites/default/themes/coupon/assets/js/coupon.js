(function ($) {
    $(document).ready(function () {
        $('#block-views-store-block-store-carousel #block_store_carousel').owlCarousel({
            items: 5,
            loop: true,
            autoplayTimeout: 3000,
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
    });

    $(document).ajaxComplete(function (event, xhr, settings) {
        show_full_coupon_item();
        SetProductHeight();

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

        product_coupon_categories_height = get_product_coupon_categorie_height();
        product_coupon_categories_height_article = get_product_coupon_categorie_article_height();
        product_coupon_categories_height_article_title = get_product_coupon_categorie_article_height();

        $('#block-views-product-block .views-row .block-dark-border').height(block_height);
        $('#block-views-product-block .views-row .article-item').height(block_height_article + 20);
        $('#block-views-product-block .views-row .article-item .article-title').height(block_height_title);;

        $('#product .view-display-id-block_product_by_coupon_categories .views-row .block-dark-border,.view-display-id-block_product_by_stores_categories .views-row .block-dark-border,.page-san-pham .view-id-product  .views-row .block-dark-border').height(product_coupon_categories_height);

        $('#product .view-display-id-block_product_by_coupon_categories .views-row .article-item,.view-display-id-block_product_by_stores_categories .views-row .article-item,.page-san-pham .view-id-product  .views-row .article-item').height(product_coupon_categories_height_article);

        $('#product .view-display-id-block_product_by_coupon_categories .views-row .article-item .article-title,.view-display-id-block_product_by_stores_categories .views-row .article-item .article-title,.page-san-pham .view-id-product .views-row .article-item .article-title').height(product_coupon_categories_height_article_title);

    }

    // product_coupon_categories
    function get_product_coupon_categorie_height() {
        $('#product').show();
        max_height = 0;
        $('#product .view-display-id-block_product_by_coupon_categories .views-row .block-dark-border,.view-display-id-block_product_by_stores_categories .views-row .block-dark-border,.page-san-pham .view-id-product .views-row .block-dark-border').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });
        $('#product').removeAttr('style');
        return max_height;
    }
    function get_product_coupon_categorie_article_height() {
        $('#product').show();
        max_height = 0;
        $('#product .view-display-id-block_product_by_coupon_categories .views-row .article-item,,.view-display-id-block_product_by_stores_categories .views-row .article-item,.page-san-pham .view-id-product .views-row .article-item').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });
        $('#product').removeAttr('style');
        return max_height;
    }
    function get_product_coupon_categorie_article_height() {
        $('#product').show();
        max_height = 0;
        $('#product .view-display-id-block_product_by_coupon_categories .views-row .article-item .article-title,.view-display-id-block_product_by_stores_categories .views-row .article-item .article-title,.page-san-pham .view-id-product .views-row .article-item .article-title').each(function (i, val) {
            max_height = (max_height <= $(this).height()) ? $(this).height() : max_height;
        });
        $('#product').removeAttr('style');
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

})(jQuery);