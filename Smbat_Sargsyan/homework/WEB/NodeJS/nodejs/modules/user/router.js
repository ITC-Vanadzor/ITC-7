'use strict';
var express = require('express');
var controller = require('./controller')
var fs = require('fs');
var router = express.Router();
var log = require('./log');
var logFile = './log.json';
module.exports = function() {
  router.get('/', controller.get);

  router.get('/:id', function(req, res){
  	res.end('---id vareble---' + req.params.id);
  });

  router.post('/registration/', function(req, res){
    //var name = req.body.username;
    //var email = req.body.useremail;
    //var password = req.body.userpass;
    //log.post.push(req.body);
    var data = fs.readFileSync(logFile);
    var dataBase = JSON.parse(data);
    dataBase[req.body.username] = {
            username: req.body.username,
            useremail: req.body.useremail,
            userpass: req.body.userpass
        };
    var body = JSON.stringify(req.body);
    fs.writeFile(logFile, body, function(e, s){
      console.log(e, s, '---registration--');
    });
  	res.end('------post------');
  }
);

  router.post('/signin/',function(req,res) {
    var email = req.body.useremail;
    var password = req.body.userpass;
    
    fs.readFile('log.json','utf8',function(err,data) {
	var jsonData = JSON.parse(data);
        for(var i = 0; i < jsonData.length; ++i) {
           if(email == jsonData[i].useremail && password == jsobData[i].userpass) {
	     console.log("You are sign in " + jsonData[i].username);
	    }
   	 }
	res.end('------sign in------');
	})
});
  router.put('/', function(req, res){
  	res.end('----put----');
  });
  router.delete('/', function(req, res) {
  	res.end('---delete---');
  });
  return router;
}
