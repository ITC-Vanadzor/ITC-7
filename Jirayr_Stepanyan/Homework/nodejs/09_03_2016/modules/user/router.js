var express = require('express');
var router = express.Router();
var controller = require('./controller');

module.exports = function() 
{
    router.get('/', controller.get)
    router.post('/signUp', controller.signUp)
    router.post('/signIn', controller.signIn)
    router.put('/', controller.put)
    router.delete('/', controller.delete) 
    
  return router;
};
