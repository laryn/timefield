<?php


/**
 * @file
 *   Default views hooks.
 */

/**
 * Implements hook_views_plugins().
 */
function timefield_views_plugins() {
  $plugins = array(
    'module' => 'timefield',
    'style' => array(
      'timefield_minical' => array(
        'title' => t('Timefield MiniCal'),
        'help' => t('Displays a Mini Summary of Timefield.'),
        'handler' => 'TimefieldPluginStyleMinical',
        'theme' => 'timefield_minical',
        'theme path' => drupal_get_path('module', 'timefield') . '/views',
        'path' => drupal_get_path('module', 'timefield') . '/views',
        'uses fields' => TRUE,
        'uses row plugin' => FALSE,
        'uses options' => TRUE,
        'uses grouping' => FALSE,
        'type' => 'normal',
        'even empty' => TRUE,
      ),
    ),
  );

  return $plugins;
}

/**
 * Implements hook_field_views_data_views_data_alter().
 *
 * Add extra fake field data for duration to the Views data for each
 * timefield field.
 */
function timefield_field_views_data_views_data_alter(&$data, $field) {
  $field_name = $field['field_name'];
  $data_key = 'field_data_' . $field_name;

  // Copy the basics.
  $data[$data_key]['timefield_duration'] = array(
    'group'       => $data[$data_key][$field_name]['group'],
    'title'       => $data[$data_key][$field_name]['title'] . ': ' . t('Duration'),
    'title short' => $data[$data_key][$field_name]['title short'],
    'help'        => $data[$data_key][$field_name]['help'],
  );
  $data[$data_key]['timefield_duration']['field'] = array(
    'table' => $data[$data_key][$field_name]['field']['table'],
    'field_name' => $data[$data_key][$field_name]['field']['field_name'],
    'handler' => 'timefield_hander_field_timefield_duration',
  );
}
