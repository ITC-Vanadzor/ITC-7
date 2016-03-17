var myApp = angular.module("myApp",["ngRoute"]).config(function($routeProvider){
    $routeProvider.when('/registration',{
        templateUrl:'views/registration.html',
        controller:'registerController'
    });
    $routeProvider.when('/chat',{
        templateUrl:'views/chat.html',
        controller:'chatController'
    });
    $routeProvider.when('/profile',{
        templateUrl:'views/profile.html',
        controller:'profileController'
    });
});
myApp.factory('dataService',function(){
    this.users=[];
    return this;
});
