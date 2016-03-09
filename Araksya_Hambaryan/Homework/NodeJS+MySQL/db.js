var server = require('./serve');
var index = require('./index');
var mySql = require('mysql');
var db = mySql.createConnection({
    host     : 'localhost',
    user     : 'root',
    password : 'student',
    database : 'myDB'
});

db.query('CREATE TABLE IF NOT EXISTS accounts(\
	id bigint(20) AUTO_INCREMENT,\
	email varchar(255) DEFAULT NULL,\
	username varchar(255) DEFAULT NULL,\
	password varchar(255) DEFAULT NULL,\
	PRIMARY KEY(id));', function(err, succ) {
    	    if (!err) {
		console.log("Database is connected");
    	    } else {
		console.log("connection error" + err);
   	 }
});


module.exports = db;
