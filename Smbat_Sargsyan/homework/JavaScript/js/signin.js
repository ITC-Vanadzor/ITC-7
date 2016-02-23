function clicked() {
	var mail = document.getElementById('mail');
	var pass = document.getElementById('pass');

	var usermail = "sargsyanyan@mail.ru"
	var userpass = "123456"

	if(mail.value == usermail) {
		if(pass.value == userpass) {
			window.alert("you are log in as" + mail.value);
		}
		else {
			window.alert("incorrect mail orpassword");
			window.open("profile.html");
		}
	}
	else {
		window.alert("incorrect mail orpassword,try again");
		window.open("signin.html");

	}
	if(mail.value == usermail && pass.value != userpass) {
		window.alert("forgot password");
		window.open("forgotPassword.html");
}	}
