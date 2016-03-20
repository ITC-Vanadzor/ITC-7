myApp.controller('formCtrl', function($scope, $location, data) {
    $scope.user = {};
    $scope.registration =function() {
    	if ($scope.user.firstName && $scope.user.lastName && $scope.user.email && $scope.user.password ) {
			$scope.user.name = $scope.user.firstName+' ' + $scope.user.lastName;
			data.signedInAs = $scope.user.name;
        	data.users.push($scope.user);
        	$scope.user = {};
        	alert("You are already have an account");
			$location.path('/chats');
     	} else {
    	alert("Please fill in all the data");
    	};
    };
    
});
