'use strict';
var express = require('express');
var controller = require('./controller')
var router = express.Router();

module.exports = function() {
  router.get('/', controller.get);

  router.get('/:id', controller.getById);

  router.post('/', controller.create);
  router.post('/login', function(req, res, next){
    if(req.headers['x-main-auth']) {
      res.end('you are logined');
      return;
    }
    next();
  },controller.login);
  router.post('/registration', controller.registration);
  
  router.put('/', function(req, res){
  	res.end('----put----');
  });
  router.delete('/', function(req, res) {
  	res.end('---delete---');
  });
  return router;
};
