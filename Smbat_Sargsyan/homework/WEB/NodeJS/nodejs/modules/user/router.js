'use strict';
var express = require('express');
var controller = require('./controller')
var fs = require('fs');
var router = express.Router();
var db = require('./log');
var logFile = './log.json';
module.exports = function() {
  router.get('/', controller.get);

  router.get('/:id', function(req, res){
  	res.end('---id vareble---' + req.params.id);
  });

  router.post('/registration/', function(req, res){
    var user = req.body;
    // TODO:validate user
    db[user.useremail] = user;
    var body = JSON.stringify(db);
    fs.writeFile(logFile, body, function(e, s){
      console.log(e, s, '---registration--');
    });
   res.end('------post------');
  });

  router.post('/signin/',function(req,res) {
    var email = req.body.useremail;
    var password = req.body.userpass;
    var result = "You aren't sign in " + req.body.username;
    if(db[email] && password == db[email].userpass) {
        result = "You are sign in " + db[key].username;
     }
     res.end(result);
  });

  router.put('/', function(req, res){
  	res.end('----put----');
  });

  router.delete('/', function(req, res) {
  	res.end('---delete---');
  });

  return router;
}
