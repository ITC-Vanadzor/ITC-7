'use strict';
var express = require('express');
var fs = require('fs');
var db = require('./log');
var logFile = './log.json';


module.exports.get = function(req, res) {
    res.end('-----index-----');
};
module.exports.put = function(req, res){
  	res.end('----put----');
  };

module.exports.delete = function(req, res) {
  	res.end('---delete---');
  };

module.exportregistration = function(req, res){
    var user = req.body;
    if(user.useremail == db[user.useremail]) {
	console.log("User already exist");	
    }
    db[user.useremail] = user;
    var body = JSON.stringify(db);
    fs.writeFile(logFile, body, function(e, s){
      console.log(e, s, '---registration--');
    });
   res.end('------post------');
  };

module.exports.signin = function(req,res) {
    var email = req.body.useremail;
    var password = req.body.userpass;
    var result = "You aren't sign in " + req.body.username;
    if(db[email] && password == db[email].userpass) {
        result = "You are sign in " + db[key].username;
     }
     res.end(result);
  };

