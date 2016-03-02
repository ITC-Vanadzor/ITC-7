'use strict';
var express = require('express');
var controller = require('./controller')
var router = express.Router();

module.exports = function() {
  router.get('/', controller.get);
  router.post('/', controller.signIn);  
  router.post('/registration/',controller.signUp);

  return router;
};
