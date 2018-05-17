/*
Copyright (c) 2003-2011, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/**
 * @file Plugin add quote/comment
 */
 

	CKEDITOR.plugins.add('insertquote',
	{
		init: function(editor)
		{			
            // Create a toolbar button that executes the plugin command. 
            // http://docs.cksource.com/ckeditor_api/symbols/CKEDITOR.ui.html#addButton
            editor.ui.addButton( 'addQuote',
            {
                // Toolbar button tooltip.
                label: 'Insert Quote',
                // Reference to the plugin command name.
                command: 'addQuote',
                // Button's icon file path.
                icon: this.path + 'images/add.png'
            } );
            
            editor.addCommand( 'addQuote', new CKEDITOR.dialogCommand( 'showQuoteDialog' ) );
            
            CKEDITOR.dialog.add( 'showQuoteDialog', function( editor ) {
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
                            validate : CKEDITOR.dialog.validate.notEmpty( 'The Quote Text field cannot be empty.' ),
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
                                [ '<none>', 'quote_center' ],
                                [ 'Top/Center', 'quote-center' ],
                                [ 'Left', 'quote-left' ],
                                [ 'Right', 'quote-right' ]
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
