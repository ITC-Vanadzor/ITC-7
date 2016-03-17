//var app = angular.module("myApp", []);

app.controller('ChatsCtrl', function($scope,Service) {
	console.log("Chat");
        //Service.showUsers();
        $scope.array = Service.objArray;
        console.log(Service.objArray[0]);
        $scope.showUsers = function() {
		for(x in Service.objArray) {
			Service.usersArray[x]=Service.objArray[x].name;
		}
	};
	
});

