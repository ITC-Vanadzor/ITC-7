
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
/* statistic page Table*/
Datas=[
{dt:"03/25/2015",market:"Sparapet",account:"500"},
{dt:"05/17/2012",market:"Arevik",account:"1800"},
{dt:"01/5/2005",market:"Grin-Plaza",account:"3645"},
{dt:"09/13/2002",market:"Voskya",account:"8500"},
{dt:"06/25/2013",market:"Vega",account:"4530"},
{dt:"11/18/2014",market:"Proshyan",account:"50050"},	
{dt:"01/05/2015",market:"Evrika",account:"50350"},
{dt:"12/13/2015",market:"Smayl",account:"2500"}
	];
 
/*date converting into format Date*/
        
/**function count, which shows 3 rows on every click 'more' button*/        

        var count=(function()
	{ 
		var num=0;
		return function()
		{
			var first=num;
			num+=3;
			for(var i=first; i<num+3 && i<Datas.length;  ++i)
			{
				 document.getElementById("myTable").rows[i].style.display="table-row";
			}
		}
	})()
/**function, which hides all rows beside first three rows*/ 
	var hideOtherRows=function(number)
	{
		for( var i=number; i<Datas.length; ++i)
		{
			 document.getElementById("myTable").rows[i].style.display="none";		
		}
	}


/* function, which creates table with all datas, and calls onload*/			
 
function  table()
{
	   	
  		var myTable = document.getElementById("myTable");
		myTable.setAttribute("style", "width:50% ; margin:5% 10% 0%; padding:0%;");
	        var header = myTable.createTHead();
		var headerRow = header.insertRow(0);
		var Head=["Date","Market","Price"] ;
		for(var i=0; i< Head.length;++i)
		{
			var dataDate = headerRow.insertCell(i);
			dataDate.innerHTML=Head[i];
			dataDate.setAttribute("style", "font-weight: bold;");

		}
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
			hideOtherRows(3);
 }	
/*function, which filters using dates*/
function Filter()
{
	hideOtherRows(1);
	for(var i=0; i<Datas.length; ++i)
	{
    			if((new Date(Datas[i].dt) >= new Date(document.getElementById("firstDate").value)) &&(new Date(Datas[i].dt) <= new Date(document.getElementById("secondDate").value)))
			{
        			document.getElementById("myTable").rows[i].style.display="table-row";
			}
	}
	
}



/* Usage page*/						
/* function for progress usage page*/	
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
	
}

