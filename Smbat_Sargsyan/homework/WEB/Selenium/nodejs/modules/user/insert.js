var mysql = require('mysql');

var connection = mysql.createConnection({
  host: 'localhost',
  user: 'root',
  password: 'student',
  database: 'easyBoard'
});
connection.connect();

var easyboard = {
  username: 'Smbat',
  email: 'sargsyanyan',
  password: 'aaa'
};

var query = connection.query('insert into easyBoard set ?', easyboard, function (err, result) {
  if (err) {
    console.error(err);
    return;
  }
  console.error(result);
});
