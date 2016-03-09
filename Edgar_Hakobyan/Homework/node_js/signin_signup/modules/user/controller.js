'use strict';
var express = require('express');
var path = require('path');
var mysql = require('mysql');
var connection = require('./dbmysql').mySql;
var sha256 = require('js-sha256');
module.exports.get = function(req, res) {
    res.end('-----index-----');
};

module.exports.id = function(req, res){
  	res.end('---id vareble---' + req.params.id);
};


module.exports.registration = function(req, res){
	var data = req.body;
	var valid = validateUserData(data);
	
	if (valid) {
		var test = 'select * from hdmDb where email="' + data.email + '"';
		console.log(test);
		connection.query(test, function(err, rows) {
			if (rows[0]) {
	            res.end('You are already signed up');
	            return;
	        }else {
				var password = transformPasword(data.password);
				password = sha256(password);
				var hdmDb = {
					username: req.body.username,
					email: data.email,
					password: password
				};
				connection.query('insert into hdmDb set ?',hdmDb,function(err,success){
				if (err) {
					res.end('can\'t create user');
				} else {
					res.end('user was created');
				}
				});
			}
		}); 
        
	} else {
        res.end('validtion error')
    }
};

module.exports.signin = function(req,res) {
	var data = req.body;
	var valid = validateUserData(data);
	if(valid) {
		var password = transformPasword(data.password);
        password = sha256(password);
		var query = 'select rows from hdmDb where email = "' + email + '" and password="' + password + '"';
		connection.query(query, function(err, rows) {
			if(err) {
					console.log('no');
			}else {
				console.log('yes');
			}
		});
	}
    //var email = req.body.email;
    //var password = req.body.password;
	
	connection.query('select * from hdmDb ' , function(err, rows) {
	//rows.forEach(function(line){1
    console.log(rows[0].email);			 
	});
	
	//console.log(query);
//	if (req.body == result){
	//	console.log("You are sign in " );
//	}else{
	//	console.log("Incorrect email or password. Try again!");
//	}
	//res.end('----res------');
};

module.exports.put = function(req, res){
  	res.end('----put----');
};

module.exports.delete = function(req, res) {
  	res.end('---delete---');
}

var validateUserData = function(data) {
    var valid = false;
    if (data.email && data.password) {
        valid = validateEmail(data.email);
        valid = valid && data.password.length >= 6;
    }
    return valid;
};

function transformPasword(password) {
    var index = Math.round(password.length / 2);
    var salt = password[index] + index + password.length;
    password = salt + password + salt;
    return password;
}

function validateEmail(email) {
    var re = /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
    return re.test(email);
}