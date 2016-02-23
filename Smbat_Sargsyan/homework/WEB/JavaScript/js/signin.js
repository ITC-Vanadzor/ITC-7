/*document.getElementById("Signin").style.display = "block";
document.getElementById("registration").style.display = "none";
document.getElementById("forgot").style.display = "none";
document.getElementById("profile").style.display = "none";*/
function clicked() {
	/*document.getElementById("Signin").style.display = "block";
	document.getElementById("registration").style.display = "none";
	document.getElementById("forgot").style.display = "none";
	document.getElementById("profile").style.display = "none"; */
	var mail = document.getElementById('mail');
	var pass = document.getElementById('pass');

	var usermail = "sargsyanyan@mail.ru";
	var userpass = "123456";

	if(mail.value == usermail) {
		if(pass.value == userpass) {
			window.alert("you are log in as " + mail.value);
			document.getElementById("Signin").style.display = "none";
			document.getElementById("registration").style.display = "none";	
			document.getElementById("forgot").style.display = "none";	
			document.getElementById("profile").style.display = "block";
	}
	}
		
	else if(mail.value == usermail) {
		if(pass.value != userpass) {
		window.alert("forgot password");
		document.getElementById("Signin").style.display = "none";
		document.getElementById("forgot").style.display = "block";
		document.getElementById("registration").style.display = "none";
		document.getElementById("profile").style.display = "none"
	}
	}
	else {
                window.alert("incorrect mail orpassword,try again");
                document.getElementById("Signin").style.display = "none";
                document.getElementById("forgot").style.display = "block";
                document.getElementById("registration").style.display = "none";
                document.getElementById("profile").style.display = "none";
        }

}
