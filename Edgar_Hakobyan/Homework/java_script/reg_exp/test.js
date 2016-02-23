var str="http://google.com:8080/search?q=hello"

var pat1=/[a-z]+(?=:\/\/)/i;
var pratacol=str.match(pat1);
alert(pratacol);

var pat2=/[a-z]+[.]+[a-z]+(?=:)/i;
var host=str.match(pat2);
alert(host);

var pat3=/[0-9]+(?=\/)/i;
var port=str.match(pat3);
alert(port);

var pat4=/(?:\/)+[a-z]+(?=\?)/i;
var endport=str.match(pat4);
alert(endport);

var pat5=/(?:q)+(?:=)+[a-z]+/i;
var parameters=str.match(pat5);
alert(parameters);
