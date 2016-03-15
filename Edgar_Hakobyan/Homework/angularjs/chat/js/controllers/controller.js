var chat = angular.module("chat",[]);
chat.controller('chatController',function($scope){
	$scope.list=[];
    $scope.register = function(){
		console.log("register");
		$scope.list.push({'name':$scope.Name,'surname':$scope.Surname,'message':{}});
		console.log($scope.list);
	}
	$scope.newMessage = function() {
	console.log("message");
	if($scope.recipientName === $scope.list[1].name) {
		$scope.list.push({'name':$scope.recipientName,'surname':$scope.Surname,'message':{
				'senderName':$scope.senderName,
				'senderSurname':$scope.senderSurname,
				'message':$scope.message
				}
		});
	}else{
		console.log('errroo');
	}	
	}
});
