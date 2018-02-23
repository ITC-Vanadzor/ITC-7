app.controller("chatCntrl", function($scope, users, $localStorage) {
	$scope.usersList = users.usersArr;
	
	var messages =[];
	$scope.sendMessage = function(message) {

		messages.push({ from: $scope.fromUser.name, to: $scope.toUser.name, message: $scope.message });		
		localStorage.setItem("messages", JSON.stringify(messages));
		console.log(localStorage.getItem("messages"));
		$scope.usersMessages =  JSON.parse(localStorage.getItem("messages"));;
	};

});
