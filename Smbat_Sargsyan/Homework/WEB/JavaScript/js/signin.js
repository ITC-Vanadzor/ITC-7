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
<<<<<<< HEAD
	var mail = document.getElementById('mail');
	var pass = document.getElementById('pass');


     for(i=0;i<objPeople.length;i++) {
	if(mail.value == objPeople[i].usermail && pass.value == objPeople[i].userpass) {
=======
      if (document.getElementById('Signin')) {
            location.reload(false)
     }
     var mail = document.getElementById('mail');
     var pass = document.getElementById('pass');
     for(i=0;i<objPeople.length;i++) {
	     if(mail.value == objPeople[i].usermail && pass.value == objPeople[i].userpass) {
>>>>>>> 186541bc52e913c61fa99b6a5c430fe3bd74fd25
			window.alert("you are log in as " + mail.value);
			document.getElementById("Signin").style.display = "none";
			document.getElementById("profile").style.display = "block";
			return;
		
<<<<<<< HEAD
                window.alert("incorrect mail or password,try again");
		document.getElementById("forgot").style.display = "block";
=======
	     }
     }
     window.alert("incorrect mail orpassword,try again");
     document.getElementById("forgot").style.display = "block";
>>>>>>> 186541bc52e913c61fa99b6a5c430fe3bd74fd25
}
