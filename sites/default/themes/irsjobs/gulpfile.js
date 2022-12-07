"use strict";

const { src, dest, parallel, series, watch } = require("gulp");
const bourbon = require("bourbon").includePaths;
const neat = require("bourbon-neat").includePaths;
const sass = require("gulp-sass");
const sourcemaps = require("gulp-sourcemaps");
const sassGlob = require("gulp-sass-glob");
const cssnano = require("cssnano");
const postcss = require("gulp-postcss");
const rename = require("gulp-rename");
const concat = require("gulp-concat");
const autoprefixer = require("autoprefixer");
const babel = require("gulp-babel");
const uglify = require("gulp-uglify");

function css() {
  return src("./sass/*.scss", { sourcemaps: true })
    .pipe(sourcemaps.init())
    .pipe(sassGlob())
    .pipe(sass({ includePaths: [bourbon, neat] }).on("error", sass.logError))
    .pipe(dest("./dist/css"))
    // .pipe(rename({ suffix: ".min" }))
    .pipe(postcss([autoprefixer(), cssnano()]))
    .pipe(sourcemaps.write("."))
    .pipe(dest("./dist/css"));
}

function scripts() {
  return src(["./js/*.behaviors.js", "!./js/irsjobs.compiled.js"], { sourcemaps: true })
    .pipe(concat("irsjobs.compiled.js"))
    .pipe(dest("./js/"))
    .pipe(babel({ presets: ["@babel/preset-env"] }))
    .pipe(uglify())
    // .pipe(rename({ suffix: ".min" }))
    .pipe(dest("./dist/js/"));
}

function watcher() {
  watch("./sass/**/*.scss", css);
  watch("./js/*.behaviors.js", scripts);
}

const js = scripts;
const build = series(parallel(css, js));

exports.css = css;
exports.js = js;
exports.build = build;
exports.watch = watcher;
exports.default = watcher;
