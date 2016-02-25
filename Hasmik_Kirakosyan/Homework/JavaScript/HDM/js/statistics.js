	var table = document.createElement("table");
	table.setAttribute("id", "urlTable");
	//table.setAttribute("border", "1pxi");
	var tZone = document.getElementById("tableZone");
	tZone.appendChild(table);

	document.getElementById("urlTable").style.color = "blue";
	document.getElementById("urlTable").style.margin = "auto";

	var tbdy = document.createElement('tbody');
	var tr = document.createElement('tr');


	for (i=0; i < 4; i++) {
	        	var th = document.createElement("th");
				var t;
				switch (i) {
						  case 0:  t=document.createTextNode("Date");
									 break;
						  case 1:  t=document.createTextNode("Market");
									 break;
						  case 2:  t=document.createTextNode("Product");
									 break;
						  case 3:  t=document.createTextNode("Price");
									 break;
		  				  default:break;

				}
				
				th.appendChild(t);
				tbdy.appendChild(th);
				table.appendChild(tbdy);

	}


