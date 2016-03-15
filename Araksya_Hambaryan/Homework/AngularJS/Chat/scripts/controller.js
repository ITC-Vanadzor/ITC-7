var app = angular.module("myApp", []);

app.controller('MainCtrl', function($scope) {
 

		$scope.objArray = [];
		$scope.addUser = function() {
		$scope.objArray = $scope.objArray.concat([
			{name : $scope.name, email: $scope.email, age: $scope.age, password: $scope.password }

			]);
		alert($scope.objArray[0].name);
		console.log($scope.objArray[0]);
		}
		$scope.usersArray=[];
		for(x in $scope.objArray) {
			$scope.usersArray[x]=$scope.objArray[x].name;
		}
		});
