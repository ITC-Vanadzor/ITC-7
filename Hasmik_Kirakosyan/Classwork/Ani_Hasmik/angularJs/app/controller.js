app.controller('MainCtrl',function ($scope, users) {

		$scope.array=users.usersArr;

		    $scope.addUser = function() {
				users.put($scope.name,$scope.email, $scope.password);
				//console.log(users.usersArr);
				users.get('ani');
		    }
			});


