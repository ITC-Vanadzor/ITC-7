

function showDiv(divId){

  document.getElementById("forgotPassDiv").style.display="none";
  document.getElementById("signInDiv").style.display="none";
  document.getElementById("signUpDiv").style.display="none";
	
  document.getElementById(divId).style.display="block";
}

function progressSteps(idProgress,idCircle, idStep){

	document.getElementById("thirdStep").style.display="none";
 	document.getElementById("secondStep").style.display="none";
  	document.getElementById("firstStep").style.display="none";
	
	  document.getElementById(idStep).style.display="block";

	 
         document.getElementById("thirdCircle").style.background="linear-gradient(to top, #0094F7, #007acc)";
  	 document.getElementById("secondCircle").style.background="linear-gradient(to top, #0094F7, #007acc)";	
  	 document.getElementById("firstCircle").style.background="linear-gradient(to top, #0094F7, #007acc)";
	 document.getElementById(idCircle).style.background="#faaa80";
	
	 document.getElementById("thirdProgress").style.background="#bfbfbf";
  	 document.getElementById("secondProgress").style.background="#bfbfbf";		
  	 document.getElementById("firstProgress").style.background="#bfbfbf";

	 switch(idProgress){
		 case 'thirdProgress':	document.getElementById("thirdProgress").style.background="#007acc";
  	 	 case 'secondProgress':	document.getElementById("secondProgress").style.background="#007acc";		
  	 	 case 'firstProgress':	document.getElementById("firstProgress").style.background="#007acc";
		}
	
//  document.getElementById(divId).style.display="block";
}

