
app.controller('regCntrl', function ($scope, users) {
		  $scope.usersList = users.usersArr;
		  $scope.addUser = function() {
					 //console.log($scope.name, $scope.email, $scope.password);
					 users.put($scope.name, $scope.email, $scope.password);
					 users.get("hasmik");
		  }
}); 

