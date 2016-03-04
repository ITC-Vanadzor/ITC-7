'use strict';
var fs = require('fs');
var async = require('async');
//var log = require('./log');
//var logFile = './log.json';

var obj = {};
async.series([
					 function(callback){
								obj.color = "yellow";
								callback(null, obj);
					 },
					 function(callback){
								obj.lives = 5;
								callback(null, obj);
					 }
],
// optional callback
function(err, results){
		  console.log('error : ', error, 'results : ', results);
});

