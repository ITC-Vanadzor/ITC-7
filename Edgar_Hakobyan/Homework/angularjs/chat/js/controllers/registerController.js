myApp.controller('registerController',function($scope,dataService){
    $scope.register = function(){
        console.log("register");
        dataService.users.push({'name':$scope.Name,'surname':$scope.Surname,'message':{}});
        console.log(dataService.users);
    };
});
