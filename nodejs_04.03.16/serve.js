'use strict';
var util = require('util');
var eventEmiter = require('events');
var express = require('express');
var app = express();
var server = require('http').createServer(app);
app = require('./config')(app);
require('./router/')(app);

function User(name, id) {
	var _name = name || 'name';
	var _id = id || 0;
	Object.defineProperty(this, 'id', {
		get: function() {
			return _id;
		},
		set: function(id) {
			this.emit('change', _id, id, 'id');
			_id = id;
		},
		enumerable: true
	});

	Object.defineProperty(this, 'name', {
		get: function() {
			return _name;
		},
		set: function(name) {
			this.emit('change', _name, name, 'name');
			_name = name;
		},
		enumerable: true
	});
}

util.inherits(User, eventEmiter);

var user = new User();
user.on('change', function(old, newVal, type){
	console.log(type + ' was changed from ' + old + ' to ' + newVal);
});


server.listen(80, 'localhost', function () {
  var host = server.address().address;
  var port = server.address().port;
  console.log('error------80-----port');
});

server.on('error', function(error){
	console.log(error, '---error----');
	if(error) {
		server.listen(8080, 'localhost', function () {
		  var host = server.address().address;
		  var port = server.address().port;
		  console.log('Example app listening at http://%s:%s', host, port);
		});
	}
});