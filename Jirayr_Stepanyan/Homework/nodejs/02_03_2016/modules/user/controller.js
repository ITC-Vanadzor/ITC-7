var fs = require('fs');
var log = require('./log');
var logFile = './log.json';

module.exports.get = function(req, res)
{
	res.end('------get------');
}

module.exports.signUp = function(req, res)
{
	var body = req.body;
	var signUp = fs.readFileSync('log.json', 'utf8', function(err){});
	signUp = JSON.parse(signUp);
	var post = signUp.post;
	for (var i = 0; i < post.length; ++i)
	{
	    if(body.email == post[i].email && body.password == post[i].password)
	    {
		res.end('------You are already signed up.  Please sign in-------');
	    }
	}
	log.post.push(req.body);
	var stringBody = JSON.stringify(log);
	fs.writeFile(logFile, stringBody, function(e, s){});
	res.end('--------------Cangratulations you are signed up--------------post-------');
}

module.exports.signIn = function(req, res)
{
	var body = req.body;
	var signIn = fs.readFileSync('log.json', 'utf8', function(err){});
	signIn = JSON.parse(signIn);
	var post = signIn.post;
	for (var i = 0; i < post.length; ++i)
	{
	    if(body.email == post[i].email && body.password == post[i].password)
	    {
		res.render('profile2.html');
		return;
	    }
	}
	res.end('------Wrong email or password-----------post--------');
}

module.exports.put = function(req, res)
{
	res.end('------put------');
}

module.exports.delete = function(req, res)
{
	res.end('------delete------');
}
