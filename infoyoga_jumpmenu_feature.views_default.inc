<?php
/**
 * @file
 * infoyoga_jumpmenu_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function infoyoga_jumpmenu_feature_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'jump_menu_provincias';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Jump Menu Provincias';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = 1;
  $handler->display->display_options['style_options']['path'] = 'field_provincia_alias';
  $handler->display->display_options['style_options']['default_value'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Provincia Alias */
  $handler->display->display_options['fields']['field_provincia_alias']['id'] = 'field_provincia_alias';
  $handler->display->display_options['fields']['field_provincia_alias']['table'] = 'field_data_field_provincia_alias';
  $handler->display->display_options['fields']['field_provincia_alias']['field'] = 'field_provincia_alias';
  $handler->display->display_options['fields']['field_provincia_alias']['label'] = '';
  $handler->display->display_options['fields']['field_provincia_alias']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['text'] = 'centros/[field_provincia_alias]';
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_provincia_alias']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_provincia_alias']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_provincia_alias']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'provincias' => 'provincias',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Jump Menu Provincias';
  $translatables['jump_menu_provincias'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('centros/[field_provincia_alias]'),
    t('Block'),
    t('Jump Menu Provincias'),
  );
  $export['jump_menu_provincias'] = $view;

  return $export;
}
