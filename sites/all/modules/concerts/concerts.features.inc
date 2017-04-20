<?php
/**
 * @file
 * concerts.features.inc
 */

/**
 * Implements hook_node_info().
 */
function concerts_node_info() {
  $items = array(
    'concerts' => array(
      'name' => t('Concerts'),
      'base' => 'node_content',
      'description' => t('Concert information'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
