var express = require('express');
var router = express.Router();

module.exports = function() {
  router.get('/', function(req, res){
  	res.end('--get---');
  });
  router.post('/', function(req, res){
	var body = req.body;
	console.log(body);
	res.end('----post----');
  });
  router.put('/', function(req, res){
  	res.end('----put----');
  });
  router.delete('/', function(req, res) {
  	res.end('---delete---');
  });
  return router;
};
