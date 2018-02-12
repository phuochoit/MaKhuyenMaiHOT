<div id="container" class="clearfix container-fluid">
	<div id="skip-link">
		<div class="container">
			<a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
			<?php if ($main_menu): ?>
				<a href="#navigation" class="element-invisible element-focusable"><?php print t('Skip to navigation'); ?></a>
			<?php endif; ?>
		</div>
	</div>
	<header id="header" role="banner" class="clearfix full-left-right">
		<div class="container">
			<?php if ($logo): ?>
				<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" id="logo">
					<img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
				</a>
			<?php endif; ?>
			<?php if ($site_name || $site_slogan): ?>
				<hgroup id="site-name-slogan">
					<?php if ($site_name): ?>
						<h1 id="site-name">
							<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><span><?php print $site_name; ?></span></a>
						</h1>
					<?php endif; ?>
					<?php if ($site_slogan): ?>
						<h2 id="site-slogan"><?php print $site_slogan; ?></h2>
					<?php endif; ?>
				</hgroup>
			<?php endif; ?>

			<?php print render($page['header']); ?>

			<?php if ($main_menu || $secondary_menu || !empty($page['navigation'])): ?>
				<nav id="navigation" role="navigation" class="clearfix">
					<?php if (!empty($page['navigation'])): ?> <!--if block in navigation region, override $main_menu and $secondary_menu-->
						<?php print render($page['navigation']); ?>
					<?php endif; ?>
					<?php if (empty($page['navigation'])): ?>
				<?php print theme('links__system_main_menu', array(
							'links' => $main_menu,
							'attributes' => array(
								'id' => 'main-menu',
								'class' => array('links', 'clearfix'),
							),
							'heading' => array(
								'text' => t('Main menu'),
								'level' => 'h2',
								'class' => array('element-invisible'),
							),
						)); ?>
				<?php print theme('links__system_secondary_menu', array(
							'links' => $secondary_menu,
							'attributes' => array(
								'id' => 'secondary-menu',
								'class' => array('links', 'clearfix'),
							),
							'heading' => array(
								'text' => t('Secondary menu'),
								'level' => 'h2',
								'class' => array('element-invisible'),
							),
						)); ?>
					<?php endif; ?>
				</nav> <!-- /#navigation -->
			<?php endif; ?>
		</div>
	</header> <!-- /#header -->
	
	<?php if ($page['ads_banner']): ?>
		<!-- ads_banner -->
		<section id="advertise-banner" class="block-mkmh-banner-advertise">
			<?php print render($page['ads_banner']); ?>
		</section>
		<!-- end ads_banner -->
	<?php endif; ?>  
	
	<!-- main -->
	<section id="main" role="main" class="clearfix">
		<div class="container">	
			<?php if ($breadcrumb):?>
			<div id="breadcrumbs" class="col-xs-12 col-sm-12 col-md-12 col-lg-12">
				<?php print $breadcrumb; ?>
			</div>
			<?php endif;?>
			<div class="col-xs-12 col-sm-12 col-md-8 col-lg-8">
				<?php print $messages; ?>
				<a id="main-content"></a>
				<?php if ($page['highlighted']): ?>
					<div id="highlighted">
						<?php print render($page['highlighted']); ?>
					</div>
				<?php endif; ?>
				<?php print render($title_prefix); ?>
					<?php if ($title): ?>
						<h1 class="title" id="page-title"><?php print $title; ?></h1>
					<?php endif; ?>
				<?php print render($title_suffix); ?>
				<?php if (!empty($tabs['#primary'])): ?>
					<div class="tabs-wrapper clearfix"><?php print render($tabs); ?></div>
				<?php endif; ?>
				<?php print render($page['help']); ?>
				<?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
				<?php print render($page['content']); ?>
			</div>
			<?php if ($page['sidebar_first']): ?>
				<div class="col-xs-12 col-sm-12 col-md-4 col-lg-4">
					<aside id="sidebar-first" role="complementary" class="sidebar clearfix">
						<?php print render($page['sidebar_first']); ?>
					</aside>  
				</div>
			<?php endif; ?>
		</div>
	</section> 
	<!-- end #main -->
	
	<?php if ($page['ads_footer']): ?>
		<!-- ads_footer -->
		<section id="advertise-footer" role="footer" class="block-mkmh-footer-advertise">
			<?php print render($page['ads_footer']); ?>
		</section> 
		<!-- end ads_footer -->
	<?php endif; ?>
	
	<footer id="footer" role="contentinfo" class="clearfix">
		<div class="container">	
			<?php print render($page['footer']) ?>
		</div>
	</footer> 
	<!-- /#footer -->
</div> <!-- /#container -->
