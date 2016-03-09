'use strict';
var express = require('express');
var controller = require('./controller')
//var fs = require('fs');
var router = express.Router();
//var log = require('./log');
//var logFile = './log.json';
//var  dataBase={};
var db = require('../../db');


module.exports = function() {
  router.get('/', controller.get);

  router.get('/:id', controller.id );

  router.post('/registration/', controller.registration);

  router.post('/signin/', controller.signin);

  router.put('/', controller.put);

  router.delete('/', controller.delete);

  return router;
}
