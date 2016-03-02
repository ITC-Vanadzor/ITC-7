'use strict';

var express = require('express');
var controller = require('./controller')
var fs = require('fs');
var router = express.Router();

module.exports = function() {
		  router.post('/signUp', controller.signUp());

		  router.post('/signIn', controller.signIn());

		  router.delete('/delUser', controller.delUser());
		  
		  router.put('/changePass', controller.changePass());
		  return router;
};
