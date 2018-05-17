/*
Copyright (c) 2003-2011, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/**
 * @file Plugin add quote/comment for athena
 */
 

	CKEDITOR.plugins.add('athenaquote',
	{
		init: function(editor)
		{			
            // Create a toolbar button that executes the plugin command. 
            // http://docs.cksource.com/ckeditor_api/symbols/CKEDITOR.ui.html#addButton
            editor.ui.addButton( 'btnQuote',
            {
                // Toolbar button tooltip.
                label: 'Insert Quote',
                // Reference to the plugin command name.
                command: 'btnQuote',
                // Button's icon file path.
                icon: this.path + 'images/add.png'
            } );
            
            editor.addCommand( 'btnQuote', new CKEDITOR.dialogCommand( 'showathenaQuoteDialog' ) );
            
            CKEDITOR.dialog.add( 'showathenaQuoteDialog', function( editor ) {
                return {
                  title : 'Insert Quote',
                  minWidth : 400,
                  minHeight : 200,
                  contents : [
                    {
                      id : 'quoteTab',
                      label : 'Settings',
                      elements :
                      [
                        {
                            type : 'textarea',
                            id : 'contents',
                            label : 'Quote Text',
                            validate : CKEDITOR.dialog.validate.notEmpty( 'The quote text field cannot be empty.' ),
                            required : true,
                            commit : function( data ) {
                                data.contents = this.getValue();
                            }
                        },
                        {
                            type : 'select',
                            id : 'position',
                            label : 'Position',
                            items : 
                            [                                
                                [ 'Default/Center', 'quote-center' ],
                                [ 'Left', 'quote-left' ]
                            ]
                        }
                      ]
                    }
                  ],                
                  onOk : function() {
                    var editor = this.getParentEditor();
                    var content = this.getValueOf( 'quoteTab', 'contents' );
                    var position = this.getValueOf( 'quoteTab', 'position' );
                    if ( content.length > 0 ) {
                      var blockQuote = CKEDITOR.dom.element.createFromHtml('<blockquote class="'+position+'"></blockquote>');
                      blockQuote.setHtml(content);
                      editor.insertElement(blockQuote);
                    }
                  }
                };
            });
		}
	});
