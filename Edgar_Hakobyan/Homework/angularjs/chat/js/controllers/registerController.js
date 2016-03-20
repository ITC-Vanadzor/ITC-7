myApp.controller('registerController',function($scope,dataService){
    $scope.register = function(){
        var x = 0;
        for(i in dataService.users){
            if($scope.Email == dataService.users[i].email){
                x = -1;
                break;
            }
        }
        if(x == 0){
            dataService.users.push({'name':$scope.Name,'surname':$scope.Surname,'email':$scope.Email,'password':$scope.Password,'message':[]});
            alert("you are registered");
            console.log(dataService.users);
        }else{
            alert("such email is already registered");
        }
    };
});
