'use strict';

var fs = require('fs');
var json = require('./data');
var jsonFile = __dirname+'/data.json';

module.exports.get = function(req, res) {
	res.end("-----Index-----");

};

module.exports.signUp = function(req, res) {
	json.post.push(req.body);
	var body = JSON.stringify(json);
	console.log(body);
	fs.writeFile(jsonFile, body, function(e,s) {});
	res.end();
};

module.exports.signIn = function(req, res) {
	var email = req.body.email;
	var password = req.body.password;
	var obj = require(__dirname+"/data.json");
	var arr = obj.post;
	for (var i = 0; i<arr.length; ++i ) {
		if (arr[i].email === email && arr[i].password === password) {
		res.end("Ok, you are siggned in"); 		
		}
	}

	res.end("No such user.  Please sign in");
};
