	var app=angular.module("app",[]);
	app.controller('usageController', function($scope) {

	$scope.showDiv=function(num){
		   $scope.div=[false,false,false];
		   $scope.buttonStep=[{"background":"linear-gradient(to top, #0094F7, #007acc)"},
		   				  {"background":"linear-gradient(to top, #0094F7, #007acc)"},
		   				  {"background":"linear-gradient(to top, #0094F7, #007acc)"}];
		   $scope.progress=[{"background":"#bfbfbf"},{"background":"#bfbfbf"},{"background":"#bfbfbf"}];

		   $scope.div[num]=true;
		   $scope.buttonStep[num]={"background":"#999999"};
		 
			// $scope.div1=false;
 		// 	$scope.div2=false;
			// $scope.div3=false;
			// $scope.buttonStep1={"background":"linear-gradient(to top, #0094F7, #007acc)"};
			// $scope.buttonStep2={"background":"linear-gradient(to top, #0094F7, #007acc)"};
			// $scope.buttonStep3={"background":"linear-gradient(to top, #0094F7, #007acc)"};
			// $scope.progress1={"background":"#bfbfbf"};
			// $scope.progress2={"background":"#bfbfbf"};
			// $scope.progress3={"background":"#bfbfbf"};
	// switch(num){
	// 	case 1: 
	// 		$scope.div1=true;
	// 		$scope.buttonStep1={"background":"#999999"};
	// 		break;
	// 	case 2:
 //      		        $scope.div2=true;
	// 		$scope.buttonStep2={"background":"#999999"};
	// 		break;
	// 	case 3: 
	// 		$scope.div3=true;
	// 		$scope.buttonStep3={"background":"#999999"};
	// 		break;
	// }
	switch(num){
		case 2: $scope.progress[2]={"background":"#007acc"};
		case 1: $scope.progress[1]={"background":"#007acc"};
		case 0: $scope.progress[0]={"background":"#007acc"};
	}
		
  }
	$scope.showDiv(1);
});
