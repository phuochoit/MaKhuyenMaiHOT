(function ($) { 
    $(window).resize(function () {
        if ($('#subscribe_popup').hasClass('popup-overlay')) {
            $('#subscribe_popup').center();
        }
        // get height menu header
        let result = $("#block-system-main-menu").height();
        if (parseInt(result) > 0) {
            setHeightBlockHighlight(result);
        } else {
            setHeightBlockHighlight('auto');
        }

    });

    function setHeightBlockHighlight(height){
        // $('#block-ma-giam-gia-noi-bat').height(height); 
    }
})(jQuery);