var async=require('async');

var dateOne = function (callback) {
        setTimeout(function() { 
                callback(null,[new Date()]);
		console.log("--one--");
        },4000)
};


var dateTwo = function (callback) {
        setTimeout(function() {
                callback(null,[new Date()]);
		console.log("--Two--");
        },2000)
}


var dateThree = function (callback) {
        setTimeout(function() {
                callback(null,[new Date()]);
	console.log("--three--");
        },1000);
}


function resultShow(err,results) {
		  console.log(new Date());
		  if (err) {
			console.error("---"+err+"---");
		  }
		  console.log(results);
		  console.log('*****************************');
}


async.parallel([dateOne, dateTwo], resultShow);
async.series([dateOne, dateTwo], resultShow);
async.parallel({one: dateOne,two: dateTwo,three: dateThree},resultShow); 
