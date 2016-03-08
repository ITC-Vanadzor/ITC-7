'use strict';



//gets data 
module.exports.get =function(req,res){
    
    module.exports.db.query("SELECT * from user",function(err, rows, fields){
            res.json(data);
	});
};

// gets datas using id
module.exports.getId=function(req, res){
  	res.end('---id vareble---' + req.params.id);
};

//posts data for saving in file
module.exports.signUp = function(req,res){
    var user = req.body.username;
    var Email=req.body.email;
    var pass = req.body.password;
    
   	 exports.module.db.query('INSERT INTO user set username =user, surname = Email, password=pass', function(err, success) {
        // console.log(err, success);
	});
  };

module.exports.signIn=function(req, res){
    var email=req.body.email;
    var password = req.body.password;
    
	  exports.module.db.query("SELECT * from user WHERE   email=? and password=? LIMIT 1",[email,password],function(err, rows, fields){
        	if(rows.length != 0){
            		data["Data"] = "Successfully logged in..";
            		res.render('profile.html');
        	}else{
            		data["Data"] = "Email or password is incorrect.";
            		res.json(data);
        	}
    });
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

