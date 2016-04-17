var mysql = require('mysql');

var connection = mysql.createConnection({
  host: 'localhost',
  user: 'root',
  password: 'student',
  database: 'easyBoard'
});
connection.connect();



var id = '1; drop table articles;';

var query = connection.query('select * from articles where id = ?', id, function(err, result) {
  console.log(query.sql);
});
