'use strict'

var express = require('express');
var bodyParser = require('body-parser');
var router = express.Router();
var index = require('fs').readFileSync('simple_form.html');
module.exports = function() {
   	router.get('/', function(req, res) {
		res.send("Username: " + req.query['username']);					
	});
 return router;
}

