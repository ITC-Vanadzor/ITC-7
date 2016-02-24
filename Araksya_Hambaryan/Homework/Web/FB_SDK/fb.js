(function(d, s, id) {
      var js, fjs = d.getElementsByTagName(s)[0];
        if (d.getElementById(id)) return;
	  js = d.createElement(s); js.id = id;
	    js.src = "//connect.facebook.net/ru_RU/sdk.js#xfbml=1&version=v2.5&appId=1573877892928843";
	      fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));

function loginUser() {    
    FB.login(function(response) {

	    if (response.authResponse) {
	    console.log('Welcome!  Fetching your information.... ');
	    //console.log(response); // dump complete info
	    access_token = response.authResponse.accessToken; //get access token
	    user_id = response.authResponse.userID; //get FB UID

	    FB.api('/me', function(response) {
		user_email = response.email; //get user email
		// you can store this data into your database             
		});

	    } else {
	    //user hit cancel button
	    console.log('User cancelled login or did not fully authorize.');

	    }
	    }, {
scope: 'publish_stream,email'
});
    /*FB.login(
	    function(response) {
	    getStatus(); //This is a call to a different function...
	    }, 
	    {scope:'user_likes, offline_access'}
	    );   */  
}

