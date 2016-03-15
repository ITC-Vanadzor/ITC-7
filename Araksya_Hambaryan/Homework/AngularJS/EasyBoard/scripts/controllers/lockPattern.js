//incorrect

appEasyBoard.controller("lockPattern", function($scope, $sce) {
    $scope.data = {
    cx : [80, 180, 280],
    cy : [50, 150, 250],
    r : 7,
    color : "#0F608C"
};
    var svg = document.getElementsByTagName("svg");
    var counter = 0;
    for (i in $scope.data.cy) {
	if (counter < 3) {
	    var template = '<circle ' + 'cy = "' + $scope.data.cy[i] + '" r = "' + $scope.data.r + '" stroke = "' + $scope.data.color + '" fill = "' + $scope.data.color+'"';

	    for (j in $scope.data.cx) {
		var tmp = template;
		template = template + ' cx = "' + $scope.data.cx[j] + '"/>';
		$scope.myHTML=template;
		angular.element(svg.append( $scope.myHTML));
		template = tmp;
	    };
	    template = '';
	    counter++;
	} else {
	counter = 0;
	};
    }
});
