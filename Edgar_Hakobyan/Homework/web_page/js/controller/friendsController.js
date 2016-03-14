var myApp=angular.module('myApp');
myApp.controller('friendsController',function($scope) {
	$scope.friends = [{	
		image: '../resource/anna.png',
		name: 'Anna Meliqyan',
		icon: '../resource/face.png'
	},{
		image: '../resource/aren.png',
        name: 'Aren Aren',
        icon: '../resource/face.png'
	},{
		image: '../resource/ashot.png',
        name: 'Ashot Avetyan',
        icon: '../resource/face.png'
	},{
		image: '../resource/mariam.png',
        name: 'Mariam Avetyan',
        icon: '../resource/face.png'
	},{
		image: '../resource/sargis.png',
        name: 'Sargis Sargsyan',
        icon: '../resource/face.png'
	}]
});
