<?php /*
すべての layout について共通の、headセクションの記述
*/ ?>

<meta name="viewport" content="width=device-width, initial-scale=1" />
<meta name="keywords" content="<?= htmlspecialchars($px->site()->get_current_page_info('keywords')); ?>" />
<meta name="description" content="<?= htmlspecialchars($px->site()->get_current_page_info('description')); ?>" />

<?= $px->get_contents_manifesto(); ?>

<!-- Bootstrap -->
<link rel="stylesheet" href="<?= htmlspecialchars( $px->path_plugin_files('/styles/bootstrap/css/bootstrap.min.css') ); ?>">
<script src="<?= htmlspecialchars( $px->path_plugin_files('/styles/bootstrap/js/bootstrap.min.js') ); ?>"></script>
<!-- Bootstrap Theme -->
<link rel="stylesheet" href="<?= htmlspecialchars( $px->path_plugin_files('/styles/bootstrap/css/bootstrap-theme.min.css') ); ?>">

<link rel="stylesheet" href="<?= htmlspecialchars( $px->path_plugin_files('/styles/theme.css') ); ?>">
<script src="<?= htmlspecialchars( $px->path_plugin_files('/scripts/theme.js') ); ?>"></script>
