myApp.controller('formCtrl', function($scope, data) {
    $scope.user = {};
    $scope.registration =function() {
        data.users.push($scope.user);
        $scope.user = {};
        alert("You already have an account");
	$scope.page = "chats.html";
    };
});
