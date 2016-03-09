var server = require('./serve');
var index = require('./index');
var mySql = require('mysql');
var db = mySql.createConnection({
    host     : 'localhost',
    user     : 'root',
    password : 'student',
    database : 'myDB'
});

db.connect(function(error) {
    if (!error) {
	console.log("Database is connected");
    } else {
	console.log("connection error" + error);
    }
});


module.exports = {mySql:db};
