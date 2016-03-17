var myApp = angular.module('myApp',[]);

myApp.service('data', function() {
    this.users = [];
    this.chats = [];
    this.pages = {
	reg : {	ctrl: "formCtrl", url : "src/registracion.html"},
	chat : {ctrl: "chatCtrl", url : "src/chats.html"},
	profile : {ctrl: "profileCtrl",	url: "src/profile.html"}
	};
    
});
