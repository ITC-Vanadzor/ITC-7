var app = angular.module('myApp', []);

app.service('Service', function() {
   this.objArray=[];
   this.usersArray=[];
   this.showUsers = function() {
  	for(x in Service.objArray) {
			Service.usersArray[x]=Service.objArray[x].name;
		}
   }
  
});
