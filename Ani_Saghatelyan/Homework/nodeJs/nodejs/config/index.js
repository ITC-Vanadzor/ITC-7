'use strict';

var bodyParser = require('body-parser');
var express = require('express');
var multer = require('multer');
var path=require('path');
module.exports = function(server) {
    // html renderer
    server.set('view engine', 'ejs');
    server.engine('html', require('ejs').renderFile);
    //sets view for rendering html from public directory
     server.set('views',path.join(__dirname, '../', 'public'));
    // for rendering static file
    server.use(express.static('./public'));

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
