var app = angular.module("myApp", []); 

//users service
app.service("users", function() {
		  this.usersArr = [];

		  this.put = function (name, email, password) {
					 this.usersArr.push({name: name, email: email, password: password});
					 //console.log(this.usersArr[0]);
		  }

		  this.get = function(name) {
					 for (x in this.usersArr) {
								if (x.name === name) {
										  console.log(x.name);
								}
					 }
		  }
});


//menubar directive
app.directive("menu", function() {
	return {
		restrict: 'E',
		templete: '<button id="menubar">{{menuname}}</button>',
	}
});


