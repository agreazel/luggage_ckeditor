<?php
/**
 * @file
 * luggage_ckeditor.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function luggage_ckeditor_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_per_field_core';
  $strongarm->value = 1;
  $export['better_formats_per_field_core'] = $strongarm;

  return $export;
}