<?php

/**
 * @file
 * islandora-matomo-widget.tpl.php
 */
?>
<?php if ($matomo_token): ?>
<div class="islandora-matomo-widget">
  <div id="widgetIframe">
      <h5>Mapped visits during the last 30 days for this resource</h5>
        <iframe width="100%" height="350" src="<?php print $matomo_iframe_url; ?>" frameborder="0" marginheight="0" marginwidth="0" scrolling="yes">
        </iframe>
  </div>
  <div id="widgetIframe2">
      <h5>Real time visits Map (24 hours)</h5>
        <iframe width="100%" height="460" src="<?php print $matomo_iframe_url2; ?>"  frameborder="0" marginheight="0" marginwidth="0" scrolling="yes">
        </iframe>
  </div>
</<div>
<?php endif;?>
