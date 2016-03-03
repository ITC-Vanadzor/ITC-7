'use strict';
var express = require('express');
var fs = require('fs');
var pathLog = require('path');
var db = require(pathLog.join(__dirname + '/log'));
var logFile = pathLog.join(__dirname + '/log.json');


module.exports.get = function(req, res) {
    res.end('-----index-----');
};
module.exports.put = function(req, res){
  	res.end('----put----');
  };

module.exports.delete = function(req, res) {
  	res.end('---delete---');
  };

module.exports.registration = function(req, res){
    var user = req.body;
    if(db[user.email]) {
	console.log("User already exist");	
    }
    else {
    db[user.email] = user;
    var body = JSON.stringify(db);
    fs.writeFile(logFile, body, function(e, s){
      console.log(e, s, '---registration--');
    });
    }
   res.end('------post------');
  };

module.exports.signin = function(req,res) {
    var email = req.body.email;
    var password = req.body.password;
    var result = "You aren't sign in " + req.body.username;
    if(db[email] && password == db[email].password) {
        result = "You are sign in " + db[key].username;
     }
     res.end(result);
  };

