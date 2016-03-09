var db = require('./db').mySql;
var sha256 = require('js-sha256');
module.exports.get = function(req, res)
{
	res.end('------get------');
}

module.exports.signUp = function(req, res) {
    var data = req.body;
    var valid = validateUserData(data);
    if (valid) 
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
    else 
    {
        res.end('validtion error');
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

var validateUserData = function(data) {
    var valid = false;
    if (data.email && data.password) {
        valid = validateEmail(data.email);
        valid = valid && data.password.length >= 6;
    }
    return valid;
};

function transformPasword(password) {
    var index = Math.round(password.length / 2);
    var salt = password[index] + index + password.length;
    password = salt + password + salt;
    return password;
}

function validateEmail(email) {
    var re = /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
    return re.test(email);
}




module.exports.put = function(req, res)
{
	res.end('------put------');
}

module.exports.delete = function(req, res)
{
	res.end('------delete------');
}
