	var app=angular.module("app",[]);
	app.controller('usageController', function($scope) {

	$scope.showDiv=function(num){
			$scope.div1=false;
 			$scope.div2=false;
			$scope.div3=false;
			$scope.buttonStep1={"background":"linear-gradient(to top, #0094F7, #007acc)"};
			$scope.buttonStep2={"background":"linear-gradient(to top, #0094F7, #007acc)"};
			$scope.buttonStep3={"background":"linear-gradient(to top, #0094F7, #007acc)"};
			$scope.progress1={"background":"#bfbfbf"};
			$scope.progress2={"background":"#bfbfbf"};
			$scope.progress3={"background":"#bfbfbf"};
	switch(num){
		case 1: 
			$scope.div1=true;
			$scope.buttonStep1={"background":"#999999"};
			break;
		case 2:
      		        $scope.div2=true;
			$scope.buttonStep2={"background":"#999999"};
			break;
		case 3: 
			$scope.div3=true;
			$scope.buttonStep3={"background":"#999999"};
			break;
	}
	switch(num){
		case 3: $scope.progress3={"background":"#007acc"};
		case 2: $scope.progress2={"background":"#007acc"};
		case 1: $scope.progress1={"background":"#007acc"};
	}
		
  }
	$scope.showDiv(1);
});
