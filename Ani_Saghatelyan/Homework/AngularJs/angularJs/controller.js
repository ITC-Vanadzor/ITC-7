	var app=angular.module("app",[]);
	app.controller.usageController= function($scope){
	$scope.progressSteps=function(step, Circle, idStep) {
		$scope.One=false;
		$scope.Two= false;
		$scope.Three=false;
		$scope.step=true;
	
		$scope.thirdCircle={"background": "linear-gradient(to top, #0094F7, #007acc)"}
		$scope.secondCircle={"background": "linear-gradient(to top, #0094F7, #007acc)"}
		$scope.firstCircle={"background": "linear-gradient(to top, #0094F7, #007acc)"}
        
	        $scope.Circle={"background":  "#999999"}
    	
		$scope.thirdProgress={"background": "#bfbfbf"}
    		$scope.secondProgress={"background": "#bfbfbf"}
    		$scope.firstProgress={"background": "#bfbfbf"}
    switch (step) {
        case 'thirdProgress':
               $scope.thirdProgress={"background": "#007acc"};
        case 'secondProgress':
            $scope.secondProgress={"background":"#007acc"};
        case 'firstProgress':
            $scope.firstProgress = {"background": "#007acc"};
    }

}

}
