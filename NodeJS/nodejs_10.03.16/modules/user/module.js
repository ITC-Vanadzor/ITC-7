var db = require('../../db').mySql;
var joi = require('joi');
var sha256 = require('js-sha256');

function User() {}

User.prototype.create = function(data, callback) {
    validateUserData(data, function(err, data) {
        if (!err) {
            var password = transformPasword(data.password);
            password = sha256(password);
            var query = 'INSERT INTO user set email = "' + data.email + '", password = "' + password + '"';
            db.query(query, function(err, success) {
                if ('function' === typeof callback) {
                    callback(err)
                }
            });
        } else {
            if ('function' === typeof callback) {
                callback('validtion error')
            }
        }
    });
};

User.prototype.signin = function(data, callback) {
    validateUserData(data, function(err, data) {
        if (!err) {
            var password = transformPasword(data.password);
            password = sha256(password);
            var query = 'SElECT * from user where email = "' + data.email + '" and password="' + password + '"';
            db.query(query, function(err, rows) {
                var user = rows && rows.length ?  rows[0] : null;
                
      console.log('signin------------')
                callback(err, user);
            });
        } else {
            console.log('signin------------')
            callback('validtion error');
        }
    });
};

var validateUserData = function(data, callback) {
    var options = {
        email: joi.string().email().required(),
        password: joi.string().required().min(6).max(30)
    }
    joi.validate(data, joi.object().keys(options), function(err, data) {
        callback(err, data)
    });
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

module.exports = new User();