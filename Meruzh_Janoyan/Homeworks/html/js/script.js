

function showDiv(divname){

  document.getElementById("forgotPassDiv").style.display="none";
  document.getElementById("signInDiv").style.display="none";
  document.getElementById("signUpDiv").style.display="none";

  if(divname==1){
    document.getElementById("forgotPassDiv").style.display="block";
  }
  else if(divname==2){
    document.getElementById("signUpDiv").style.display="block";
    document.getElementById("signUpLink").style.display="none";
  }
  else if(divname==3){
    document.getElementById("signInDiv").style.display="block";
  }

}