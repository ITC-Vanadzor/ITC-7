var app = angular.module('myApp', ['ngRoute']);

app.service('Service', function() {
   this.objArray=[];
   this.ChatList={};
   this.usersArray=[];
   this.showUsers = function() {
  	for(x in Service.objArray) {
			Service.usersArray[x]=Service.objArray[x].name;
		}
   }
  
});

app.config(['$routeProvider', function($routeProvider) {
            $routeProvider.
            
            when('/chats', {
               templateUrl: 'chats.html',
               controller: 'ChatsCtrl'
            }).
            
	    when('/registration', {
               templateUrl: 'registration.html',
               controller: 'MainCtrl'
            }).
	    when('/profile', {
               templateUrl: 'profile.html',
               controller: 'ProfileCtrl'
            }).

            otherwise({
               redirectTo: '/registration'
            });
         }]);
