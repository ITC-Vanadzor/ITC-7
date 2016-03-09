'use strict';
var express = require('express');
var controller = require('./controller')
var router = express.Router();

module.exports = function() {
  router.get('/', controller.get);

  router.get('/:id', controller.getById);

  router.post('/', controller.create);
  router.put('/', function(req, res){
  	res.end('----put----');
  });
  router.delete('/', function(req, res) {
  	res.end('---delete---');
  });
  return router;
};
