(function ($) {
    $(document).ready(function () {
        _slide();
        $('#block-system-main-menu .dropdown').hover(function () {
            $(this).find('.dropdown-menu').first().stop(true, true).delay(250).slideDown();
        }, function () {
            $(this).find('.dropdown-menu').first().stop(true, true).delay(100).slideUp();
        });
        $('#block-system-main-menu .dropdown > a').click(function () {
            location.href = this.href;
        });
    });
    $(window).resize(function () {
        _slide();
        setTimeout(function () { _slide(); }, 2000);

        $('.view-carousel-images .slick__slider').hover(
            function () {
                _slide();
            },
            function () {
            }
        );

        $('.slick__arrow .slick-arrow').click(function () {
            _slide();
        });
    });
    function _slide() {
        $('.view-carousel-images .slide__media').each(function () {
            if (jQuery(this).find('img').attr('data-lazy') != undefined && $(this).find('img').attr('data-lazy').length) {
                imageUrl = $(this).find('img').attr('data-lazy');
            } else {
                imageUrl = $(this).find('img').attr('src');
            }

            if (imageUrl == '') imageUrl = $(this).find('img').attr('data-lazy');

            $(this).css('background-image', 'url(' + imageUrl + ')');
        });
    }
})(jQuery);