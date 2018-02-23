var app = angular.module("myApp", ['ngRoute', 'ngStorage']); 

//users service
app.service("users", function() {
		  this.usersArr = [];

		  this.put = function (name, email, password) {
					 this.usersArr.push({name: name, email: email, password: password});
		 }

		  this.get = function(name) {
					 for (x in this.usersArr) {
								if (x.name === name) {
										  console.log(x.name);
								}
					 }
		  }
});


app.config(['$routeProvider', '$locationProvider',
					 function($routeProvider, $locationProvider) {
								$routeProvider
								.when('/registration', {
													 templateUrl: '/chatProject/src/register.html',
													 controller: 'regCntrl',
								})

								.when('/chat', {
										  templateUrl: '/chatProject/src/chats.html',
										  controller: 'chatCntrl',
								})
								.when('/profile', {
										  templateUrl: '/chatProject/src/profile.html',
										  controller: 'profileCntrl',
								});

}]);

