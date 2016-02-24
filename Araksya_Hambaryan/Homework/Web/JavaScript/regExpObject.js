str= "http://google.com:8080/search?username=hi&password=by";

valueProtocol=str.match(/[a-z]+(?=:\/\/)/i);
valueHost=str.match(/[a-z]+[.]+[a-z]+(?=:)/i);
valuePort=str.match(/[0-9]+(?=\/)/i);
valueEndpoint=str.match(/(?:)+[a-z]+(?=\?)/i);
valueParameter1=str.match(/(?:username)+(?:=)+[a-z]+/i);
valueParameter2=str.match(/(?:password)+(?:=)+[a-z]+/i);

// Creat literal object
var parser={
    "protocol"  : valueProtocol,
    "host"      : valueHost,
    "port"      : valuePort,
    "endpoint"  : valueEndpoint,
    "parameter1": valueParameter1,
    "parameter2": valueParameter2
}


alert(parser.protocol);
alert(parser.host);
alert(parser.port);
alert(parser.endpoint);
alert(parser.parameter1);
alert(parser.parameter2);

// creat Object()

var parser2=new Object();
    parser2.protocol = valueProtocol;
    parser2.host = valueHost;
    parser2.port = valuePort;
    parser2.endpoint = valueEndpoint;
    parser2.parameter1 = valueParameter1;
    parser2.parameter2 = valueParameter2;

alert(parser2.protocol);
alert(parser2.host);
alert(parser2.port);
alert(parser2.endpoint);
alert(parser2.parameter1);
alert(parser2.parameter2);


function parser3() {
    this.protocol = valueProtocol;
    this.host = valueHost;
    this.port = valuePort;
    this.endpoint = valueEndpoint;
    this.parameter1 = valueParameter1;
    this.parameter2 = valueParameter2;
}

   var pars=new parser3();

alert(pars.protocol);
alert(pars.host);
alert(pars.port);
alert(pars.endpoint);
alert(pars.parameter1);
alert(pars.parameter2);
