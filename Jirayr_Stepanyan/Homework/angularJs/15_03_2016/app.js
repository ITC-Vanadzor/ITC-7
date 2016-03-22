var myApp = angular.module('myApp',[]);

myApp.factory('factory', function() {

  this.data = [];
  this.user = {};
this.registration = function() 
{

		for (var x in this.data)
		{
			console.log(x);
			console.log(this.user);
			if(x == this.user.username)
			{
				alert('You are already signed up with this username. please start the chat');
				return;
			}
	  	}

	this.data.push(this.user);
	this.user = {};
	alert('congratulation. you are signed up. please start the chat')
}

this.show = function()
{
	alert('--------------------');
	console.log(this.data.length);
}

return this;
});
