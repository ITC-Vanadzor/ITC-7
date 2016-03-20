myApp.controller('profileController',function($scope,dataService){
    $scope.profileModel=[];
    for (i in dataService.users){
        $scope.profileModel.push(dataService.users[i].name+' '+dataService.users[i].surname);
    }
    $scope.profileClick = function(){
        var user='';
        for (k in dataService.users){
            user = dataService.users[k].name+' '+dataService.users[k].surname;
            if(user == $scope.profile && $scope.profilePassword == dataService.users[k].password){
                console.log(dataService.users[k].message);
                break;
            }else{
                console.log('false password');
            }
        }
    }
});
