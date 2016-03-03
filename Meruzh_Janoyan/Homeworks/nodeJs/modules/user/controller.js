'use strict';
var fs = require('fs');
var myDb = require('./log');
var logFile=__dirname +'/log.json';

module.exports.get = function(req, res) {
    res.end('-----index-----');
};

module.exports.signIn = function(req, res) {
   console.log(req.body)
   if (myDb[req.body.email] && myDb[req.body.email].password == req.body.password) {
            res.render('home.html');
        }
    else{
        res.render('wrong.html');
    }
    
};

module.exports.signUp = function(req, res) {
    
    if(!myDb[req.body.email]){
        myDb[req.body.email]= req.body;
        fs.writeFile(logFile, JSON.stringify(myDb), function(e, d) {
        console.log(e, d, '-----');
    });
        res.render('home.html');
    }
    else {
        res.render('wrong.html');
    }

    
};