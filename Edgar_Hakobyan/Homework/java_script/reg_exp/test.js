str="http://google.com:8080/search?username=hi&password=by",
protocol=str.match(/[a-z]+(?=:\/\/)/i);
host=str.match(/[a-z]+[.]+[a-z]+(?=:)/i);
port=str.match(/[0-9]+(?=\/)/i);
endpoint=str.match(/(?:)+[a-z]+(?=\?)/i);
username=str.match(/(?=)+[a-z]+(?=&)/i);
password=str.match(/(?:password)+(?:=)+[a-z]+/i);

//arajin tarberak
var parser={
    

    "protocol":protocol,
	"host"    :host,  
    "port"    :port, 
    "endpoint":endpoint,
    "username":username,
	"password":password
}
alert(parser.protocol);
alert(parser.host);
alert(parser.port);
alert(parser.endpoint);
alert(parser.username);
alert(parser.password);

//erkrord tarberak
var parser2=new Object();
	parser2.protocol = protocol;
	parser2.host = host;
	parser2.port = port;
	parser2.endpoint = endpoint;
	parser2.username = usewrname;
	parser2.password = password;

alert(parser2.protocol);
alert(parser2.host);
alert(parser2.port);
alert(parser2.endpoint);
alert(parser2.username);
alert(parser2.password);

//errord tarberak
function parser3() {
    this.protocol=protocol;
    this.host=host;
    this.port=port;
    this.endpoint=endpoint;
    this.username=username;
    this.password=password;
}
alert(parser3.protocol);
alert(parser3.host);
alert(parser3.port);
alert(parser3.endpoint);
alert(parser3.username);
alert(parser3.password);

