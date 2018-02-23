db=[{name:'Star',date:'12.01.2016',time:'12:01',money:'5000',note:'empty'},
	{name:'City',date:'03.05.2015',time:'12:17',money:'450',note:'empty'},
	{name:'Mars',date:'15.07.2016',time:'11:45',money:'3000',note:'empty'},
	{name:'Neptun',date:'12.01.2016',time:'12:45',money:'5000',note:'empty'},
	{name:'Moon',date:'11.06.2016',time:'10:20',money:'120',note:'empty'},
]


var app = angular.module('myApp', []);
app.controller('myCtrl', function($scope) {
    $scope.myarr=db;
});