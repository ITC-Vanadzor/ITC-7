'use strict';

var express = require('express');
var controller = require('./controller')
var router = express.Router();

module.exports = function() {

		  router.get('/', controller.get);
		  router.post('/signUp', controller.signUp);

		  router.post('/signIn', controller.signIn);
		  
		  return router;
};
