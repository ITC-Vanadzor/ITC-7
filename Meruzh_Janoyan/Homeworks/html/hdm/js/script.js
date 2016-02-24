
function showDiv(divId) {

    document.getElementById("forgotPassDiv").style.display = "none";
    document.getElementById("signInDiv").style.display = "none";
    document.getElementById("signUpDiv").style.display = "none";

    if (typeof divId === 'undefined') {
        divId = location.href.match('[?]..(.+?)$');
        if (divId) {
            divId = divId[1];
        }
    }

    if (!divId) {
        divId = 'signInDiv';
    }

    switch (divId) {
        case 'signUpDiv':
            document.title = "Create account";
            break;
        case 'forgotPassDiv':
            document.title = "Forgot password";
            break;
        default:
            document.title = "Sign In to HDM";
            divId='signInDiv';
            if(signIn()) {return;}
            
    }
    document.getElementById(divId).style.display = "block";
}



function signIn(){
  
    var email=location.href.match('email=(.+?)&');
    var pass=location.href.match('password=(.+?)#');
    
    
    if(email && pass){
      if(email[1]=="Janoyan" && pass[1]=="student"){
        location.href='index.html';
        return 1;
      }
    }
    
    return 0;

}



