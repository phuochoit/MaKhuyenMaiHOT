/*
Copyright (c) 2003-2011, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/**
 * @file Plugin add pull quote style to highlighted text
 */

	CKEDITOR.plugins.add('pullquote',
	{
		init: function(editor)
		{			
            // Create a toolbar button that executes the plugin command. 
            // http://docs.cksource.com/ckeditor_api/symbols/CKEDITOR.ui.html#addButton
            editor.ui.addButton( 'pullQuote',
            {
                // Toolbar button tooltip.
                label: 'Pull Quote',
                // Reference to the plugin command name.
                command: 'pullQuote',
                // Button's icon file path.
                icon: this.path + 'images/quote.png'
            } );
            
            editor.addCommand( 'pullQuote', new CKEDITOR.dialogCommand( 'showQuoteDialog' ) );
            
            CKEDITOR.dialog.add( 'showQuoteDialog', function( editor ) {
                return {
                  title : 'Pull Quote',
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
                                [ '<none>', 'center' ],
                                [ 'Center', 'center' ],
                                [ 'Left', 'left' ],
                                [ 'Right', 'right' ]
                            ]
                        },
                        {
                            type : 'select',
                            id : 'style',
                            label : 'Style',
                            items : 
                            [
                                [ 'Normal', 'normal' ],
                                [ 'Italic', 'italic' ]                               
                            ]
                        }
                      ]
                    }
                  ],                
                  onOk : function() {
                    var editor = this.getParentEditor();
                    var content = this.getValueOf( 'quoteTab', 'contents' );
                    var position = this.getValueOf( 'quoteTab', 'position' );
                    var style = this.getValueOf( 'quoteTab', 'style' );
                    if ( content.length > 0 ) {
                        switch(style){
                            case 'italic':
                                style = ' font-style: italic; ';
                            break;
                            default:
                                style = '';
                            break;
                        }
                        switch(position){
                            case 'center':
                                style = style  + 'margin: 10px auto;';
                            break;
                            case 'left':
                                style = style + 'float: left; margin: 0 15px 5px 0;';
                            break;
                            case 'right':
                                style = style + 'float: right; margin: 0 0 5px 15px;';
                            break;
                        }
                        style = style + 'color: #808080; font-size: 22px; line-height: 22px; max-width: 375px; text-align: center; width: 100%;';
                        $text_html = '<blockquote class="'+position+'" style="'+ style +'"></blockquote>';
                        var blockQuote = CKEDITOR.dom.element.createFromHtml($text_html);
                        blockQuote.setHtml('"'+content+'"');
                        editor.insertElement(blockQuote);
                    }
                  }
                };
            });
		}
	});
