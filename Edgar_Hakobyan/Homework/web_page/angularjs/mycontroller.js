var myApp=angular.module("myApp",[]);
myApp.controller('nameController',function($scope){
	$scope.model = ["name","surname","day"];
	$scope.list=[];
	$scope.sort = 'aaaa';
	$scope.addItem = function(){
		$scope.list.push({'name':$scope.name,'surname':$scope.surname,'day':$scope.day});
	};
//	$scope.search = function() {
//	$scope.searchlist = [];
//	$scope.i=0;
//	while($scope.i < $scope.list.length){
//		if($scope.list[i].name === $scope.eventModel){
//			$scope.list.push({'name':$scope.list[i].name,'surname':$scope.list[i].surname,'day':$scope.list[i].day});
//		}else{
//	 		$scope.list.push({'surname':$scope.list.name});
//		}
//	$scope.i = $scope.i + 1;
//	}
});
