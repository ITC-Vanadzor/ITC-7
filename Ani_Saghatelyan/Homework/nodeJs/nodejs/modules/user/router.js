'use strict';
var express = require('express');
var controller = require('./controller')
var router = express.Router();
//var Joi=require('joi');

module.exports = function() {
//  router.get('/', controller.get);
 // router.get('/:id', controller.getId); 
 router.post('/sign-up',controller.registration);
  router.post('/sign-in', controller.login);
//  router.put('/', controller.put);
 // router.delete('/',controller.delete);
  return router;
};


/*var routes=[
{
  method: 'POST',
  path: '/sign-up',
  config: {
    handler: controller.registration,
    description: 'Creates a user', 
    validate: {
        userame: Joi.string().min(3).max(100),
        email: Joi.string().email().required(),
	password: Joi.string().min(5).required()
      }
    },

{
method: 'POST',
  path: '/sign-in',
  config: {
    handler: controller.login,
    description: 'Login  user',
    validate: {
        email: Joi.string().email().required(),
        password: Joi.string().min(5).required()
      }
    }
}
]*/
