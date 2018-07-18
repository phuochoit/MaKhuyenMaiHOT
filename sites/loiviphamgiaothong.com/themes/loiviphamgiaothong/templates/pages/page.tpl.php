<div class="main" id="main-container">
	<div id="skip-link">
		<a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
		<?php if ($main_menu): ?>
			<a href="#navigation" class="element-invisible element-focusable"><?php print t('Skip to navigation'); ?></a>
		<?php endif; ?>
	</div>
	<header id="header" role="banner" class="clearfix">
		<?php if (!empty($page['navigation'])): ?>
			<nav class="navbar navbar-expand-lg navbar-light bg-light navbar-menu-top header-top">
				<div class="container">
					<div class="col">
						<button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navabar--menu" aria-controls="navabar--menu" aria-expanded="false" aria-label="Navabar Menu">
							<span class="navbar-toggler-icon"></span>
						</button>
						<div class="collapse navbar-collapse" id="navabar--menu">
							<?php print render($page['navigation']); ?>
						</div>
					</div>
				</div>
			</nav>
			<!-- /#navba-->
		<?php endif;?>
		<section class="header-content clearfix">
			<div class="container">
				<div class="row">
					<div class="col col-3">
						<?php if ($logo): ?>
							<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" id="logo">
								<img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
							</a>
						<?php endif; ?>
					</div>
					<?php if(!empty($page['header-banner'])):?>
						<div class="col">
							<?php print render($page['header-banner']); ?>
						</div>
						<!-- /#header-banner-->
					<?php endif;?>
				</div>
			</div>
		</section>
	</header>
	<!-- /#header-->
	<main id="main" role="main" class="clearfix">
		<a id="main-content"></a>
		<?php if(!empty($messages)):?>
			<section id="page-messages" class="messages-area">
				<div class="container">
					<div class="col">
						<?php print $messages; ?>
					</div>
				</div>
			</section>
			<!-- /#page-messages -->
		<?php endif;?>
		<?php if ($page['highlighted']): ?>
			<section id="page-highlighted" class="highlighted-area">
				<div class="container">
					<div class="col">
						<?php print render($page['highlighted']); ?>
					</div>
				</div>
			</section>
			<!-- /#page-highlighted -->
		<?php endif; ?>
		
		<?php if (!empty($tabs['#primary'])): ?>
			<section id="page-tab-primary" class="tabs-wrapper clearfix">
				<div class="container">
					<div class="col">
						<?php print render($tabs); ?>
					</div>
				</div>
			</section>
			<!-- /#page-tab-primary -->
		<?php endif; ?>
		<?php if (!empty($page['#help'])): ?>
			<section id="page-help" class="help-wrapper clearfix">
				<div class="container">
					<div class="col">
						<?php print render($page['help']); ?>
					</div>
				</div>
			</section>
			<!-- /#page-help -->
		<?php endif; ?>
		<?php if ($action_links): ?>
			<section id="page-action" class="action-wrapper clearfix">
				<div class="container">
					<div class="col">
						<ul class="action-links"><?php print render($action_links); ?></ul>
					</div>
				</div>
			</section>
			<!-- /#page-action -->
		<?php endif; ?>
		<section id="page-content" class="action-wrapper clearfix">
			<div class="container">
				<div class="row">
					<?php print render($title_prefix); ?>
						<?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1>
					<?php endif; ?>
					<?php print render($title_suffix); ?>

					<?php if(!empty($page['content'])):?>
						<section id="page-footer-content" class="footer-content-wrapper clearfix">
							<div class="container">
								<div class="col">
									<?php print render($page['content']); ?>
								</div>
							</div>
						</section>
						<!-- /#content -->
					<?php endif;?>
					<?php if ($page['sidebar']): ?>
						<aside id="page-sidebar" role="complementary" class="col col-4 sidebar clearfix">
							<?php print render($page['sidebar']); ?>
						</aside>  <!-- /#sidebar-second -->
					<?php endif; ?>
				</div>
			</div>
		</section>
		<!-- /#page-content -->
	</main> 
	<!-- /#main -->

	<?php if(!empty($page['footer-content'])):?>
		<section id="page-footer-content" class="footer-content-wrapper clearfix">
			<div class="container">
				<div class="col">
					<?php print render($page['footer-content']); ?>
				</div>
			</div>
		</section>
	<?php endif;?>
	<!-- /#page-footer-content -->
	
	<footer id="footer" role="contentinfo" class="clearfix">
		<div class="container">
			<div class="row">
				<?php print render($page['footer']) ?>
			</div>
		</div>
	</footer> 
	<!-- /#footer -->
</div>
