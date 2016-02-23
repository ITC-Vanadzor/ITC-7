var regButton = document.getElementById('SignUp');
regButton = function () {
   	  var jsonArr = '{"userData":[{"userEmail":"mailExample@gmail.com","password":"passwordExample"}]}';

			
		  var obj = JSON.parse(jsonArr);
		  /*for (var i = 0; i < obj.userData.length; i++) {
					     if(obj.userData[i].userEmail == document.getElementById("email").value) {
									   document.getElementById("validateEmail").color=red;
										document.getElementById("validateEmail").innerHTML="There is a user  already with this email address. Try another";
										alert("hi");
							}
						  else {
									 alert("Goodbye");
						  }
		  };*/


		  obj['userData'].push({"userEmail":document.getElementById("email").value,"password":document.getElementById("password").value});
		  jsonArr = JSON.stringify(obj);

		  for (var i = 0; i < obj.userData.length; i++) {
					     console.log( obj.userData[i].userEmail );
		  };

}
