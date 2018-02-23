"use strict";
var str = "http://google.com:8080/search?username=hi&password=by"


function urlParser (url) {

	this.url = url;

	this.getProtocol = function() {
		var protocol = url.match(/^(.*):\/\//);
		return protocol[1];
	}

	this.getPort = function() {
		var port = url.match(/:([0-9].*)\//);
		return port[1];
	}

	this.getPar1 = function() {
		var var1 = url.match(/\?(.*)&/);
		return var1[1];
	}	

	this.getPar2 = function () {
		var var2 = url.match(/&(.*)$/);
		return var2[1];
	}
	this.getHost = function() {
		var host = url.match(/:\/\/(.*):/);
		return host[1];		
	}
	
	this.getPath = function () {
		var path = url.match(/[0-9]\/(.*)\?/);
		return path[1];	
	}
} 

var obj = new urlParser(str);
alert ("Protocol : "+obj.getProtocol()+"\n"+
       "host : " +obj.getHost()+"\n"+
       "Port : " +obj.getPort()+"\n"+
       "Parameter N1 : " +obj.getPar1()+"\n"+
       "Parameter N2 : " +obj.getPar2()+"\n"+
       "Path : " +obj.getPath());
