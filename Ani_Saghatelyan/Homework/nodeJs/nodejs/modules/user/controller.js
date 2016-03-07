'use strict';
var fs = require('fs');
var log = require(__dirname+'/log');
var logFile = __dirname+'/log.json';



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
       var obj = require(__dirname+'/log.json');
	var arr=obj.post;
    // checking for consisting that email in file
        for (var i=0; i<arr.length;++i)
        {
		if(arr[i].email===req.body.email)
		{
			res.end("this email has already consists.Please enter another email");
                               return;
		}
         }
    log.post.push(req.body);
    var body = JSON.stringify(log);
    fs.writeFile(logFile, body, function(e, s){
      console.log(e, s, '-----');
    });
 res.render('profile.html');

   
  };
module.exports.signIn=function(req, res){
	var arr=log.post;
       // checking the correction of input datas
        for (var i=0; i<arr.length;++i)
        {
		if(arr[i].email===req.body.email && arr[i].password===req.body.password)
		{
                        res.render('usage.html');
                        return;
		} 
        }
			res.end("no");
			return;
};

// puts datas for updating info
module.exports.put = function(req, res){
  	res.end('----put----');
  };
//deletes data from file in server
module.exports.delete=function(req, res){
  	res.end('----put----');
  };

