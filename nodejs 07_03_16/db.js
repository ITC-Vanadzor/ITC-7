var server = require('./serve');
var index = require('./index');
var mySql = require('mysql');
var mongoose = require('mongoose');
var db = mySql.createConnection({
  host     : 'localhost',
  user     : 'root',
  password : 'root',
  database : 'itc7'
});
mongoose.connect('mongodb://localhost/itc7');
mongoose.connection.on('error', function(err){
	console.log('connection error: ', err);
});
db.query('INSERT INTO student set name = "Jirayr", surname = "Stepanyan", birthday = "1994-02-22"', function(err, success) {
	// console.log(err, success);
});

db.query('SELECT surname, name from student where id = 4', function(err, rows) {
  console.log('The name is: ', rows[0].name, 'and surname is: ', rows[0].surname);
});
module.exports = {mySql:db};