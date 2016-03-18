myApp.controller('profileController',function($scope,dataService){
    $scope.profile = function(){
        for(i in dataService.users){
            if($scope.name == dataService.users[i].name && $scope.surname == dataService.users[i].surname){
                console.log(dataService.users[i].name);
                console.log(dataService.users[i].surname);
                console.log(dataService.users[i].email);
            }
        }
    }
});
