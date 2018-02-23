var app=angular.module("myApp", []);

app.service('users', function() {
     this.usersArr = [];
      this.put = function(name, email, password) {
	 
	 this.usersArr.push({name: name, email: email, password: password});
	    console.log(this.usersArr[0].email);
      }
       this.get = function(name) {
	   console.log("test");
	        for( x in this.usersArr){
		    if (x.name === name) {
	              console.log(x.email) ;
                   }
	       }
     }

});


