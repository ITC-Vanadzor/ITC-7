var myApp = angular.module('myApp',['ngRoute']);

myApp.service('data', function() {
    this.users = [{
	firstName : "Ani",
	lastName:"Hambaryan",
	name: "Ani Hambaryan",
	email: "ani@gmail.com",
	password : "123456"
	}, {	
	firstName : "Anna",
	lastName:"Avetyan",
	name: "Anna Avetyan",
	email: "anna@gmail.com",
	password : "456789"
	}];	
	
    this.chats = [];
    this.signedInAs="";
    this.profileUser="";
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

