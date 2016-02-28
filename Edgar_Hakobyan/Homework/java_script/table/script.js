// url = "http://google.com:8080/search?username=hi&password=by"

function getstr() {
str=prompt("Please import URL-s if you stoped inputing insert -1");
}


function removeRow(obj) {
	var table  = document.getElementById('table');
	var numtr = obj.parentNode.parentNode.rowIndex;
	count = document.getElementById('table').rows.length;
	if( count-numtr > 1) {
		table.deleteRow(numtr+1);
	}
	else {
		table.deleteRow(numtr);
	}
}

function addRow(obj) {
protocol=str.match(/[a-z]+(?=:\/\/)/i);
host=str.match(/[a-z]+[.]+[a-z]+(?=:)/i);
port=str.match(/[0-9]+(?=\/)/i);
endpoint=str.match(/(?:)+[a-z]+(?=\?)/i);
parameter1=str.match(/\?(.*)&/);
parameter2=str.match(/&(.*)$/);

 parser={
    'protocol':protocol,
    'host'    :host,
    'port' 	  :port,
    'endpoint':endpoint,
    'parameter1':parameter1[1],
    'parameter2':parameter2[1],
}
	var table = document.getElementById('table');
	var num = obj.parentNode.parentNode.rowIndex;
	if (num === undefined){
		row = table.insertRow(1);
		}
	else{
		row = table.insertRow(num+1);
	}
	var j = 0;
		for(var i in parser){
			cell = row.insertCell(j);
			cell.innerHTML = parser[i];
			j++;
		}
	cell = row.insertCell(j);
	var plus = document.createElement('button');
	plus.innerHTML = "+";
	cell.appendChild(plus)
	plus.addEventListener('click', function(){addRow(this)});
	var minus = document.createElement('button');
	minus.innerHTML = '-';
	cell.appendChild(minus);
	minus.addEventListener('click', function(){removeRow(this)});
}
