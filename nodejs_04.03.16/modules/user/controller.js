'use strict';
var fs = require('fs');
var async = require('async');
var log = require('./log');
var logFile = './log.json';

function write(filename, index, callback) {
  if(index % 2) {
    setTimeout(function(){
      fs.writeFile(filename, 'data1---filename', function(error){
        callback(error, filename + ' filename was writed');
      });      
    }, 5000 * index);
  } else{
    fs.writeFile(filename, 'data1---filename', function(error){
        callback(error, filename + ' filename was writed');
      });
  }
}

var calls = [], files = [];
for(var i = 0; i < 7; i++) {
	calls.push(write.bind({}, '---FILENUMBER---' + i, i));
  files.push('---FILENUMBER---' + i);
}

var err = false;
var read = function(name, callback) {
  fs.readFile(name, 'utf8', function(error, data){
    err = !err;
    if(err){
      callback('some error')
    } else {
      callback(error, data);
    }
  })
};

var writeFile = function(callback) {
  fs.writeFile('test.log', '{"name":"waterFall"}', function(error){
    callback(error, 'test.log');
    // callback('error');
  })
};

var readFile = function(name, callback) {
  if(name) {
    fs.readFile(name, function(error, data){
      if(error) {
        callback(error);
      } else {
          callback(null, JSON.parse(data).name);
      }
    });
  }
};

// async.parallel(calls, function(error, succsess){
//  console.log('error', error, 'succsess', succsess);
// });

// async.waterfall([writeFile, readFile], function(error, succsess){
//   console.log(error, succsess);
// });

// async.map(files, read, function(error, result){
//   console.log(error, 'error', '-------result', result);
// });

async.filter(files, read, function(result){
  console.log( '-------result', result);
});

module.exports.get = function(req, res) {
    res.end('-----index-----');
};

module.exports.create = function(req, res){
    log.post.push(req.body);
    var body = JSON.stringify(log);
    fs.writeFile(logFile, body, function(e, s){
      console.log(e, s, '-----');
    });
  	res.end('------post------');
  };