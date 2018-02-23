myApp.controller('formCtrl', function($scope, factory) {

$scope.signUp =function() 
{
	factory.registration();
}
$scope.showUsers = function()
{
	factory.show();
}

});
