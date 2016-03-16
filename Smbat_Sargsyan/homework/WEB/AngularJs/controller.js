//var app = angular.module("myApp", []);

app.controller('MainCtrl', function($scope,Service) {
 

		$scope.user = [];
		console.log("registr");
		$scope.inputFields =[{user:'name'},{user:'email'},{user:'age'},{user:'password'}];
		$scope.addUser = function() {
		Service.objArray.push([
			{name : Service.name, email: Service.email, age: Service.age, password: Service.password }

			]);
		alert(Service.objArray[0].name);
		console.log(Service.objArray[0]);
		}
});
