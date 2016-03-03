'use strict';
var express = require('express');
var controller = require('./controller')
var fs = require('fs');
var router = express.Router();
var log = require('./log');
var logFile = './log.json';

module.exports = function() {
  router.get('/', controller.get);

  router.get('/:id', function(req, res){
  	res.end('---id vareble---' + req.params.id);
  });

  router.post('/post', function(req, res){
    log.post.push(req.body);
    var body = JSON.stringify(log);
    fs.writeFile(logFile, body, function(e, s){
      console.log(e, s, '-----');
    });
  	res.end('------post------');
  });
  router.put('/', function(req, res){
  	res.end('----put----');
  });
  router.delete('/', function(req, res) {
  	res.end('---delete---');
  });
  return router;
};
