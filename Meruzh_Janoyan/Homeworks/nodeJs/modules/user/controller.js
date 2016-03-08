'use strict';
var myDb = require('./dbInit')

module.exports.get = function(req, res) {
    res.end('-----index-----');
};

module.exports.signIn = function(req, res) {
    myDb.query('SELECT * from accounts where \
    email="' + req.body.email + '" and \
    password="' + req.body.password + '"', function(err, rows) {
        if (rows[0]) {
            res.render('home.html');
        } else {
            res.render('wrong.html');
        }
    });

};

module.exports.signUp = function(req, res) {
    myDb.query('SELECT * from accounts where email="' + req.body.email + '"', function(err, rows) {
        if (rows[0]) {
            res.render('wrong.html');
        } else {
            myDb.query('INSERT INTO accounts set \
            email ="' + req.body.email + '", \
            password="' + req.body.password + '", \
            username="' + req.body.username + '"', function(err, success) {
                console.log(err, success);
                res.render('home.html');
            });
        }
    });

};