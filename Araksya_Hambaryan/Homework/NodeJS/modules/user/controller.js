'use strict';
var fs = require('fs');
var express = require('express');
var path = require('path');
var log = require('./log');
var logFile = './log.json';
var  dataBase={};


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
    var email = JSON.stringify(req.body.email);
    console.log(email);
    var password = req.body.password;
    console.log(password);
    fs.readFile('log.json','utf8',function(err,data) {
	var jsonData = JSON.parse(data);
	for(var i  in jsonData) {
           if((email == jsonData[i].email || email == jsonData[i].username) && password == jsonData[i].password) {
		
		res.sendfile('profile.html');
	        console.log("You are sign in " + jsonData[i].username);
	    } else {
		
		res.sendfile('../../public/index.html', {root:__dirname});
		console.log("Incorrect email or password. Try again!");
	    }
   	 }

	//res.end();
	})
};

module.exports.put = function(req, res){
  	res.end('----put----');
};

module.exports.delete = function(req, res) {
  	res.end('---delete---');
  }
