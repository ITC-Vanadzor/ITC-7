var mySql = require('mysql');
var db = mySql.createConnection({
  host     : 'localhost',
  user     : 'root',
  password : 'student',
  database : 'hdm'
});
 
module.exports = {mySql:db};