<?php
/**
 * @file
 * migration_demo.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function migration_demo_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|lizard|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lizard';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_more_info',
      2 => 'field_region',
      3 => 'field_metal',
      4 => 'field_date',
      5 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-info field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_info|node|lizard|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_photo|node|lizard|form';
  $field_group->group_name = 'group_photo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lizard';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Photo',
    'weight' => '5',
    'children' => array(
      0 => 'field_image',
      1 => 'field_image_caption',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-photo field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_photo|node|lizard|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_soundtrack|node|lizard|form';
  $field_group->group_name = 'group_soundtrack';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lizard';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Soundtrack',
    'weight' => '6',
    'children' => array(
      0 => 'field_soundtrack',
      1 => 'field_soundtrack_credits',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-soundtrack field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_soundtrack|node|lizard|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Info');
  t('Photo');
  t('Soundtrack');

  return $field_groups;
}
