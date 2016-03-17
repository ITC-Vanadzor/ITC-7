myApp.controller('chatCtrl', function($scope, data) {
    $scope.allUsers= data.users;
    $scope.chat = {};
    $scope.sendMessage =function() {
        data.chats.push($scope.chat);
        $scope.chat = {};
        //alert("You already have an account");
	console.log(data.chats);
    };
});
