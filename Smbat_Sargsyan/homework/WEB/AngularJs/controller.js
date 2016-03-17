//var app = angular.module("myApp", []);

app.controller('MainCtrl', function($scope,Service) {
 

		$scope.user = {};
		console.log("registr");
		$scope.inputFields =[{user:'name'},{user:'email'},{user:'age'},{user:'password'}];
		$scope.addUser = function() {
		console.log($scope.inputFields[0].m);
		Service.objArray.push($scope.user);
		$scope.user = {};
		alert(Service.objArray[0].name);
		console.log(Service.objArray[0]);
		}
		
});
