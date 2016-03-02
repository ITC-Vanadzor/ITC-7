var express = require('express');
var router = express.Router();

module.exports = function() {
	router.get('/username', function(req, res) {
	res.end('-----username-----');
  }); 
	router.get('/password', function(req, res) {
	res.end('-----password-----');
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
}
