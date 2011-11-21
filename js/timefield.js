/**
 * @file
 * Javascript for Timefield.
 */

(function ($) {
  Drupal.behaviors.timefield = {    
    attach: function(context, settings) {
      $(".edit-timefield-timepicker", context).each(function(index) {      
        $(this).timepicker(settings.timefield);
      });    
    }
  };
})(jQuery);
