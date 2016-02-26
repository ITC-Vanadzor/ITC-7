
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
/*Ani SAghatelyan*/

Datas=[
{dt:"03/25/2015",market:"Sparapet",account:"500"},
{dt:"05/17/2012",market:"Arevik",account:"1800"},
{dt:"01/5/2005",market:"Grin-Plaza",account:"3645"},
{dt:"09/13/2015",market:"Voskya",account:"8500"},
{dt:"06/25/2015",market:"Vega",account:"4530"},
{dt:"11/18/2015",market:"Proshyan",account:"50050"},	
{dt:"01/05/2015",market:"Evrika",account:"50350"},
{dt:"12/13/2015",market:"Smayl",account:"2500"}
	];
         
         num=0;

        var count=function()
	{ 
	 			
		num+=3;
		for( var i=0; i<num && i<Datas.length; ++i)
		{
		        document.getElementById("myTable").rows[i].setAttribute("style","display:''");
		}
	}


			
 
 table=function(){
	   	
  		var myTable = document.getElementById("myTable");
		myTable.setAttribute("style", "width:50% ;display:none; margin:5% 10% 0%; padding:0%;")
	        var header = myTable.createTHead();
		var headerRow = header.insertRow(0);
		var dataDate = headerRow.insertCell(0);
		dataDate.innerHTML="<b>Date</b>";
		var market=headerRow.insertCell(1);
		market.innerHTML="<b>Market<b>";
		var account=headerRow.insertCell(2);
		account.innerHTML="<b>Price</b>";
			for (var i = 0; i < Datas.length; i++) 
	    		{
                   		var row = document.createElement("tr");
				var hdm=Datas[i] 
    				for (obj in hdm) 
				{
      					var cell = document.createElement("td");
      					var cellText = document.createTextNode(hdm[obj]);
      					cell.appendChild(cellText);
      					row.appendChild(cell);
   			 	}
 	
    				myTable.appendChild(row);
  			}
 
  			myTable.setAttribute("border", "2");
			count();
			}				
	
function progressSteps(idProgress,idCircle, idStep){

	document.getElementById("thirdStep").style.display="none";
 	document.getElementById("secondStep").style.display="none";
  	document.getElementById("firstStep").style.display="none";
	
	  document.getElementById(idStep).style.display="block";

	 
         document.getElementById("thirdCircle").style.background="linear-gradient(to top, #0094F7, #007acc)";
  	 document.getElementById("secondCircle").style.background="linear-gradient(to top, #0094F7, #007acc)";	
  	 document.getElementById("firstCircle").style.background="linear-gradient(to top, #0094F7, #007acc)";
	 document.getElementById(idCircle).style.background="#999999";
	
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

