var app=angular.module("hdmApp", []);

app.controller('hdmController',function ($scope) {
   $scope.divId = "signIn";
	$scope.changeDivId = function(param) {
		$scope.divId = param;
	}	

});
