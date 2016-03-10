var Joi = require('joi');
var Jwt = require('express-jwt');
var nJwt = require('njwt');
 
var joiSchema = Joi.object().keys({
    username: Joi.string().alphanum().min(3).max(30).required(),
    email: Joi.string().email(),
    password: Joi.string().regex(/^[a-zA-Z0-9]{6,30}$/)
});

var secretKey = "XXX";
var claims = {
  sub: 'HDM',
  iss: 'https://hdm.am',
}


 module.exports={
 	joi:Joi, 
 	joiSchema:joiSchema,
 	nJwt:nJwt,
 	claims:claims,
 	secretKey:secretKey
 };
