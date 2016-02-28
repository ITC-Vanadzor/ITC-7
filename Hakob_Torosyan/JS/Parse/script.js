 var str;
function takeString(){
      str = prompt("Import string or -1 for end");
	}
	if(str != -1){
		
		function parse(){
			protocol   = str.match(/[a-z]+(?=:\/\/)/i);
			host       = str.match(/[a-z]+[.]+[a-z]+(?=:)/i);
			port       = str.match(/[0-9]+(?=\/)/i);
			endpoint   = str.match(/(?:)+[a-z]+(?=\?)/i);
			parameter1 = str.match(/\?+(.)+(?=&)/);
			parameter2 = str.match(/(?:&)+(.)+/i);
                        console.log("parse()")
			parser={
    			'protocol'  :protocol,
    			'host'      :host,
    			'port'      :port,
    			'endpoint'  :endpoint,
    			'parameter1':parameter1,
    			'parameter2':parameter2
			}
		}
		function addtr(){
			var tr = document.createElement('tr');
			for(var j in parser) {
			var td = document.createElement('td');
			td.innerHTML = parser[j];
			tr.appendChild(td);
			}
			document.getElementById('table').appendChild(tr);
	
	}
}

