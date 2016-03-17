myApp.controller('chatController',function($scope,dataService){
    $scope.newMessage = function(){
        console.log(dataService.users);
        var sUser = 0;
        var rUser = 0;
        for (i in dataService.users){
            console.log(dataService.users[i].name);
            if($scope.senderName == dataService.users[i].name && $scope.senderSurname == dataService.users[i].surname){
                sUser = 1;
                for(j in dataService.users){
                    if($scope.recipientName == dataService.users[j].name && $scope.recipientSurname == dataService.users[j].surname){
                        rUser = 1;
                        break;
                    }
                }
            }
        }
        if(sUser == 1 && rUser == 1){
            dataService.users[j].message.push({sendersName:$scope.senderName,sendersSurname:$scope.senderSurname,message:$scope.message});
            alert("Your message is sent");
        }else if (sUser == 0){
            alert("there is no such user");
        }else{
            alert("you are not registered");
        }
    };
    console.log(dataService.users);
});
