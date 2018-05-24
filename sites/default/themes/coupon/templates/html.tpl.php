<!DOCTYPE html>
<!--[if lt IE 7]> <html class="ie6 ie" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"> <![endif]-->
<!--[if IE 7]>    <html class="ie7 ie" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"> <![endif]-->
<!--[if IE 8]>    <html class="ie8 ie" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"> <![endif]-->
<!--[if gt IE 8]> <!--> 
<html class="" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"> <!--<![endif]-->
    <head>
        <?php print $head; ?>
        <!-- Set the viewport width to device width for mobile -->
        <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no">
        <title><?php print $head_title; ?></title>
        <link href="https://fonts.googleapis.com/css?family=Roboto:400,500,700,900i" rel="stylesheet">
        <?php print $styles; ?>
        
        <!-- IE Fix for HTML5 Tags -->
        <!--[if lt IE 9]>
            <script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
        <![endif]-->
        <script type="text/javascript">
            var __atsmarttag = {
                pub_id: '4731474359141607542'
            };
            (function () {
                var script = document.createElement('script');
                script.src = '//static.accesstrade.vn/js/atsmarttag.min.js?v=1.1.0';
                script.type = 'text/javascript';
                script.async = true;
                (document.getElementsByTagName('head')[0]||document.getElementsByTagName('body')[0]).appendChild(script);
            })();
        </script>
    </head>

    <body class="<?php print $classes; ?>" <?php print $attributes;?>>

    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $scripts; ?>
    <?php print $page_bottom; ?>

    </body>

</html>
