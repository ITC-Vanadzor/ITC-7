'use strict';
var fs = require('fs');
var async = require('async');
var res=[];
var res1=[];
var res2=[];

var firstFunction= function(res,callback){
 setTimeout(function(){
      fs.readFile('first.txt', 'utf8', function(error,data){
      	res.push(data);
        callback(error, data);
      });      
    }, 3000);
}

var secondFunction= function(res,callback){
 setTimeout(function(){
      fs.readFile('second.txt', 'utf8', function(error,data){
      	res.push(data);
        callback(error, data);
      });      
    }, 1000);
}

var thirdFunction= function(res,callback){
 setTimeout(function(){
      fs.readFile('third.txt', 'utf8', function(error,data){
      	res.push(data);
        callback(error, data);
      });      
    }, 2000);
}


console.log("Phone 091 24 04 55");
console.log("-----STANDART CALLS------");
var myCallback=function (e,d){	
	console.log("reading-> ", d);
}
firstFunction(res,myCallback);
secondFunction(res,myCallback);
thirdFunction(res,myCallback);



var calls = [];
calls.push(firstFunction.bind({},res1));
calls.push(secondFunction.bind({},res1));
calls.push(thirdFunction.bind({},res1));

async.series(calls, function(error, result){
  console.log("-----ASYNC SERIES------");
  console.log('result-> ', result);
  console.log('real result-> ', res1);
 });


var calls = [];
calls.push(firstFunction.bind({},res2));
calls.push(secondFunction.bind({},res2));
calls.push(thirdFunction.bind({},res2));

async.parallel(calls, function(error, result){
  console.log("-----ASYNC PARALLEL------");
  console.log('result-> ', result);
  console.log('real result-> ', res2);
 });


