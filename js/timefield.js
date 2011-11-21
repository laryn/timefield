/**
 * @file
 * Javascript for Timefield.
 */

/**
 * 
 */
(function ($) {
  Drupal.behaviors.timefield = {    
    attach: function(context, settings) {
      $(".edit-timefield-summary-picker", context).each(function(index) {      
        $(this).timepicker(settings.timefield);
      });    
  
    }
  };
})(jQuery);
