'use strict';
var express = require('express');
var controller = require('./controller')
var router = express.Router();

module.exports = function() {
  router.get('/', controller.get);

  router.get('/:id', function(req, res){
  	res.end('---id vareble---' + req.params.id);
  });

  router.post('/post', controller.create);
  router.put('/', function(req, res){
  	res.end('----put----');
  });
  router.delete('/', function(req, res) {
  	res.end('---delete---');
  });
  return router;
};
