'use strict';
var fs = require('fs');
var express = require('express');
var path = require('path');
var db = require(path.join(__dirname +'/log'));
var logFile = path.join(__dirname+'/log.json');



module.exports.get = function(req, res) {
    res.end('-----index-----');
};

module.exports.id = function(req, res){
  	res.end('---id vareble---' + req.params.id);
};


module.exports.registration = function(req, res){
    if (db[req.body.email]) {
        console.log("you are already registration");
    } else {
        db[req.body.email] = req.body;
        var body = JSON.stringify(db);
        fs.writeFile(logFile, body, function(e, s){
            console.log(e, s, '---registration--');
     	})
    };
    res.render('public/profile') // chi ashxatum
};

module.exports.signin = function(req,res) {
    var email = req.body.email;
    var password = req.body.password;
    if(db[email] && db[email].password == password) {
	res.sendfile('profile.html'); //sxal
	console.log("You are sign in " + db[email].username);
    } else {
	res.sendfile('public/index.html', {root:__dirname}); //sxal
	console.log("Incorrect email or password. Try again!");
    }
};

module.exports.put = function(req, res){
  	res.end('----put----');
};

module.exports.delete = function(req, res) {
  	res.end('---delete---');
  }
