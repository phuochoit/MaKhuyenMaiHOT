var gulp = require('gulp');
var  browserSync = require('browser-sync')
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


var  reload = browserSync.reload;
// Compile Our Sass
gulp.task('sass', function () {
    gulp.src('./assets/sass/**/*.scss')
        .pipe(sourcemaps.init())
        .pipe(sass({ outputStyle: 'compressed' }).on('error', sass.logError))
        .pipe(autoprefixer('last 2 version', 'safari 5', 'ie 7', 'ie 8', 'ie 9', 'opera 12.1', 'ios 6', 'android 4'))
        .pipe(sourcemaps.write('./'))
        .pipe(reload)
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


// Watch Files Sass For Changes
gulp.task('watch', function () {
    livereload.listen();

    gulp.watch('./assets/sass/**/*.scss', ['sass']);
    gulp.watch('./assets/lib/*.js', ['uglify']);
    gulp.watch(['./assets/css/style.css', './**/*.tpl.php', './assets/js/*.js'], function (files) {
        livereload.changed(files)
    });
});