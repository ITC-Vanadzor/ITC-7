var str = "http://google.com:8080/search?a=ok&limit=10";

var protocol = str.match(/^(.*):\/\//);
//alert(protocol[1]);

var host=str.match(/:\/\/(.*):/);
//alert(host[1]);

var port=str.match(/:([0-9].*)\//);
//alert(port[1]); 

var endpoint=str.match(/[0-9]\/(.*)\?/);
//alert(endpoint[1]);

var el1=str.match(/\?(.*)&/);
//alert(el1[1]);

var el2=str.match(/&(.*)$/);
//alert(el2[1]);
var myObject={};
myObject[protocol]=protocol;
myObject[host]=host;
myObject[port]=port;
myObject[endpoint]=endpoint;
myObject[el1]=el1;
myObject[el2]=el2;
console.log(myObject);

