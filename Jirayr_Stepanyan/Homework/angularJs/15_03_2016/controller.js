myApp.controller('formCtrl', function($scope) {

  $scope.data = [];
  $scope.user = '';
$scope.registration =function() 
{
	for (var x in $scope.data)
	{
		alert('--------------------');
		if(x == $scope.user)
		{
			alert('You are already signed up');
		}
		else
		{
			$scope.data.push($scope.user);
  			$scope.user = '';
  		}
  	}
}


});
