'use strict';

var express = require('express'),
	     app  = express();
var bodyParser = require('body-parser');
var util = require('util');
var fs = require('fs');
var json = require('./data');
var jsonFile = './data.json';

module.exports.get = function(req, res) {
	res.end("-----Index-----");

};
module.exports.signUp = function(req, res) {
		  json.post.push(req.body);
  		  var body = JSON.stringify(json);
		  console.log(body);
	     fs.writeFile(jsonFile, body, function() {});
	res.end();
};

module.exports.signIn = function(req, res) {
	var email = req.body.email;
	var password = req.body.password;
	var obj = require("./data.json");
	var t;
	for (var item in obj) {
		if (obj[item].email == email && obj[item].password == password) {
				 res.redirect("../public/src/profile2.html");
			     t = true;
		}
		else
				  t = false;
	}
   if (!t) {
			 res.end("No such user.  Please sign in");
	}
};

