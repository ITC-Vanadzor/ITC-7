var mongoose = require('mongoose');
var Schema = mongoose.Schema;

var Employee = new Schema({
    id: {
        type: Number,
        required: true,
        max: 15
    },
    name: {
        type: String,
        required: true,
        max: 20
    },
    surname: {
        type: String,
        required: true,
        max: 30
    }
});

Employee.statics.employeeList = function(callback) {
    this.find({}, function(err, employee) {
        if (err) {
            callback('can\'t get employee');
        } else {
            callback(null, employee);
        }
    })
};

Employee.statics.getEmployee = function(id, callback) {
    this.find({
        id: id
    }, function(err, employee) {
        if (err) {
            callback('can\'t get employee');
        } else {
            callback(null, employee);
        }
    })
};

Employee.statics.createEmployee = function(employe, callback) {
    this.create(employe, function(err, success) {
        if (err) {
            callback('can\'t create employee');
        } else {
            callback(null, 'employee was created');
        }
    });
};

module.exports = mongoose.model('Employee', Employee);