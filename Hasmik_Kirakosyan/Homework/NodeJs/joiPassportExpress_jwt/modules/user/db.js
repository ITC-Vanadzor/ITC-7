var mySql = require('mysql');
var connection = mySql.createConnection({
		  host: 'localhost',
		  user: 'root',
		  port: '3306',
		  password: 'hdm',
		  database: 'hdm'
});
var create = 'CREATE TABLE IF NOT EXISTS usersData (email varchar(40) DEFAULT NULL, username varchar (17) DEFAULT NULL, password varchar(25) DEFAULT NULL, PRIMARY KEY(email));'

connection.query(create, function(err, success) {
		  									console.log(err, success); 
});	  

module.exports = connection;
