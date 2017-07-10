<?php
/**
 * @file
 * Default implementation of the visitors settings reports template.
 *
 * Available variables:
 * - $piwik_url: piwik server base url.
 * - $data1_url: complete url with params to get selected report.
 * - $data2_url: complete url with params to get selected report.
 * - $data3_url: complete url with params to get selected report.
 * - $data4_url: complete url with params to get selected report.
 */
?>
<h2><?php print t('Browser families') ?></h2>
<div class="content">
  <object width="100%" height="250" type="application/x-shockwave-flash" data="<?php print $piwik_url ?>/libs/open-flash-chart/open-flash-chart.swf?piwik=1.4" id="UserSettingsgetBrowserTypeChart">
    <param name="allowScriptAccess" value="always"/>
    <param name="wmode" value="opaque"/>
    <param name="flashvars" value="data-file=<?php print $data1_url ?>"/>
  </object>
</div>

<h2><?php print t('Configurations') ?></h2>
<div class="content">
  <object width="100%" height="250" type="application/x-shockwave-flash" data="<?php print $piwik_url ?>/libs/open-flash-chart/open-flash-chart.swf?piwik=1.4" id="UserSettingsgetConfigurationChart">
    <param name="allowScriptAccess" value="always"/>
    <param name="wmode" value="opaque"/>
    <param name="flashvars" value="data-file=<?php print $data2_url ?>"/>
  </object>
</div>

<h2><?php print t('Operating systems') ?></h2>
<div class="content">
  <object width="100%" height="250" type="application/x-shockwave-flash" data="<?php print $piwik_url ?>/libs/open-flash-chart/open-flash-chart.swf?piwik=1.4" id="UserSettingsgetOSChart">
    <param name="allowScriptAccess" value="always"/>
    <param name="wmode" value="opaque"/>
    <param name="flashvars" value="data-file=<?php print $data3_url ?>"/>
  </object>
</div>

<h2><?php print t('Screen resolutions') ?></h2>
<div class="content">
  <object width="100%" height="250" type="application/x-shockwave-flash" data="<?php print $piwik_url ?>/libs/open-flash-chart/open-flash-chart.swf?piwik=1.4" id="UserSettingsgetResolutionChart">
    <param name="allowScriptAccess" value="always"/>
    <param name="wmode" value="opaque"/>
    <param name="flashvars" value="data-file=<?php print $data4_url ?>"/>
  </object>
</div>