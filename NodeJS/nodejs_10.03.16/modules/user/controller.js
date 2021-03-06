'use strict';
var fs = require('fs');
var async = require('async');
var joi = require('joi');
var User = require('./module');
var db = require('../../db').mySql;
var sha256 = require('js-sha256');
var jwt = require('express-jwt');
var joi = require('joi');
var passport = require('passport');
var jsonwebtoken = require('jsonwebtoken');

module.exports.get = function(req, res) {
    res.end('index');
};

module.exports.getById = function(req, res) {
    res.end('get by id');
};

module.exports.create = function(req, res) {
    res.end('create');
};

module.exports.registration = function(req, res) {

    console.log(req.user)
    var data = req.body;
    User.create(data, function(err) {
        if (err) {
            res.end('can\'t create user')
        } else {
            res.end('user was created');
        }
    });
};

module.exports.login = function(req, res, next) {
    var data = req.body;
    passport.authenticate('local', function(err, user, message) {
        if (user) {
            res.json({
                message: message,
                user: user,
                token: generateToken(user)
            }).end();
        } else {
            res.end('cant\'t  logined');
        }
    })(req, res, next);
};

var generateToken = function(user) {
    var token = jsonwebtoken.sign(user, 'secretsecretsecretsecret', {
        expiresInMinutes: 12 //minit
    });
    console.log(token);
    return token;
};