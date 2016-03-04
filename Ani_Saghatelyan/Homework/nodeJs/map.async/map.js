var async=require('async');
var  fs=require('fs');
// array for saving filenames
var files=[];
// 
var name;

// creates and writes  the word 'hello' in all files
function write(filename, index,callback) {
  fs.writeFile(filename, 'Hello'+filename ,function(error,data){
        console.log('write err '+filename+error,'write succ '+filename+data)});
       // callback(error, data);
} 
// 5 times calls wrire function and pushes the names of files into files array
for (var i=0; i<5; ++i)
{
 	write(i+'.txt',i);
	files.push(i+'.txt');
}
// appends in a file '+++'
var append = function (name,callback)
{

	fs.appendFile(name, '+++', 'utf8', function(error, data){
                
                      //  callback(error, data);	
                        console.log(" err appendFile "+name+' ' +error, " succ appendFile "+name+' '+ data)});	
}
// calls append function for all elements of the array, then after it calls callback function
async.map(files, append, function(error, data){
          // callback(error, data);
          console.log("  map "+error, "succ mapp "+ data);
	  })
