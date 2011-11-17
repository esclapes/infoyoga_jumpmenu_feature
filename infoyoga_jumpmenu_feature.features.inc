<?php
/**
 * @file
 * infoyoga_jumpmenu_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function infoyoga_jumpmenu_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function infoyoga_jumpmenu_feature_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function infoyoga_jumpmenu_feature_node_info() {
  $items = array(
    'provincias' => array(
      'name' => t('Provincias'),
      'base' => 'node_content',
      'description' => t('Provincias para el jump menu'),
      'has_title' => '1',
      'title_label' => t('Provincia'),
      'help' => '',
    ),
  );
  return $items;
}
