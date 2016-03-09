var db = require('./db').mySql;
module.exports.get = function(req, res)
{
	res.end('------get------');
}

module.exports.signUp = function(req, res)
{
	var body = req.body;
	db.query('select * from hdm where email=' + body.email, function(err, rows){
		if(rows[0])
		{
			res.end('there is a user with this email');
			return;
		}
	});
	db.query('insert into hdm set username =' + body.username+ ', email ="' + body.email + '",password="' + body.password + '"', function(err, success){});
	res.end('-------------cangrotulations yu are signed up--------------');
	
}

module.exports.signIn = function(req, res)
{
	var body = req.body;
	db.query('select * from hdm where email =' + body.email + ', and password =' + body.password, function(err, rows){
		if(rows[0])
		{
			res.render('../../public/profile2.html');
			return;
		}
	});
	res.end('--------------Wrong email or password---------------');
}

module.exports.put = function(req, res)
{
	res.end('------put------');
}

module.exports.delete = function(req, res)
{
	res.end('------delete------');
}
