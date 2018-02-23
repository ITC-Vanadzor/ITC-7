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
        res.render('index.html');
    } else {
        db[req.body.email] = req.body;
        var body = JSON.stringify(db);
        fs.writeFile(logFile, body, function(e, s){
            console.log(e, s, '---registration--');
        })
    res.render('profile.html');
    }
};

module.exports.signin = function(req,res) {
    var email = req.body.email;
    var password = req.body.password;
    if(db[email] && db[email].password == password) {
        res.render('profile.html');
    } else {
        res.render('index.html');
    }
};

module.exports.put = function(req, res){
  	res.end('----put----');
};

module.exports.delete = function(req, res) {
  	res.end('---delete---');
  }
