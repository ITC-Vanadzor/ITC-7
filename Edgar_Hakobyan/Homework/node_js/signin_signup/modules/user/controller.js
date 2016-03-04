'use strict';
var fs = require('fs');
var express = require('express');
var path = require('path');
var log = require('./log');
var logFile = './log.json';


module.exports.get = function(req, res) {
    res.end('-----index-----');
};

module.exports.id = function(req, res){
  	res.end('---id vareble---' + req.params.id);
};


module.exports.registration = function(req, res){
    log.push(req.body);
    var body = JSON.stringify(req.body);
    console.log(body);
    fs.writeFile(logFile, body, function(e, s){
      console.log(e, s, '---registration--');
    });
    res.end('------post------');
};

module.exports.signin = function(req,res) {
    var email = req.body.email;
    var password = req.body.password;
    fs.readFile(logFile,'utf8',function(err,data) {
	var jsonData = JSON.parse(data);
		console.log(jsonData);
//	var jsonData = JSON.stringify(jsonData1.email);
//	for(var i  in jsonData) {
//					console.log(email);	
//				console.log(jsonData[0].email);
//					console.log(password);	
//				console.log(jsonData[0].password);

           if(email == jsonData.email && password == jsonData.password) {
		res.sendfile('public/profile.html');
	        console.log("You are sign in " + jsonData.username);
	    } else {
		
		res.sendfile('/public/index.html', {root:__dirname});
		console.log("Incorrect email or password. Try again!");
	    }
//	}
	})
};

module.exports.put = function(req, res){
  	res.end('----put----');
};

module.exports.delete = function(req, res) {
  	res.end('---delete---');
  }
