
category 1.


<ul><?php
$children = $px->site()->get_children();
foreach( $children as $child ){
	print '<li><a href="'.htmlspecialchars( $px->href($child) ).'" target="_blank"><span class="blank">'.htmlspecialchars( $px->site()->get_page_info( $child, 'title_label' ) ).'</span></a></li>';
}
?></ul>


