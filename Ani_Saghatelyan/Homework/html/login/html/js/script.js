

function showDiv(divId){

  document.getElementById("forgotPassDiv").style.display="none";
  document.getElementById("signInDiv").style.display="none";
  document.getElementById("signUpDiv").style.display="none";
	
  document.getElementById(divId).style.display="block";
}
// array, where will be saved all datas of user
user= [];

//function which adds all datas from registration into array. Array contains objects with 3 elements
function addToArray(){
	 for(i=0; i<user.length; ++i){
		if (user[i].email===document.getElementById("addEmail").value){
			alert(" The email is used. Please enter another email");	
			return;
                 }
      }	
        user.push({"name":document.getElementById("addName").value , "email":document.getElementById("addEmail").value, "password":document.getElementById("addPassword").value});
        console.log(user);
}



// function, which will compare the sign in inputs with array values
function ComparingSignIn(){

   myUser={"email":document.getElementById("signInEmail").value, "password":document.getElementById("signInPassword").value};
    console.log(myUser);
	for(i=0; i<user.length; ++i){		
		if (user[i].email===object.email && user[i].password===object.password){
			alert("true");	
			return;
                 }
      }
    showDiv('forgotPassDiv');
}


