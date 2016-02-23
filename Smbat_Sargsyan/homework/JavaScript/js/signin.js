document.getElementById("Signin").style.visibility = "show";
document.getElementById("registration").style.visibility = "hidden";	
document.getElementById("forgot").style.visibility = "hidden";	
document.getElementById("profile").style.visibility = "hodden";
alert("Hi");
function clicked() {
	var mail = document.getElementById('mail');
	var pass = document.getElementById('pass');

	var usermail = "sargsyanyan@mail.ru";
	var userpass = "123456";

	if(mail.value == usermail) {
		if(pass.value == userpass) {
			window.alert("you are log in as " + mail.value);
			document.getElementById("Signin").style.visibility = "hidden";
			document.getElementById("registration").style.visibility = "hidden";	
			document.getElementById("forgot").style.visibility = "hidden";	
			document.getElementById("profile").style.visibility = "show";
		}
		else {
			window.alert("incorrect mail or password");
		}
	}
	else {
		window.alert("incorrect mail orpassword,try again");
		document.getElementById("Signin").style.visibility = "show"
		document.getElementById("forgot").style.visibility = "hidden";
		document.getElementById("registration").style.visibility = "hidden";
		document.getElementById("profile").style.visibility = "hidden";
	}
	if(mail.value == usermail && pass.value != userpass) {
		window.alert("forgot password");
		document.getElementById("Signin").style.visibility = "hidden"
		document.getElementById("forgot").style.visibility = "show";
		document.getElementById("registration").style.visibility = "hidden";

	}
}
