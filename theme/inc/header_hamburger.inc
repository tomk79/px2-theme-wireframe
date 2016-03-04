<?php
	$category_top_id = $px->site()->get_category_top();
?>
<div class="theme_hamburger">
	<div class="theme_hamburger-btn"><a href="javascript:;"><span class="glyphicon glyphicon-menu-hamburger"></span></a></div>
	<div class="theme_hamburger-menu">
		<nav>
			<p><a href="<?= htmlspecialchars( $px->href($category_top_id) ) ?>"><?= htmlspecialchars($px->site()->get_page_info($category_top_id, 'title_label')) ?></a></p>
<?= $theme->mk_sub_menu( $category_top_id ) ?>
		</nav>
	</div>
</div>
