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
	log.post.push(req.body);
	var body = JSON.stringify(log);
	body = JSON.parse(body);
	var signIn = fs.readFileSync('log.json', 'utf8', function(err){});
	signIn = JSON.parse(signIn);
	for (body in signIn)
	{
	    if(body.email == signIn.post.email && body.password == signIn.post.password)
	    {
		res.end('------You are signin----------post--------');
	    }
	    else
	    {
		res.end('------Wrong email or password-----------post--------');
	    }
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
