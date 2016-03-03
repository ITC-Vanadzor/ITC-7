'use strict';
var express = require('express');
var controller = require('./controller')
var router = express.Router();
module.exports = function() {
  router.get('/', controller.get);
  router.put('/',controller.put);
  router.delete('/',controller.delete);
  router.get('/:id', function(req, res){
  	res.end('---id vareble---' + req.params.id);
  });
  router.post('/',controller.signin);
  router.post('/registration',controller.registration);

  return router;
}
