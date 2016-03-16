
app.controller("chatCntrl", function($scope, users) {
	$scope.usersList = users.usersArr;
	console.log(users.usersArr[0]);
});
