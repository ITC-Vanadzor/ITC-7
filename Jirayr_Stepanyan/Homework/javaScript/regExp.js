var str = "http://google.com:8080/search?username=hi&password=by"

var protocol = str.match(/^(.*):\/\//);
alert ("protocol: " +protocol[1]);

var host = str.match(/:\/\/(.*):/);
alert("host: " +host[1]);

var port = str.match(/:(?!\/)(.*)\/search/);
alert("port: " +port[1]);

var var1 = str.match(/\?(.*)&/);
alert(var1[1]);
var var2 = str.match(/&(.*)$/);
alert(var2[1]);
