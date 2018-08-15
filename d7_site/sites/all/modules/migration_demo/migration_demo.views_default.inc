<?php
/**
 * @file
 * migration_demo.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function migration_demo_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lizards';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lizards';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lizards';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Image Credits */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  /* Field: Content: Soundtrack */
  $handler->display->display_options['fields']['field_soundtrack']['id'] = 'field_soundtrack';
  $handler->display->display_options['fields']['field_soundtrack']['table'] = 'field_data_field_soundtrack';
  $handler->display->display_options['fields']['field_soundtrack']['field'] = 'field_soundtrack';
  $handler->display->display_options['fields']['field_soundtrack']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_soundtrack']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Why its METAL */
  $handler->display->display_options['fields']['field_metal']['id'] = 'field_metal';
  $handler->display->display_options['fields']['field_metal']['table'] = 'field_data_field_metal';
  $handler->display->display_options['fields']['field_metal']['field'] = 'field_metal';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lizard' => 'lizard',
  );

  /* Display: Table */
  $handler = $view->new_display('page', 'Table', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_image' => 'field_image',
    'field_image_caption' => 'field_image_caption',
    'field_soundtrack' => 'field_soundtrack',
    'field_metal' => 'field_metal',
    'edit_node' => 'edit_node',
    'field_soundtrack_credits' => 'field_soundtrack_credits',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_soundtrack' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_metal' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_soundtrack_credits' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Image Credits */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  /* Field: Content: Soundtrack */
  $handler->display->display_options['fields']['field_soundtrack']['id'] = 'field_soundtrack';
  $handler->display->display_options['fields']['field_soundtrack']['table'] = 'field_data_field_soundtrack';
  $handler->display->display_options['fields']['field_soundtrack']['field'] = 'field_soundtrack';
  $handler->display->display_options['fields']['field_soundtrack']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_soundtrack']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Why its METAL */
  $handler->display->display_options['fields']['field_metal']['id'] = 'field_metal';
  $handler->display->display_options['fields']['field_metal']['table'] = 'field_data_field_metal';
  $handler->display->display_options['fields']['field_metal']['field'] = 'field_metal';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: Content: Soundtrack Credits */
  $handler->display->display_options['fields']['field_soundtrack_credits']['id'] = 'field_soundtrack_credits';
  $handler->display->display_options['fields']['field_soundtrack_credits']['table'] = 'field_data_field_soundtrack_credits';
  $handler->display->display_options['fields']['field_soundtrack_credits']['field'] = 'field_soundtrack_credits';
  $handler->display->display_options['path'] = 'lizards';

  /* Display: Grid */
  $handler = $view->new_display('page', 'Grid', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lizards are METAL';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Soundtrack */
  $handler->display->display_options['fields']['field_soundtrack']['id'] = 'field_soundtrack';
  $handler->display->display_options['fields']['field_soundtrack']['table'] = 'field_data_field_soundtrack';
  $handler->display->display_options['fields']['field_soundtrack']['field'] = 'field_soundtrack';
  $handler->display->display_options['fields']['field_soundtrack']['label'] = '';
  $handler->display->display_options['fields']['field_soundtrack']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_soundtrack']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_soundtrack']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Why its METAL */
  $handler->display->display_options['fields']['field_metal']['id'] = 'field_metal';
  $handler->display->display_options['fields']['field_metal']['table'] = 'field_data_field_metal';
  $handler->display->display_options['fields']['field_metal']['field'] = 'field_metal';
  $handler->display->display_options['path'] = 'lizards-are-metal';
  $export['lizards'] = $view;

  return $export;
}
