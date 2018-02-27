(function ($) { 
    $(document).ready(function () {
        let result = $("#featured-ma-giam-gia-noi-bat .views-row:not(.views-row-first) .views-field-field-image").height();
        let resultHieghtKhuyenMai = $("#block-home-khuyen-mai .views-row").height();

        if (parseInt(result) > 0 || parseInt(resultHieghtKhuyenMai) > 0) {
            setHeightBlockHighlight(result);
            setHeightBlockKhuyenMai(resultHieghtKhuyenMai);
        } else {
            setHeightBlockHighlight('auto');
            setHeightBlockKhuyenMai('auto');
        }
    });

    $(document).ajaxComplete(function (event, xhr, settings) {  
        let resultHieghtKhuyenMai = $("#block-home-khuyen-mai .views-row").height();
        if (parseInt(resultHieghtKhuyenMai) > 0) {
            setHeightBlockKhuyenMai(resultHieghtKhuyenMai);
        } else {
            setHeightBlockKhuyenMai('auto');
        }
    });
    $(window).resize(function () {
        if ($('#subscribe_popup').hasClass('popup-overlay')) {
            $('#subscribe_popup').center();
        }
        // get height menu header
        let result = $("#featured-ma-giam-gia-noi-bat .views-row:not(.views-row-first) .views-field-field-image").height();
        let resultHieghtKhuyenMai = $("#block-home-khuyen-mai .views-row").height();
        
        if (parseInt(result) > 0 || parseInt(resultHieghtKhuyenMai) > 0) {
            setHeightBlockHighlight(result);
            setHeightBlockKhuyenMai(resultHieghtKhuyenMai);
        } else {
            setHeightBlockHighlight('auto');
            setHeightBlockKhuyenMai('auto');
        }

    });

    function setHeightBlockHighlight(height){
        $('#featured-ma-giam-gia-noi-bat .views-row:not(.views-row-first) .views-field-field-image').height(height); 
    }

    function setHeightBlockKhuyenMai(height) {
        $('#block-home-khuyen-mai .views-row .wrapper-view-field').height(height);
    }
})(jQuery);