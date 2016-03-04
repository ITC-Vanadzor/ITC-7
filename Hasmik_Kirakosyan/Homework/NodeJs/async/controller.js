'use strict';
var fs = require('fs');
var async = require('async');

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
		  console.log('error : ', err, 'results : ', results);
});
