var str = "http://google.com:8080/search?username=hi&password=by"

var protocol = str.match(/^(.*):\/\//);
alert ("protocol "+protocol[1]);

var host = str.match(/:\/\/(.*):/);
alert("host "+host[1]);

var port = str.match(/:(.*)\/search/);
str = port[1];
port = str.match(/:(.*)/);
alert("port "+port[1]);

var var1 = str.match(/\?(.*)\&/);
alert(var1[1]);
//var val1 = str.match(/=(.*)\&/);
//alert("variable 1 : "+var1[1]+" = "+val[1]);
