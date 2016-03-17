'use strict';
var fs = require('fs');
var express = require('express');
var path = require('path');
var db = require('../../db');

var Joi = require('joi');
 
var schema = Joi.object().keys({
    username: Joi.string().alphanum().min(3).max(30).required(),
    password: Joi.string().regex(/^[a-zA-Z0-9]{3,30}$/).min(6).max(30),
    access_token: [Joi.string(), Joi.number()],
    email: Joi.string().email()
}).with('email').without('password', 'access_token');
 


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

	var employee = { email: req.body.email, username: req.body.username, password: req.body.password };
	Joi.validate(employee, schema, function (err, value) {
	// err === null -> valid
	if (!err) {
	res.end("validtion error");
	} else { 
	   
	    db.query('SELECT * FROM users WHERE email ="'+ email + '"', function(err, rows, fields){
		if(rows[0]) {
		   res.end('You already registered');
		   //res.render('index.html');
		} else {
		   db.query('INSERT INTO users SET ?', employee, function(err,success){
		      if(err) {
		  	res.end('--------error');
		  	//res.render('index.html');
		      } else {
		  	res.end('---registration--');
		  	//res.render('profile.html');
		      };
	    	})};
	     });
	}});
};

module.exports.signin = function(req,res) {
    db.query('SELECT * FROM users WHERE email = "'+ req.body.email +'" and password = "' + req.body.password + '"', function(err, rows){
console.log(rows[0]);
	if(rows[0]) {
	   res.end('you are login :)');
	  } else { 
	   res.end ('You are not registred');
	};
   });
};
	

module.exports.put = function(req, res){
  	res.end('----put----');
};

module.exports.delete = function(req, res) {
  	res.end('---delete---');
  }

