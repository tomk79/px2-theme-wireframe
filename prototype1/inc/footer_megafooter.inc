
			<div class="container">
				<nav class="theme_megafooter_navi">
<?= $theme->mk_megafooter_menu() ?>
				</nav>
			</div>
			<div class="container theme_footer_shouldernavi">
<?php
	$shoulder_menu = $px->site()->get_shoulder_menu();
	echo( '<ul>' );
	echo( '<li>'.$px->mk_link( '', array('current'=>false) ).'</li>' );
	foreach( $shoulder_menu as $page_id ){
		echo( '<li>'.$px->mk_link( $page_id ).'</li>' );
	}
	echo( '</ul>' );
?>
			</div>

