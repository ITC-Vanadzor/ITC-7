countClick = 0;
window.fbAsyncInit = function() {
    FB.init({
	appId      : '1573877892928843',
	xfbml      : true,
	version    : 'v2.5'
    });
};

(function(d, s, id){
    var js, fjs = d.getElementsByTagName(s)[0];
    if (d.getElementById(id)) {
	return;
    }
    js = d.createElement(s); js.id = id;
    js.src = "//connect.facebook.net/en_US/sdk.js";
    fjs.parentNode.insertBefore(js, fjs);
 }(document, 'script', 'facebook-jssdk'));

function choice() { 
    if (countClick == 0) {
	login();
    } else {
	loadFriendList();
    }
}

function login() {
    countClick=1;
    FB.login(function(response) {
	    if (response.status === 'connected') {
		alert("Connected");
		FB.api('me', 'GET' ,function(response){
		    if (response && !response.error) {
			var userInfo = document.getElementById('info');
			FB.api('/me', function(response) {
			document.getElementsByClassName('withGoogle')[0].style.visibility = 'hidden';
			userInfo.innerHTML = '<img src="https://graph.facebook.com/' + response.id + '/picture">' + response.name;
			document.getElementById("login").innerHTML="Get Friends List";
			});
		    }
		});
	    }
    }, {scope: 'email, user_friends'});
}

function loadFriendList(){
window.location="FriendsList.html";
}
