function Parser(url) {
            this.url = url;
            this.getHost = function() {
                return this.url.match('(.+?)://')[1];

            }
            
            this.getPort = function() {
                var tmp = this.url.match('://(.+?):');
                if (tmp) {
                    return this.url.match(':[0-9](.+?)/')[1];

                } else {
                    return "Not found";
                }

            }
            this.getDomen = function() {

                return this.url.match('://(.+?)[/|:]')[1];
            }
            this.getPath = function() {
                tmp = this.url.match(/[^:\/]\/(.+?)[?]/);
                if (tmp) {
                    return tmp[1];
                }
                if (this.url.search("/[?]") != -1) {
                    return " Not found";
                } else {
                    return this.url.match(/[^:\/]\/(.+?)$/)[1];
                }
            }
            this.getVariable = function() {
                return this.url.match(/([a-z]+?)=(.+?)$/ig);
            }

        }

        function parseUrl() {
            var myObj = new Parser(document.getElementById('iUrl').value);

            document.getElementById('iDisplay').value = "Url: " + myObj.url;
            document.getElementById('iDisplay').value += "\nHost: " + myObj.getHost();
            document.getElementById('iDisplay').value += "\nDomen: " + myObj.getDomen();
            document.getElementById('iDisplay').value += "\nPort: " + myObj.getPort();
            document.getElementById('iDisplay').value += "\nPath: " + myObj.getPath();
            document.getElementById('iDisplay').value += "\nVar: " + myObj.getVariable();
	}	  

function tableUrl() {
  var myObj=new Parser(document.getElementById('iUrl').value);	
  var url=myObj.url;
	    var host=myObj.getHost();
            var domen=myObj.getDomen();
            var port=myObj.getPort();
	    var path=myObj.getPath();
	    var variable=myObj.getVariable();
	    var array=[host,domen,port,path,variable];
	document.write("<table>");
	for(i=0;i<2;i++) {
		document.write("<tr>");
		for(j=0;j<array.length;j++) {
			document.write("<td>"+array[j]+"</td>");
		}
		document.write("</tr>");	
        }
	document.write("</table>");	
}

