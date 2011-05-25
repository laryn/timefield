<?php

/**
 * @file
 * TODO: Describe what this template is here for.
 */
?>
<div class="time-default">
  <?php print $time['formatted_value'] ?>
  <?php if (isset($time['value2'])): ?>
   <?php print ' - ' . $time['formatted_value2'] ?>
  <?php endif; ?>
</div>
