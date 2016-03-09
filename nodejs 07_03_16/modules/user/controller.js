'use strict';
var fs = require('fs');
var async = require('async');
var Employee = require('./module');

module.exports.get = function(req, res) {
    Employee.employeeList(function(err, employee) {
        if (err) {
            res.end(err);
        } else {
            res.send(employee);
            res.end();
        }
    });
};
module.exports.getById = function(req, res) {
    Employee.getEmployee(req.params.id, function(err, employee) {
        if (err) {
            res.end(err);
        } else {
            res.send(employee);
            res.end();
        }
    });
};

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