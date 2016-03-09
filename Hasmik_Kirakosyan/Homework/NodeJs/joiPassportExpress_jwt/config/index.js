'use strict';

var bodyParser = require('body-parser');
var express = require('express');
var multer = require('multer');
var passport = require('passport');

var LocalStrategy = require('passport-local').Strategy;



module.exports = function(server) {
		  // html renderer
		  server.set('view engine', 'ejs');
		  server.engine('html', require('ejs').renderFile);
		  server.set('views', __dirname+"../../public");

		  // for rendering static file
		  server.use(express.static('./public'));

		  // for parsing multipart/form-data
		  var parser = multer();
		  // for parsing application/json
		  server.use(bodyParser.json());
		  // for parsing application/x-www-form-urlencoded
		  server.use(bodyParser.urlencoded({
					 extended: true
		  }));
  		
		  // authenticate username and password
		  passport.use(new LocalStrategy(
								function(username, password, done) {
										  User.findOne({ username: username }, function(err, user) {
													 if (err) { return done(err); }
													 if (!user) {
																return done(null, false, { message: 'Incorrect username.' });
													 }
													 if (!user.validPassword(password)) {
																return done(null, false, { message: 'Incorrect password.' });
													 }
													 return done(null, user);
										  });
								}
));
		  server.use(parser.array());
		  return server;
};
