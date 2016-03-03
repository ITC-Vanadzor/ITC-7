'use strict';
var express = require('express');
var controller = require('./controller')
var router = express.Router();


module.exports = function() {
  router.get('/', controller.get);
  router.get('/:id', controller.getId); 
  router.post('/sign-up',controller.signUp);
  router.post('/sign-in', controller.signIn);
  router.put('/', controller.put);
  router.delete('/',controller.delete);
  return router;
};
