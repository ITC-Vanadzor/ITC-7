var server = require('./serve');
var index = require('./index');
var mySql = require('mysql');
var db = mySql.createConnection({
  host     : 'localhost',
  user     : 'root',
  password : 'root',
  database : 'hdm'
});

//db.query('SELECT surname, name from student where id = ', function(err, rows) {
//  console.log('The name is: ', rows[0].name, 'and surname is: ', rows[0].surname);
//});
module.exports = {mySql:db};
