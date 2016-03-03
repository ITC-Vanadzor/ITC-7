'use strict';
var fs = require('fs');
var logFile = './log.json';


module.exports.get = function(req, res) {
    res.end('-----index-----');
};

module.exports.signIn = function(req, res) {
    var data = fs.readFileSync(logFile);
    var myDb = JSON.parse(data);

    try {
        if (myDb[req.body.email].password == req.body.password) {
            res.redirect('/home.html');
        }
    } catch (error) {
        console.log(error);
    }
    res.redirect('/wrong.html');
};

module.exports.signUp = function(req, res) {
    var data = fs.readFileSync(logFile);
    var myDb = JSON.parse(data);
    myDb[req.body.email] = {
        username: req.body.username,
        email: req.body.email,
        password: req.body.password
    };
    fs.writeFile(logFile, JSON.stringify(myDb), function(e, d) {
        console.log(e, d, '-----');
    });


    res.redirect('/home.html');
};