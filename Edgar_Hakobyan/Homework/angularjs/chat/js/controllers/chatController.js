myApp.controller('chatController',function($scope,dataService){
    $scope.newMessage = function(){
        console.log(dataService.users);
        console.log($scope.recipientName);
        console.log(dataService.users[0].name);
        for (i in dataService.users){
            console.log(dataService.users[i].name);
            if($scope.recipientName == dataService.users[i].name) {
                console.log(i);
                dataService.users.push({name:$scope.senderName,surname:$scope.senderSurname,message:$scope.message});
            }
        }
        console.log(dataService.users);
    };
});
