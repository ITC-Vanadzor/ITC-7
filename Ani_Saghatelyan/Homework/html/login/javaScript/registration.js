
 user= [];
//function which adds all datas from registration into array. Array contains objects with 3 elements
function addToArray(){
        user.push({"name":document.getElementById("addName").value , "email":document.getElementById("addEmail").value, "password":document.getElementById("addPassword").value});
        console.log(user);
       
}
// function, which shows create account and hides sign in div
function ShowHideSignInCreateAccount(){

	document.getElementById("hideSignIn").remove('show');
        document.getElementBtId("showForgotPassword").style.display="block";
}
// function, which will compare the sign in inputs with array values
function ComparingSignIn(){

    object={"name":document.getElementById("signInEmail"), "password":document.getElementById("signInPAssword")};
    console.log(object); 
      for(i=0; i<user.length; ++i){
		if (user[i]===object){
			return true;
                 }
      }
    alert("Wrong email or password!!!"); 
}

//
