var async=require('async');
var  fs=require('fs');
var files=[];
var name;
for (var i=0; i<5; ++i)
{
	fs.writeFile( i+'.txt', 'Hello'+i , 'utf8', function(err,succ){
		callback("errRead "+err,"succRead "+succ)});

	files.push(i+'.txt');
}

var append = function (name)
{
	fs.appendFile(name, '+++', 'utf8', function(err, succ){
			callback("err appendFile "+err, "succ appendFile "+ succ)})	
}

async.map(files, append, function(err, succ){
	  callback("err  map "+err, "succ mapp "+ succ)});	

