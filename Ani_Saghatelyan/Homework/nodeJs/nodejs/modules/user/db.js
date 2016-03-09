var server = require('./serve');
var index = require('./index');
var mySql = require('mysql');

var controller=require('./controller');
var db = mySql.createConnection({
  host     : 'localhost',
  user     : 'root',
  password : 'elen041014@',
  database : 'hdm'
});

module.exports = {mySql:db};
