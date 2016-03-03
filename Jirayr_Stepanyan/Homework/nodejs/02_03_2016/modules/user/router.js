var express = require('express');
var controller = require('./controller');
var router = express.Router();
var log = require('./log');
var logFile = './log.json';

module.exports = function() 
{
    router.get('/', controller.get);
    router.post('/signUp', controller.signUp);
    router.post('/signIn', controller.signIn);
    router.put('/', controller.put);
    router.delete('/', controller.delete); 
    return router;
};
