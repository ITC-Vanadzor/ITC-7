var app=angular.module("myApp", []);
app.controller('myCtrl',function ($scope) {
	$scope.changeDivId = function(param) {
		$scope.divId = param;
	}	

});
