app.controller('controller',function($scope){
    $scope.data={};
    $scope.setPage = function(){
        if($scope.data.mode == 'registration'){
            return 'src/registration.html';
        }else if ($scope.data.mode == 'chat'){
            return 'src/chat.html'
        }
    };
    $scope.modes = [{
        value:'registration'
    },{
        value:'chat'
    }];
});
