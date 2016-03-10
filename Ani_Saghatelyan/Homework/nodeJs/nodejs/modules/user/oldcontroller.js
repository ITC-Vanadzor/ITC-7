'use strict';
var db = require('./db').mySql;
//var Employee = require('./module');
var sha256 = require('js-sha256');

module.exports.create = function(req, res) {
    var employee = req.body;
    Employee.createEmployee(employee, function(err, result) {
        if (err) {
            res.end(err);
        } else {
            res.send(result);
            res.end();
        }
    });
};

module.exports.registration = function(req, res) {
    var data = req.body;
    var valid = validateUserData(data);
    if (valid) {
        var password = transformPasword(data.password);
        password = sha256(password);
        var query = 'INSERT INTO user set username ="'+data.username +'", email = "' + data.email + '", password = "' + password + '"';
        db.query(query, function(err, rows) {
            if (err) {
                res.end('can\'t create user');
            } else {
                res.end('user was created');
            }
        });
    } else {
        res.end('validtion error')
    }
};

module.exports.login = function(req, res) {
    var data = req.body;
    var valid = validateUserData(data);
    if (valid) {
        var password = transformPasword(data.password);
        password = sha256(password);
        var query = 'SElECT * from user where email = "' + data.email + '" and password="' + password + '"';
        db.query(query, function(err, rows) {
            if (err) {
                res.end('can\'t login as there is not such a user');
            } else if(rows.length){
                res.writeHead(200, {
                    'Content-Type': 'text/plain',
                    'X-Main-Auth': 'true'
                });
                res.end('user was logined');
            } else {
                res.end('can\'t login');                
            }
        });
    } else {
        res.end('validtion error')
    }
};

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

