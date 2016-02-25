var  url;
function urlParser (url) {

		  this.url = url;

		  this.getProtocol = function() {
					 var protocol = url.match(/^(.*):\/\//);
								return (protocol==null)?'none':protocol[1];
		  }

		  this.getPort = function() {
					 var port = url.match(/:([0-9].*)\//);
					 return (port==null)?'none':port[1];
		  }

		  this.getPar1 = function() {
					 var var1 = url.match(/\?(.*)&/);
					 return (var1==null)?'none':var1[1];
		  }	

		  this.getPar2 = function () {
					 var var2 = url.match(/&(.*)$/);
					 return (var2==null)?'none':var2[1];
		  }
		  this.getHost = function() {
					 var host = url.match(/:\/\/(.*):/);
					 return (host==null)?'none':host[1];		
		  }

		  this.getPath = function () {
					 var path = url.match(/[0-9]\/(.*)\?/);
					 return (path==null)?'none':path[1];	
		  }
} 
	var x = document.createElement("table");
	x.setAttribute("id", "urlTable");
	x.setAttribute("border", "3");
	document.body.appendChild(x);

	var tbl = document.getElementById('urlTable');
	var tbdy = document.createElement('tbody');
	var tr = document.createElement('tr');

	        
    	var th = document.createElement("th");
    	var t = document.createTextNode("table");
   	th.appendChild(t);
	tbdy.appendChild(th);

	tbl.appendChild(tbdy);
    	document.body.appendChild(tbl);


function createTable() {

	// get url from user input
	url = prompt("Type url address! ");
	var urlObj = new urlParser(url);

	

	for (var j = 0; j < 5; j++) {
		var td = document.createElement('td');
		switch (j) {
			case 0: td.appendChild(document.createTextNode(urlObj.getProtocol()));
				break;
			case 1: td.appendChild(document.createTextNode(urlObj.getHost()));
				break;
			case 2: td.appendChild(document.createTextNode(urlObj.getPort()));
				break;
			case 3: td.appendChild(document.createTextNode(urlObj.getPath()));
				break;
			case 4: td.appendChild(document.createTextNode(urlObj.getPar1() +'\n' + urlObj.getPar2()));
				break;
			default:td.appendChild('hi');
		}
		tr.appendChild(td)
	} 
	tbdy.appendChild(tr);
	tbl.appendChild(tbdy);

}
