var myApp = angular.module("myApp",["ngRoute"]).config(function($routeProvider){
	$routeProvider.when('/registration',{
		templateUrl:'views/registration.html',
		controller:'registerController'
	});
	$routeProvider.when('/chat',{
		templateUrl:'views/chat.html',
		controller:'chatController'
	});
});
myApp.factory('dataService',function(){
	this.users=[];	
	return this;
});
