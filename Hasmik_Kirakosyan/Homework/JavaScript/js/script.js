function showDiv(divId){

		  document.getElementById("forgotPassDiv").style.display="none";
		  document.getElementById("signInDiv").style.display="none";
		  document.getElementById("signUpDiv").style.display="none";

		  document.getElementById(divId).style.display="block";
}

var jsonArr = '';	
var obj = JSON.parse(jsonArr);
var fileContents = System.IO.File.ReadAllLines('jsonArr.txt');


// Check login email password
var signInButton = document.getElementById('signIn');
signInButton = function () {

		  for (var i = 0; i < obj.userData.length; i++) {
					 if(((obj.userData[i].userEmail == document.getElementById("emailLogin").value) 
													 &&	  (obj.userData[i].password != document.getElementById("passLogin"))) ||
										  ((obj.userData[i].userEmail != document.getElementById("emailLogin").value) 
											&&	  (obj.userData[i].password == document.getElementById("passLogin"))) ) {
								alert("Wrong login or password");
								showDiv("signInDiv");
					 }
		  }

}

// Check registration email
var signUpButton = document.getElementById('signUp')		 
signUpButton = function () {
		  for (var i = 0; i < obj.userData.length; i++) {
					 if(obj.userData[i].userEmail == document.getElementById("emailReg").value) {
								document.getElementById("validateEmail").style.color="red";
								document.getElementById("validateEmail").innerHTML="There is a user  already with this email address. Try another";
								t = true;	
					 }						  						 
		  };


		  if(t) {
					 obj['userData'].push({"userEmail":document.getElementById("email").value,"password":document.getElementById("password").value});
					 jsonArr = JSON.stringify(obj);
		  }

}



