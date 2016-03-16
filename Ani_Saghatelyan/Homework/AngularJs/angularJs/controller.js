	var app=angular.module("app",[]);
	app.controller('usageController', function($scope) {
	// function, which dynamicly  show steps	
	$scope.showDiv=function(num){
		var colorProgress={"background":"#007acc"};
		var blueButton={"background":"linear-gradient(to top, #0094F7, #007acc)"};
		var grayProgress={"background":"#bfbfbf"};
		var hideDiv=false;
		// at first hides all divs,colors steps blue,progress gray
		   $scope.div=[hideDiv,hideDiv,hideDiv];
		   $scope.buttonStep=[blueButton,blueButton,blueButton];
		   $scope.progress=[grayProgress,grayProgress,grayProgress];
	       // changes the  color of step gray and shows div		
		   $scope.div[num]=true;
		   $scope.buttonStep[num]={"background":"#999999"};
		// for correspond step shows progress
	switch(num){
		case 2: $scope.progress[2]=colorProgress;
		case 1: $scope.progress[1]=colorProgress;
		case 0: $scope.progress[0]=colorProgress;
	}
		
  }

	$scope.progressArray=[[{progress:"progress[0]", buttonStep:"buttonStep[0]",showDiv:"showDiv[0]"},[{progress:"progress[1]", buttonStep:"buttonStep[1]",showDiv:"showDiv[2]"},{progress:"progress[2]", buttonStep:"buttonStep[1]",showDiv:"showDiv[2]"},]
	$scope.showArray=[ {div:"div[0]", text:"It is that text, which will tell us about the  first step to do for using our fascinating application:))))", src: "../res/1step.png"},
			   {div:"div[1]", text:"It is that text, which will tell us about the  second step to do for using our fascinating application:))))", src: "../res/2step.png"}, 
			   {div:"div[2]", text:"It is that text, which will tell us about the  third step to do for using our fascinating application:))))", src: "../res/3step.png"},];
	$scope.showDiv(1);
});
