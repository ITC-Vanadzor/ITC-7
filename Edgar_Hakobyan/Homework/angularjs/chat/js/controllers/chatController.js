myApp.controller('chatController',function($scope,dataService){
    $scope.model=[];
    for (k in dataService.users){
        $scope.model.push(dataService.users[k].name+' '+dataService.users[k].surname);
    }
    $scope.sendMessage = function(){
        var recmodel='';
        for (k in dataService.users){
            recmodel = dataService.users[k].name+' '+dataService.users[k].surname;
            if($scope.recipient == recmodel){
                dataService.users[k].message.push({sender:$scope.sender,message:$scope.message});
                console.log(dataService.users);
                break;
            }
        }
    }
});
