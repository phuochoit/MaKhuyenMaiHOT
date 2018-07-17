
Facebook Random Autpost
-------------------

Project Home:
https://www.drupal.org/sandbox/kawal/2837725

Facebook Random Autopost allows you to publish random nodes to a selected
facebook page at the specified hours/minutes using cron.

Author(s):
  kawal <https://www.drupal.org/u/kawal>


Requirements
------------
Facebook PHP SDK v5.x
Github link: https://github.com/facebook/php-graph-sdk


Installation
------------

1. Install and enable the module.

2. Download Facebook PHP SDK v5.x from https://github.com/facebook/php-graph-sdk
and place it under "sites/all/libraries/php-graph-sdk" directory in such a way 
that autoload.php file is available at 
"sites/all/libraries/php-graph-sdk/src/Facebook/autoload.php"

CONFIGURATION
-------------

1. Create a facebook app on http://developers.facebook.com

2. Visit the Settings page (admin/config/services/fb-random-autopost).
     
     * Fill out the form.

     * On successful submission of the form, the "Synchronize Facebook pages" 
     button will be enabled that will allow you to connect your facebook account
     and automatically import facebook pages so that you can select which
     facebook page to be used.

     * On successful import of facebook pages,
     select the facebook page from the "Facebook page" select list.

3. Setup cron and make sure it gets triggered at proper intervals.

