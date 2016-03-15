var app=angular.module("myApp", []);

app.controller('myCtrl',function ($scope) {
		  $scope.changeDivId = function(param) {
					 $scope.divId = param;
		  }	

		  $scope.objArray = [];
		  $scope.addUser = function() {
					 $scope.obj = {name:$scope.name, email:$scope.email}
				 $scope.objArray = $scope.objArray.concat([$scope.obj]);
		  }
});
