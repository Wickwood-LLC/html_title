<?php

/**
* @file
* Views definitions for html_title module.
*/

/**
* Implements hook_views_data_alter().
*/
function html_title_views_data_alter(&$data) {
  // Replace standard node title handler with our own
  $data['node']['title']['field']['handler'] = 'html_title_handler_field_node_title';
}

function html_title_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'html_title') . '/views/handlers',
    ),
    'handlers' => array(
      'html_title_handler_field_node_title' => array(
        'parent' => 'views_handler_field_node',
      ),
    ),
  );
}