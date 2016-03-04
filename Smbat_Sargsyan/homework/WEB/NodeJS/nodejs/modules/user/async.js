'use strict';
var express = require('express');
var fs = require('fs');
var pathLog = require('path');
var db = require(pathLog.join(__dirname + '/log'));
var logFile = pathLog.join(__dirname + '/log.json');
var async = require('async');
//var userData{};
var stack = {};
//var files[];

stack.userName = function(callback) {
	for(var key in db) {
		var name = db[key].username;
		console.log(db[key].username);
	}
	callback(null,name);
}

stack.userEmail = function(callback) {
        for(var key in db) {
                var useremail = db[key].email;
                console.log(db[key].email);
	}
	callback(null,useremail);
}

stack.userPassword = function(callback) {
        for(var key in db) {
                var userpassword = db[key].password;
                console.log(db[key].password);
	}
	callback(null,userpassword);

}
async.parallel(stack,function(err,result) {
        for(var key in db) {
	if(err) {
		consoler.err(err);
		return;
	}
	console.log(result);
	}
});
