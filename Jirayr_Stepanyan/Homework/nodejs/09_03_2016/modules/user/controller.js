var db = require('./db').mySql;
var sha256 = require('js-sha256');
var joi = require('joi');
module.exports.get = function(req, res)
{
	res.end('------get------');
}

module.exports.signUp = function(req, res) {
    var data = req.body;
    var schema = joi.object().keys({
    	password: Joi.string().min(6),
    	email: Joi.string().email()
	});
	console.log('---------------------------------------------');
    joi.validate({ email: data.email, password: data.password }, schema, function (err, value) 
    { 
    	if (err)
    	{
    		res.end('----validation error----');
    		return;
    	}
    	else
    	{   
	        var password = transformPasword(data.password);
	        password = sha256(password);
	        var verify = 'SElECT * from hdm where email="' + data.email + '"';
	        db.query(verify, function(err, rows) 
	        {
	            if (rows[0]) 
	            {
	                res.end('You are already signed up');
	                return;
	            }
	            else
	            {
			        var query = 'INSERT INTO hdm set email = "' + data.email + '", password = "' + password + '"';
			        db.query(query, function(err, success) 
			        {
			            if (err) 
			            {
			                res.end('can\'t create user');
			            } else 
			            {
			                res.end('user was created');
			            }
			        });
	    		}
	    	});	 
    	}
	};

module.exports.signIn = function(req, res) {
    var data = req.body;
    var valid = validateUserData(data);
    if (valid) {
        var password = transformPasword(data.password);
        password = sha256(password);
        var query = 'SElECT * from hdm where email = "' + data.email + '" and password="' + password + '"';
        db.query(query, function(err, rows) {
            if (rows[0]) {
                res.end('can\'t loginnnnnnnn');
            } else if(rows.length){
                res.writeHead(200, {
                    'Content-Type': 'text/plain',
                    'X-Main-Auth': 'true'
                });
                res.end('user was logined');
            } else {
                res.end('can\'t login');                
            }
        });
    } else {
        res.end('validtion error')
    }
};



function transformPasword(password) {
    var index = Math.round(password.length / 2);
    var salt = password[index] + index + password.length;
    password = salt + password + salt;
    return password;
}


module.exports.put = function(req, res)
{
	res.end('------put------');
}

module.exports.delete = function(req, res)
{
	res.end('------delete------');
}
