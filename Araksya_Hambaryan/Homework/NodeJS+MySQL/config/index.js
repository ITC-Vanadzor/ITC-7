'use strict';

var bodyParser = require('body-parser');
var express = require('express');
var multer = require('multer');
var passport = require('passport');
var LocalStrategy = require('passport-local').Strategy;


module.exports = function(server) {
    // html renderer
    server.set('view engine', 'ejs');
    server.set('views', './public');
    server.engine('html', require('ejs').renderFile);
    // for rendering static file
    server.use(express.static('./public'));
    // Middlewares
//    server.use(express.cookieParser());
//    server.use(express.bodyParser());
//    server.use(express.session({ secret: 'SECRET' }));
 
    // Passport:
    server.use(passport.initialize());
    server.use(passport.session());


    // for parsing multipart/form-data
    var parser = multer();
    // for parsing application/json
    server.use(bodyParser.json());
    // for parsing application/x-www-form-urlencoded
    server.use(bodyParser.urlencoded({
        extended: true
    }));
    server.use(parser.array());
    return server;
};
