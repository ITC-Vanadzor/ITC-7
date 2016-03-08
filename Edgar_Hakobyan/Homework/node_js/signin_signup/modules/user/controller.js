'use strict';
var express = require('express');
var path = require('path');
var mysql = require('mysql');
var connection = mysql.createConnection({
    host     : 'localhost',
    user     : 'root',
    password : 'root',
    database : 'hdmDb'
});
connection.connect();
module.exports.get = function(req, res) {
    res.end('-----index-----');
};

module.exports.id = function(req, res){
  	res.end('---id vareble---' + req.params.id);
};


module.exports.registration = function(req, res){
	var username = req.body.username;
	var email = req.body.email;
    var password = req.body.password;
	
var hdmDb = {
  username: username,
  email: email,
  password: password
};
    res.end('------post------');
};

module.exports.signin = function(req,res) {
    var email = req.body.email;
    var password = req.body.password;
	connection.query('select * from hdmDb where id = ' + 1, function(err,result){
    if (req.body == result){
		console.log("You are sign in " );
	}else{
		console.log("Incorrect email or password. Try again!");
	}
	res.end('----res------');
	});
};

module.exports.put = function(req, res){
  	res.end('----put----');
};

module.exports.delete = function(req, res) {
  	res.end('---delete---');
}
