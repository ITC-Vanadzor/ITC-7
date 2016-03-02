'use strict';

var util = require('util');
var fs = require('fs');
var json = require('./data');
var jsonFile = './data.json';

module.exports.signUp = function(req, res) {
	json.post.push(req.body);
	var body = JSON.stringify(log);
	fs.writeFile(jsonFile, body, function(e,s) {
			  console.log(e,s, '----');
	});
	res.end();
};
