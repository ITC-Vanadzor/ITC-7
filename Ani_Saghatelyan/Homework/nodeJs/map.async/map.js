var async=require('async');
var  fs=require('fs');
var files=[];
for (var i=0; i<5; ++i)
{
	var file=fs.writeFile( i+'.txt', 'Hello'+i , 'utf8', function(err,succ){
	
			console.log("err "+err,"succ "+succ)})
	files.push(file);
}

var append = function (name)
{
	fs.appendFile(name, '+++', 'utf8', function(err, succ){
			console.log("err appendFile " +err, "succ appendFile "+ succ)})	
}

async.map(files, append, function(err, succ){
	  console.log("err  map "+ err, "succ mapp "+ succ)});	

