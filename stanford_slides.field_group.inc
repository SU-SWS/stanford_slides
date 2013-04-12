<?php
/**
 * @file
 * stanford_slides.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_slides_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_slide_show_settngs|node|stanford_slide|form';
  $field_group->group_name = 'group_s_slide_show_settngs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slideshow Settings',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_slide_category',
      1 => 'field_s_slide_weight',
      2 => 'field_s_slide_caption_position_v',
      3 => 'field_s_slide_caption_position',
      4 => 'field_s_slide_caption_color',
      5 => 'field_s_slide_caption_position_h',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Slideshow Settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_slide_show_settngs|node|stanford_slide|form'] = $field_group;

  return $export;
}