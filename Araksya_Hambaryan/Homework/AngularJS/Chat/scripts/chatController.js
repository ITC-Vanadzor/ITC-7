myApp.controller('chatCtrl', function($scope, $location, data) {
	$scope.signedInAs=data.signedInAs;
	$scope.showtable=false;
	$scope.chat = {};
	$scope.tmpChat = data.chats;
	$scope.toUser=data.users.toUser;
    $scope.allUsers= data.users;
    
    
    $scope.chreateMessageJSON=function(obj){
    	$scope.chat.fromUser = $scope.signedInAs;
    	$scope.chat.toUser=obj.name;
    	$scope.chat.currentDate = new Date();
    }
    
    
    
    $scope.sendMessage =function() {
    	if ($scope.chat.message){
    		$scope.chreateMessageJSON($scope.tmpSelectUser);
        	data.chats.push($scope.chat);
        	$scope.chat = {};
			
			
  	  	} else {
    		alert("Please enter message");
      	};
    };
    
    
    $scope.choiceUser=function(tmpUserProfile){
		data.profileUser=tmpUserProfile;
		$location.path('/profile');
	}
	
	$scope.logout=function(){
		data.profileUser="";
		data.signedInAs="";
		$location.path('/');
	}
});
