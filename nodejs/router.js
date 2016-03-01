'use strict';
var express = require('express');
var router = express.Router();

module.exports = function() {
  router.get('/', function(req, res){
  	res.end('-----index-----')
  });

  router.get('/post', function(req, res){
  	res.end('--:post---');
  });

  router.post('/post', function(req, res){
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
