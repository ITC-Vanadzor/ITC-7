//var chat = angular.module("chat",[]);
app.controller('registerController',function($scope,dataService){
    $scope.register = function(){
		console.log("register");
		dataService.users.push({'name':$scope.Name,'surname':$scope.Surname,'message':{}});
		console.log(dataService.users);
	};
//	$scope.newMessage = function() {
//	console.log("message");
//	if($scope.recipientName === $scope.list[1].name) {
//		$scope.list.push({'name':$scope.recipientName,'surname':$scope.Surname,'message':{
//				'senderName':$scope.senderName,
//				'senderSurname':$scope.senderSurname,
//				'message':$scope.message
//				}
//		});
//	}else{
//		console.log('errroo');
//	}	
//	}
});
