<?php

/*
 * @file Day filter for Timefield views integration.
 */


/**
 * Simple filter to handle greater than/less than filters
 */
class timefield_views_handler_filter_day extends views_handler_filter {
  function admin_summary() { }

  /**
   * Provide a form for setting the operator.
   *
   * This may be overridden by child classes, and it must
   * define $form['operator'];
   */
  function operator_form(&$form, &$form_state) {
    $options = $this->operator_options();
    if (!empty($options)) {
      $form['operator'] = array(
        '#type' => count($options) < 10 ? 'radios' : 'select',
        '#title' => t('Operator'),
        '#default_value' => $this->operator,
        '#options' => $options,
       // '#multiple' => TRUE,
      );
    }
  }

  /**
   * Provide a list of options for the default operator form.
   */
  function operator_options() {
    return _timefield_weekly_summary_days();
  }


  function can_expose() { return FALSE; }

  function query() {
    $table = $this->ensure_my_table();


    dpm($this->options);
    dpm($this->operator);

   // $this->query->add_where_expression(
   // $this->options['group'], "$table.status = 1 OR (
   // $table.uid = ***CURRENT_USER*** AND ***CURRENT_USER*** <> 0 AND ***VIEW_OWN_UNPUBLISHED_NODES*** = 1) OR ***ADMINISTER_NODES*** = 1");
  }
}
