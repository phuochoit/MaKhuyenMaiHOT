var gulp = require('gulp');
var  browserSync = require('browser-sync');
// Compile CSS.
var less = require('gulp-less');
var sass = require('gulp-sass');
var watch = require('gulp-watch');
// Image.
var spritesmith = require('gulp.spritesmith');

// concat
var concat = require('gulp-concat');
var rename = require('gulp-rename');
var minifyCss = require('gulp-cssnano');

var livereload = require('gulp-livereload')
var uglify = require('gulp-uglifyjs');
var autoprefixer = require('gulp-autoprefixer');
var sourcemaps = require('gulp-sourcemaps');
var imagemin = require('gulp-imagemin');
var pngquant = require('imagemin-pngquant');
cp = require('child_process');


/**
 * Launch the Server
 */
gulp.task('browser-sync', ['sass'], function () {
    browserSync.init({
        // Change as required
        proxy: "loiviphamgiaothong.com.dd:8083",
        socket: {
            // For local development only use the default Browsersync local URL.
            //domain: 'localhost:3000'
            // For external development (e.g on a mobile or tablet) use an external URL.
            // You will need to update this to whatever BS tells you is the external URL when you run Gulp.
            domain: '192.168.0.161:3000'
        }
    });
});

/**
 * @task clearcache
 * Clear all caches
 */
gulp.task('clearcache', function (done) {
    return cp.spawn('drush', ['cc all'], { stdio: 'inherit' })
        .on('close', done);
});

/**
 * @task reload
 * Refresh the page after clearing cache
 */

// ['clearcache']

gulp.task('reload', function () {
    browserSync.reload();
});

// Compile Our Sass
gulp.task('sass', function () {
    gulp.src('./assets/sass/**/*.scss')
        .pipe(sass({ outputStyle: 'compressed' }).on('error', sass.logError))
        .pipe(autoprefixer('last 2 version', 'safari 5', 'ie 7', 'ie 8', 'ie 9', 'opera 12.1', 'ios 6', 'android 4'))
        .pipe(browserSync.reload({ stream: true }))
        .pipe(gulp.dest('./assets/css'));
});

// image
gulp.task('imagemin', function () {
    return gulp.src('./assets/images/*')
        .pipe(imagemin({
            progressive: true,
            svgoPlugins: [{ removeViewBox: false }],
            use: [pngquant()]
        }))
        .pipe(gulp.dest('./assets/images/*'));
});

// js
gulp.task('uglify', function () {
    gulp.src('./assets/lib/*.js')
        .pipe(uglify('main.js'))
        .pipe(gulp.dest('./assets/js'))
});


/**
 * @task watch
 * Watch scss files for changes & recompile
 * Clear cache when Drupal related files are changed
 */
gulp.task('watch', function () {
    gulp.watch(['./assets/sass/**/*.scss', './assets/sass/*.scss'], ['sass']);
    gulp.watch('./assets/lib/*.js', ['uglify']);
    gulp.watch('**/*.{php,inc,info}', ['reload']);
});


gulp.task('default', ['browser-sync', 'watch']);