var myApp = angular.module('myApp',[]);

myApp.factory('factory', function() {

  this.data = [];
  this.user = {};
this.registration = function() 
{
	if(this.data.length)
	{
		for (var x in this.data)
		{
			if(x == this.user.username)
			{
				alert('You are already signed up with this username. please start the chat');
				return;
			}
	  	}
	}
	this.data.push(this.user);
	this.user = {};
	alert('congratulation. you are signed up. please start the chat')
}

this.show = function()
{
	alert('--------------------');
	if(this.data.length)
	{
		for(var i in this.data)
		{
			console.log(i);
		}
	}
}

return this;
});
