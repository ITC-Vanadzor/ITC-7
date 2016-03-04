'use strict';

var fs = require('fs');
var json = require('./data');
var jsonFile = __dirname+'/data.json';

module.exports.get = function(req, res) {
	res.end("-----Index-----");

};

module.exports.signUp = function(req, res) {
	var arr = json.post;
	for (var i = 0; i<arr.length; ++i ) {
		if (arr[i].email === req.body.email ) {
		res.end("Sorry, there is an user with this email address!"); 		
		return;
		}
	}
   json.post.push(req.body);
	var body = JSON.stringify(json);
	console.log(body);
	fs.writeFile(jsonFile, body, function(e,s) {});
  	res.render("src/profile2.html");
};

module.exports.signIn = function(req, res) {
	var email = req.body.email;
	var password = req.body.password;
	var arr = json.post;
	for (var i = 0; i<arr.length; ++i ) {
		if (arr[i].email === email && arr[i].password === password) {
		res.end("Ok, you are siggned in"); 		
		return;
		}
	}

	res.end("No such user.  Please sign in");
};
