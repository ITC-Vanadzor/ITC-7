var server = require('./serve');
var index = require('./index');
var mySql = require('mysql');
var db = mySql.createConnection({
  host     : 'localhost',
  user     : 'root',
  password : 'root',
  database : 'itc7'
});

db.query('SELECT surname, name from student where id = 4', function(err, rows) {
  console.log('The name is: ', rows[0].name, 'and surname is: ', rows[0].surname);
});
module.exports = {mySql:db};