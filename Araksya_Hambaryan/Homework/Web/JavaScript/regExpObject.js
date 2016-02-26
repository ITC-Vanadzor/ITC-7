// incomplete


str= "http://google.com:8080/search?username=hi&password=by";

valueProtocol=str.match(/[a-z]+(?=:\/\/)/i);
valueHost=str.match(/[a-z]+[.]+[a-z]+(?=:)/i);
valuePort=str.match(/[0-9]+(?=\/)/i);
valueEndpoint=str.match(/(?:)+[a-z]+(?=\?)/i);
valueParameter1=str.match(/(?:username)+(?:=)+[a-z]+/i);
valueParameter2=str.match(/(?:password)+(?:=)+[a-z]+/i);

function consoleLogObject(parser) {
    for (var i in parser) {
	console.log(parser[i]);
    }
}
function creatTable(person){
    var column = (function(){
		countKeys = 0;
		for (i in person) {
		    countKeys++;
		}
		return countKeys;
	    })();
	    //var row=2;
    var body = document.getElementById('body')
    var newTable = document.createElement('table');
    newTable.setAttribute('id', 'tl');
    newTable.setAttribute('width', '500');
    newTable.setAttribute('border', '5');
    newTable.setAttribute('border-color', 'black');
    newTable.setAttribute('margin-top', '15');
    var tab=document.getElementByID;
    var header = newTable.createTHead();
    var row = header.insertRow(0);
    for (var key in person) {
	var cellHeader = row.insertCell(0);
	cellHeader.innerHTML=key;
    }
    var row2=header.appendChild(row);
   /* for (var key in person) {
	var cell = row2.appendChild("td");
	cell.innerHTML=person[key];
	}*/
    if (tab != null) {
    body.appendChild(newTable);
    } else {
	console.log (":(((((((((((((((((")
    }
}
// Creat literal object
var parser={
    protocol  : valueProtocol,
    host      : valueHost,
    port      : valuePort,
    endpoint  : valueEndpoint,
    parameter1: valueParameter1,
    parameter2: valueParameter2
}

consoleLogObject(parser)
creatTable(parser);

// creat Object()

var parser2=new Object();
    parser2.protocol = valueProtocol;
    parser2.host = valueHost;
    parser2.port = valuePort;
    parser2.endpoint = valueEndpoint;
    parser2.parameter1 = valueParameter1;
    parser2.parameter2 = valueParameter2;

  
consoleLogObject(parser2);

function parser3() {
    this.protocol = valueProtocol;
    this.host = valueHost;
    this.port = valuePort;
    this.endpoint = valueEndpoint;
    this.parameter1 = valueParameter1;
    this.parameter2 = valueParameter2;
}

   var pars=new parser3();

consoleLogObject(pars);
