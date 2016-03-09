'use strict';
var passport = require('passport');
var db = require('./db');

module.exports.get = function(req, res) {
		  res.end("-----Index-----");

};

module.exports.signUP = function(req, res) {
	  db.query('SELECT * from usersData where email="'+ req.body.email +'" and password = "' +req.body.password +'"', function(err, rows) {
					 if (rows[0]) {
								res.end("There is a user with this email address"); 		
								return;
					 }
					 else {
								db.query('Insert INTO usersData set username ="' +req.body.username+ '", email ="' + req.body.email + '",password="' +req.body.password +'"', function(err, success) {
										  console.log(err, success);
										  res.render('src/profile2.html');
							});
					}	
			});
}

module.exports.signIn = function(req, res) {
			  passport.authenticate('local', { login(), failureRedirect: '/login'})

};

var login =  function() {
		  db.query('SELECT * from usersData where email="'+ req.body.email +'" and password = "' +req.body.password +'"', function(err, rows) {
					 if (rows[0]) {
								res.end("src/profile2.html"); 		
								return;
					 }
					 else {
								res.end("No such user!!!");
					 }
		  });
}
