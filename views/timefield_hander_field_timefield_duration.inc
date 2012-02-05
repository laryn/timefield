<?php
/**
 * Contains the duration field handler.
 */

class timefield_hander_field_timefield_duration extends views_handler_field {
  function query() {
    $this->ensure_my_table();

    // Get the Field API field name from the definition.
    $field_name = $this->definition['field_name'];
    // Create our formula: value2 - value is the duration in seconds.
    $formula = $field_name . '_value2' . ' - ' . $field_name . '_value';
    // Add our expression to the query.
    $this->name_alias = $this->query->add_field(NULL, $formula, $this->table_alias . '_duration');
  }

  function render($values) {
    $value = $values->{$this->name_alias};

    // Mock up a settings array.
    // @TODO: add an options ui.
    // @TODO: make it possible to show things like '1h30'.
    // This would need a helper timefield_integer_to_duration() in the main
    // module.
    $settings = array(
      'separator' => ':',
      'period_separator' => '',
      'period' => '',
      'hour' => 'g',
      'minute' => 'i',
    );
    $value = timefield_integer_to_time($settings, $value);

    return $value;
  }
}
