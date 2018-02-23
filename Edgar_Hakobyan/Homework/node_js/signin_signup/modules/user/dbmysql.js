var mySql = require('mysql');
var db = mySql.createConnection({
  host     : 'localhost',
  user     : 'root',
  password : 'edgar2410',
  database : 'hdmDb'
});

module.exports = {mySql:db};