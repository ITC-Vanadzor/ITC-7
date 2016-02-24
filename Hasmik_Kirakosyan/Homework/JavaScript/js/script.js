var jsonArr={"userData":[
		{"userEmail":"hasmikus@gmail.com","password":"passwordMine"},
      {"userEmail":"anisaghatelyan@mail.ru", "password": "Anispassword"},
      {"userEmail":"smbatsargsyan@mail.ru", "password": "Smbatspassword"}
]}

function showDiv(divId){

		  document.getElementById("forgotPassDiv").style.display="none";
		  document.getElementById("signInDiv").style.display="none";
		  document.getElementById("signUpDiv").style.display="none";

		  document.getElementById(divId).style.display="block";
}

// Check login email password

function signInSite () {

		  for (var i = 0; i < jsonArr.userData.length; i++) {
					 if(((jsonArr.userData[i].userEmail == document.getElementById("emailLogin").value) 
													 &&	  (jsonArr.userData[i].password != document.getElementById("passLogin"))) ||
										  ((jsonArr.userData[i].userEmail != document.getElementById("emailLogin").value) 
											&&	  (jsonArr.userData[i].password == document.getElementById("passLogin"))) ) {
								alert("Wrong login or password");
								showDiv("forgotPassDiv");
					 }
		  }

}

// Check registration email

function  signUp() {
		  for (var i = 0; i < jsonArr.userData.length; i++) {
					 if(jsonArr.userData[i].userEmail == document.getElementById("emailReg").value) {
								document.getElementById("validateEmail").style.color="red";
								document.getElementById("validateEmail").innerHTML="There is a user  already with this email address. Try another";
								t = true;	
					 }						  						 
		  };


		  if(t) {
					 jsonArr['userData'].push({"userEmail":document.getElementById("email").value,"password":document.getElementById("password").value});
					 jsonArr = JSON.stringify(obj);
		  }

}

// Send email to reset password in forgot password page
function sendMail() {
		      var link = "mailto:"+ document.getElementById("emailTo")
							+ "&subject=" + escape("Reset password")
			            + "&body=Hi,\n please reset enter new email";

				window.location.href = link;
}

