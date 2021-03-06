<?PHP

/**
 * @file
 * Holds block definitions for the islandora matomo module.
 */

/**
 * Constructs the matomo widget block for islandora objects.
 *
 * @param \AbstractObject|NULL $object
 *   If supplied the object to create the block for.
 *
 * @return array
 *   Renderable array for the block.
 * @throws \Exception
 */
function islandora_matomo_widgetonobject_block(AbstractObject $object = NULL) {
  // @TODO discuss with Born Digital what CSS they would love to override.
  // drupal_add_css(drupal_get_path('module', 'islandora_matomo')
  // . '/css/islandora_matomo.block.css');
  $object = $object ? $object : menu_get_object('islandora_object', 2);
  $output = '';
  if ($object) {
    $pid = $object->id;
    if ($pid != 'islandora:root' && $pid != variable_get(
        'islandora_repository_pid',
        'islandora:root'
      )) {
      $widget = theme('islandora_matomo_widget', ['PID' => $pid]);
      $output .= $widget;
      if (!empty($output)) {
        return ['#markup' => $output];
      }
    }
  }
}

/**
 * Constructs the matomo counter block for islandora objects.
 *
 * @param \AbstractObject|NULL $object
 *   If supplied the object to create the block for.
 *
 * @return array
 *    Renderable array for the block.
 * @throws \Exception
 */
function islandora_matomo_countonobject_block(AbstractObject $object = NULL) {
  $object = $object ? $object : menu_get_object('islandora_object', 2);
  $output = '';
  if ($object) {
    $pid = $object->id;
    if ($pid != 'islandora:root' && $pid != variable_get(
        'islandora_repository_pid',
        'islandora:root'
      )) {
      $widget = theme('islandora_matomo_count', ['PID' => $pid]);
      $output .= $widget;
      if (!empty($output)) {
        return ['#markup' => $output];
      }
    }
  }
}