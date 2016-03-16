var app = angular.module("myApp",[]);
app.factory('dataService',function(){
	this.users=[];	
	return this;
});
