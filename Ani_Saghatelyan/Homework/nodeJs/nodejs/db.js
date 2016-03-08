var server = require('./serve');
var index = require('./index');
var mySql = require('mysql');
var mongoose = require('mongoose');
var controller=require('./modules/user/controller');
var db = mySql.createConnection({
  host     : 'localhost',
  user     : 'root',
  password : 'root',
  database : 'hdm'
});

module.exports = {mySql:db};
