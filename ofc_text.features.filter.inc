<?php
/**
 * @file
 * ofc_text.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ofc_text_filter_default_formats() {
  $formats = array();

  // Exported format: Markdown.
  $formats['3'] = array(
    'format' => '3',
    'name' => 'Markdown',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_markdown' => array(
        'weight' => '-50',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => '-49',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_autop' => array(
        'weight' => '-43',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
