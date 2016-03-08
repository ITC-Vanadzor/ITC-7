var mySql = require('mysql');
var db = mySql.createConnection({
  host     : 'localhost',
  user     : 'root',
  password : 'student',
  database : 'hdm'
});

db.connect();

module.exports = {mySql:db};