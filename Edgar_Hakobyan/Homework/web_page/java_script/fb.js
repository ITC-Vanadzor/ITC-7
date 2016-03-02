window.fbAsyncInit = function() {
    FB.init({
	appId      : '1078116522227107',
	xfbml      : true,
	version    : 'v2.5'
    });
};

(function(d, s, id){
    var js, fjs = d.getElementsByTagName(s)[0];
    if (d.getElementById(id)) {return;}
    js = d.createElement(s); js.id = id;
    js.src = "//connect.facebook.net/en_US/sdk.js";
    fjs.parentNode.insertBefore(js, fjs);
 }(document, 'script', 'facebook-jssdk'));

function login() {
    FB.login(function(response) {
	    if (response.status === 'connected') {
	    window.location="friendsPage.html"
	     }
    }, {scope: 'email,user_friends'});

function getInfo() {
    FB.api('/me', 'GET', {fields: 'first_name,last_name,name,id'}, function(response) {
	    document.getElementById('status').innerHTML = response.id;
	    });
}
}
