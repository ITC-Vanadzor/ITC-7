myApp.controller('profileCtrl', function($scope, $location, data) {
	$scope.profileUserData={};
	$scope.tmpChat = [];
	for (user in data.users) {
		if (data.users[user].name == data.profileUser) {
			$scope.profileUserData = data.users[user];
			continue;
		}
	};
	for (item in data.chats) {
		if ((data.chats[item].fromUser == data.signedInAs && data.chats[item].toUser == data.profileUser) || (data.chats[item].toUser == data.profileUser && data.chats[item].toUser == data.signedInAs)) {
			$scope.tmpChat.push(data.chats[item]);
		}
	};

    $scope.back=function(){
		data.profileUser="";
		$location.path('/chats');
	}
	
	$scope.logout=function(){
		data.profileUser="";
		data.signedInAs="";
		$location.path('/');
	}
});
