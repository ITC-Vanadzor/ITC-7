var objPeople = [
    {
	usermail: "sargsyanyan@mail.ru",
	userpass: "123456"
    },
    {
	usermail: "dddd",
	userpass: "5555"
     },
     {
	usermail: "zzzz",
	userpass: "8888"
      }
]
function clicked() {
	var mail = document.getElementById('mail');
	var pass = document.getElementById('pass');

     for(i=0;i<objPeople.length;i++) {
	if(mail.value == objPeople[i].usermail) {
		if(pass.value == objPeople[i].userpass) {
			window.alert("you are log in as " + mail.value);
			document.getElementById("Signin").style.display = "none";
			document.getElementById("registration").style.display = "none";	
			document.getElementById("forgot").style.display = "none";	
			document.getElementById("profile").style.display = "block";
			return;
		}
	}
		
      }
                window.alert("incorrect mail orpassword,try again");
                document.getElementById("Signin").style.display = "none";
                document.getElementById("forgot").style.display = "block";
                document.getElementById("registration").style.display = "none";
                document.getElementById("profile").style.display = "none";
}
