var express = require('express');
var fs = require('fs');
var router = express.Router();
var log = require('./log');
var logFile = './log.json';

module.exports = function() 
{
    router.get('/', function(req, res)
    {
        res.end('--get---');
    });
    router.post('/signUp', function(req, res)
    {
	log.post.push(req.body);
	var body = JSON.stringify(log);
	fs.writeFile(logFile, body, function(e, s){});
	res.end('--------------Cangratulations you are signed up--------------post-------')
    });
    router.post('/signIn', function(req, res)
    {
	var body = JSON.parse(req.body);
	var signIn = fs.readFileSync('log', 'utf8');
	signIn = JSON.parse(signIn);
	for (user in signIn.post)
	{
	    if(body.email == user.email && body.password == user.password)
	    {
		var text='------You are signin----------post--------';
	    }
	    else
	    {
		var text='------Wrong email or password-----------post--------';
	    }
	res.end(text);
	}
    });
    router.put('/', function(req, res)
    {
        res.end('----put----');
    });
    router.delete('/', function(req, res) 
    {
        res.end('---delete---');
    });
    return router;
};
