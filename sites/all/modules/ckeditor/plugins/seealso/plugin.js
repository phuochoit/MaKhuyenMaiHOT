/*
Copyright (c) 2003-2011, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/**
 * @file Plugin for inserting See Also link
 */
 
(function() {
	
	var insertSeeAlsoOne = { exec: function(editor) {
		parent.seealso_get(0);
	}};
	
	var insertSeeAlsoTwo = { exec: function(editor) {
		seealso_get(1);
	}};
	
	var insertSeeAlsoThree = { exec: function(editor) {
		seealso_get(2);
	}};
	
	CKEDITOR.plugins.add('seealso',
	{
		init: function(editor)
		{
			// =================
			// button 1, first param cant contain SPACE
			editor.ui.addButton('SeeAlso1',
			{
				label: 'Insert See Also link 1 into body',
				command: 'insertSeeAlsoOne',
				icon: this.path + 'images/seealso-1.gif'
			});
			editor.addCommand('insertSeeAlsoOne', insertSeeAlsoOne);
			
			// =================
			// button 2
			editor.ui.addButton('SeeAlso2',
			{
				label: 'Insert See Also link 2 into body',
				command: 'insertSeeAlsoTwo',
				icon: this.path + 'images/seealso-2.gif'
			});
			editor.addCommand('insertSeeAlsoTwo', insertSeeAlsoTwo);
			
			// =================
			// button 3
			editor.ui.addButton('SeeAlso3',
			{
				label: 'Insert See Also link 3 into body',
				command: 'insertSeeAlsoThree',
				icon: this.path + 'images/seealso-3.gif'
			});
			editor.addCommand('insertSeeAlsoThree', insertSeeAlsoThree);
		}
	});
})();
