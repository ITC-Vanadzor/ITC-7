app.controller("chatCntrl", function($scope, users) {
	$scope.usersList = users.usersArr;

	$scope.showSelectedValue = function(mySelect) {
		console.log(mySelect);
	};
});
