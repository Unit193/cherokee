/* CTK'fied version
 */

jQuery.fn.DefaultValue = function(klass, text){
    function update (self) {
	   var val = self.val();

	   if(val == text || val == '') {
		  self.val (text);
		  self.addClass (klass);
	   } else {
		  self.removeClass (klass);
	   }

    }

    return this.each(function(){
	   var self = $(this);

	   //Make sure we're dealing with text-based form fields
	   if (this.type != 'text' && this.type != 'password' && this.type != 'textarea') {
		  return;
	   }

	   //Set value initially if none are specified
	   update (self);

	   //Remove values on focus
	   self.focus(function() {
		  if(self.val() == text || self.val() == '') {
			 self.removeClass(klass);
			 self.val('');
		  }
	   });

	   //Place values back on blur
	   self.blur(function() {
		  if(self.val() == text || self.val() == '') {
			 self.addClass(klass);
			 self.val(text);
		  }
	   });

	   //Update
	   self.bind('update', function() {
		  update (self);
	   });
    });
};
