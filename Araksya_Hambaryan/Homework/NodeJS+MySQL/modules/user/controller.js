'use strict';
var fs = require('fs');
var express = require('express');
var path = require('path');
//var db = require('./db');

var mySql = require('mysql');
var db = mySql.createConnection({
    host     : 'localhost',
    user     : 'root',
    password : 'student',
    database : 'myDB',
});
db.connect();



module.exports.get = function(req, res) {
    res.end('-----index-----');
};

module.exports.id = function(req, res){
  	res.end('---id vareble---' + req.params.id);
};


module.exports.registration = function(req, res){
var email = req.body.email,
    username = req.body.username,
    password = req.body.password;

    db.query('SELECT * FROM users WHERE email ='+ email, function(err, rows, fields){
	if(err) {
	   console.log('You already registered');
	   res.render('index.html');
	};
	return;
    });
    //var employee = { email: req.body.email, username: req.body.username, password: req.body.password };
    // db.query('INSERT INTO users SET ?', employee, function(err,res){
    db.query('INSERT INTO users (email, username, password) values ('+ email + ',' +  username +',' + password +')', function(err,res){
        if(err) {
	  console.log('--------error', err);
	  res.render('index.html');
	} else {
	  console.log('---registration--');
	  res.render('profile.html');
	}
    });
};

module.exports.signin = function(req,res) {
    db.query('SELECT * FROM users WHERE email = req.body.email and password = req.body.password', function(err, rows, fields){
	if(err) {
	   console.log('You are not registred');
	   res.render('index.html');
	} else {
	   res.render('index.html');
	};
   });
};
	

module.exports.put = function(req, res){
  	res.end('----put----');
};

module.exports.delete = function(req, res) {
  	res.end('---delete---');
  }
