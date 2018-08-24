<div class="main" id="main-container">
	<div id="skip-link">
		<a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
		<?php if ($main_menu): ?>
			<a href="#navigation" class="element-invisible element-focusable"><?php print t('Skip to navigation'); ?></a>
		<?php endif; ?>
	</div>

	<header id="header" role="banner" class="clearfix">
		<?php if (!empty($page['navigation'])): ?>
			<section class="navbar-menu-top header-top" id="navigation-top">
				<div class="container">
					<div class="row">
						<?php print render($page['navigation']); ?>
					</div>
				</div>
			</section>
			<!-- /#section header top-->
		<?php endif;?>
		<section class="header-content clearfix" id="header-logo">
			<div class="container">
				<div class="row">
					<div class="col-xs-12 col-sm-3 col-logo col-align col-align--center">
						<?php if ($logo): ?>
							<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" id="logo" class="v-center">
								<img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
							</a>
						<?php endif; ?>
					</div>
					<?php if(!empty($page['header-banner'])):?>
						<div class="col-xs-12 col-sm-9 col-header-banner">
							<?php print render($page['header-banner']); ?>
						</div>
						<!-- /#header-banner-->
					<?php endif;?>
				</div>
			</div>
		</section>
        <?php if(!empty($page['main-menu'])):?>
            <nav id="navigation" class="navbar navbar-default main-menu">
                <div class="container">
					<div class="row">
                    	<?php print render($page['main-menu']); ?>
					</div>
                </div>
            </section>
        <?php endif;?>
	</header>
	<!-- /#header-->
	<main id="main" role="main" class="clearfix">
		<a id="main-content"></a>
		<?php if ($page['highlighted']): ?>
			<section id="page-highlighted" class="highlighted-area">
				<?php print render($page['highlighted']); ?>
			</section>
			<!-- /#page-highlighted -->
		<?php endif; ?>
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
						<section id="page-front-content" class="front-content-wrapper clearfix">
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