var myApp = angular.module('myApp',[ngRoute]);

myApp.service('data', function() {
    this.users = [];
    this.chats = [];
    this.pages = {
	reg : {	ctrl: "formCtrl", url : "src/registracion.html"},
	chat : {ctrl: "chatCtrl", url : "src/chats.html"},
	profile : {ctrl: "profileCtrl",	url: "src/profile.html"}
	};
    
});

myApp.config(['$routeProvider', function($routeProvider) {
    $routeProvider.
        when('/', {
            templateUrl: 'registration.html',
            controller: 'formCtrl'
        }).

        when('/chats', {
            templateUrl: 'chats.html',
            controller: 'chatCtrl'
        }).

        when('/profile', {
            templateUrl: 'profile.html',
            controller: 'profileCtrl'
        }).
        otherwise({
            redirectTo: '/'
        });
}]);

