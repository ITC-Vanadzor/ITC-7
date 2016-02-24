window.fbAsyncInit = function() {
    FB.init({
	appId      : '1573877892928843',
	xfbml      : true,
	version    : 'v2.5'
});

    FB.getLoginStatus(function(response) {
	if (response.status === 'connected') {

	document.getElementById('login').style.visibility = 'hidden';
	}
	});
};

(function(d, s, id){
    var js, fjs = d.getElementsByTagName(s)[0];
    if (d.getElementById(id)) {return;}
    js = d.createElement(s); js.id = id;
    js.src = "//connect.facebook.net/en_US/sdk.js";
    fjs.parentNode.insertBefore(js, fjs);
 }(document, 'script', 'facebook-jssdk'));

// login with facebook with extra permissions
function login() {
    FB.login(function(response) {
	    if (response.status === 'connected') {
	        document.getElementById('login').style.visibility = 'hidden';
	    }
	    }, {scope: 'email'});
}

// getting basic user info
function getInfo() {
    FB.api('/me', 'GET', {fields: 'first_name,last_name,name,id'}, function(response) {
	    document.getElementById('status').innerHTML = response.id;
	    });
}
