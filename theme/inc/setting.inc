<?php
$mytheme = $theme;
if(get_class($mytheme) != 'tomk79\pickles2\themes\wireframe\theme'){
	$mytheme = new tomk79\pickles2\themes\wireframe\theme($px);
}
?>
