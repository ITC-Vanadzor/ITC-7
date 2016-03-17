myApp.controller('chatCtrl', function($scope, data) {
    $scope.chat = {};
    $scope.sendMessage =function() {
        data.chats.push($scope.chat);
        $scope.chat = {};
        //alert("You already have an account");
	$scope.page = "chats.html";
    };
});
