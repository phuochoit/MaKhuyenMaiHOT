<?php

/**
 * @file
 * Displays admin report.
 */

/**
 * Callback for report.
 */
function fb_random_autopost_report() {
  // Pager query.
  $query = db_select('fb_random_autopost_nodes', 'f')->extend('PagerDefault');
  $query->fields('f');
  $query->fields('n', array('title'));
  $query->join('node', 'n', 'f.nid = n.nid');
  $query->orderBy('id', 'DESC');
  $result = $query->limit(30)->execute();

  $rows = array();

  foreach ($result as $row) {
    $rows[] = array(
      $row->id,
      l($row->title, 'node/' . $row->nid),
      l($row->fb_post_id, 'https://facebook.com/' . $row->fb_post_id, array('attributes' => array('target' => '_blank'))),
      date('Y-m-d H:i', $row->post_date),
    );
  }

  $build = array();

  $build['table'] = array(
    '#theme' => 'table',
    '#header' => array(
      t('ID'),
      t('Node'),
      t('Facebook Post ID'),
      t('Posted on'),
    ),
    '#rows' => $rows,
    '#empty' => t('No posts available'),
  );

  $build['pager'] = array(
    '#theme' => 'pager',
  );

  return render($build);
}
