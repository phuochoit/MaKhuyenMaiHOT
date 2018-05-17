/*
Copyright (c) 2003-2011, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/**
 * @file Insert a space into body
 */
 
(function() {
	
	CKEDITOR.plugins.add('addspace',
	{
		init: function(editor)
		{
			editor.ui.addButton('addSpace',
			{
				label: 'Insert a space into body',
				command: 'addSpaceDialog',
				icon: this.path + 'images/add.png'
			});
			editor.addCommand( 'addSpaceDialog', new CKEDITOR.dialogCommand( 'addSpaceDialog' ) );	
            // Add a dialog window definition containing all UI elements and listeners.
    		// http://docs.cksource.com/ckeditor_api/symbols/CKEDITOR.dialog.html#.add
    		CKEDITOR.dialog.add( 'addSpaceDialog', function( editor )
            {
            	return {
            		title : 'Add Space Properties',
            		minWidth : 200,
            		minHeight : 50,
            		contents :
            		[
            			{
            				id : 'general',
            				label : 'Settings',
            				elements :
            				[
            				 	// UI elements of the Settings tab.                                
                                {
                                	type : 'text',
                                	id : 'height',
                                	label : 'Height (in pixel)',
                                	validate : CKEDITOR.dialog.validate.notEmpty( 'Height cannot be empty' ),
                                	required : true,                                    
                            		commit : function( data ) { // when ok
                            			data.height = this.getValue();
                            		}
                                }
            				]
            			}
            		],
                    onOk : function()
    				{
    					var dialog = this,
    						data = {},
    						button = editor.document.createElement( 'p' );    				        
    					this.commitContent( data );                         
                            
                        style = 'height:' + data.height + 'px; width: 100%;'; 
                        button.setAttribute('style',style);                                             
                        button.setHtml('&nbsp;');
    					// Insert the link element into the current cursor position in the editor.    				
    					editor.insertElement( button );
    				}
            	};
            });
		}
	});
})();
