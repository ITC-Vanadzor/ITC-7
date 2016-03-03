'use strict';
var fs = require('fs');
var log = require('./log');
var logFile = './log.json';

//gets data 
module.exports.get = function(req, res) {
    res.end('-----index-----');
};

// gets datas using id
module.exports.getId=function(req, res){
  	res.end('---id vareble---' + req.params.id);
};

//posts data for saving in file
module.exports.signUp = function(req, res){
    log.post.push(req.body);
    var body = JSON.stringify(log);
    fs.writeFile(logFile, body, function(e, s){
      console.log(e, s, '-----');
    });
  	res.end('------post------');
  };
module.exports.signIn=function(req, res){
   fs.readFile(logFile, function(err, data){
   	if (err) throw err;           
 });
	var obj = JSON.parse(text);
	var arr=obj.post;
        for (var i=0; i<arr.length, ++i)
        {
		if(arr[i].email===req.body.email && arr[i].password===req.body.password)
		{
			res.redirect(./statistic.html);
		}
		else
		{
			throw err;
		}
		
	}
};

// puts datas for updating info
module.exports.put = function(req, res){
  	res.end('----put----');
  };
//deletes data from file in server
module.exports.delete=function(req, res){
  	res.end('----put----');
  };

