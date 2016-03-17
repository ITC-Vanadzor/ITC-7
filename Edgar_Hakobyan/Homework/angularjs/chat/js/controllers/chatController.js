app.controller('chatController',function($scope,dataService){
    $scope.newMessage = function(){
        console.log(dataService.users);
//        dataService.list.push({'name':$scope.Name,'surname':$scope.Surname,'message':{}});
  //      console.log(dataService.list);
    };
});
