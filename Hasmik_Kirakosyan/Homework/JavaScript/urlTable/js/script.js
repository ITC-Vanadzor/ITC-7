var url = prompt("Type url address! ");

function urlParser (url) {

	this.url = url;

	this.getProtocol = function() {
		var protocol = url.match(/^(.*):\/\//);
		return protocol[1];
	}

	this.getPort = function() {
		var port = url.match(/:([0-9].*)\//);
		if (port==null)
				  return 'none port'
		else
				  return port[1];
	}

	this.getPar1 = function() {
		var var1 = url.match(/\?(.*)&/);
		return var1[1];
	}	

	this.getPar2 = function () {
		var var2 = url.match(/&(.*)$/);
		return var2[1];
	}
	this.getHost = function() {
		var host = url.match(/:\/\/(.*):/);
		if (host==null)
				  return 'none host'
		else
				  return host[1];		
	}
	
	this.getPath = function () {
		var path = url.match(/[0-9]\/(.*)\?/);
		return path[1];	
	}
} 

var urlObj = new urlParser(url);


function createTable() {
		  var tbl = document.getElementById('urlTable');
		  var tbdy = document.createElement('tbody');
		  for (var i = 0; i < 3; i++) {
					 var tr = document.createElement('tr');
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
		  }
		  tbl.appendChild(tbdy);

}
