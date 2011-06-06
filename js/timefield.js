/**
 * @file
 * Javascript for Timefield.
 */

/**
 * 
 */
(function ($) {
  Drupal.behaviors.timefield = {    
    attach: function(context) {
      $(".edit-field-timefield-picker, .edit-field-timefield-picker-2").live("focus", function(event) {
        var edit_field = this;
        var picker = $(this).closest('div').next(".field-timefield-picker");
        // Hide all timepickers except this one.
        $(".field-timefield-picker").hide();
        $(picker).show();
        var settings = Drupal.settings.timefield;
        settings.showOn = 'focus';
  		  settings.altField = edit_field;
        $(picker).timepicker( settings);
      });
    }
  };
})(jQuery);
