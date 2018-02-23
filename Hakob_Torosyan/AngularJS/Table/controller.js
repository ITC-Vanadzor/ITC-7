
myApp.controller('formCtrl', function($scope) {

  $scope.user = {};
  $scope.data = [];
  
  $scope.registration =function() {
  $scope.data.push($scope.user);
  $scope.user = {};
}


});
