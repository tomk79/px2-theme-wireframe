<?php
$copyright = $mytheme->get_option('copyright');
if(!@strlen($copyright)){
    $copyright = $px->conf()->name;
}
?><p style="text-align:center;">&copy;<?= htmlspecialchars($copyright); ?>, All rights reserved.</p>
