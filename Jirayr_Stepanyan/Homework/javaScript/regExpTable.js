str= "http://google.com:8080/search?username=hi&password=by";

function valueProtocol()
{
    return str.match(/[a-z]+(?=:\/\/)/i);
}
function valueHost()
{
    return str.match(/[a-z]+[.]+[a-z]+(?=:)/i);
}
function valuePort()
{
    return str.match(/[0-9]+(?=\/)/i);
}
function valueEndpoint()
{
    return str.match(/(?:)+[a-z]+(?=\?)/i);
}
function valueParameter1()
{
    return str.match(/(?:username)+(?:=)+[a-z]+/i);
}
function valueParameter2()
{
    return str.match(/(?:password)+(?:=)+[a-z]+/i);
}

var parser={
    protocol  : valueProtocol(),
    host      : valueHost(),
    port      : valuePort(),
    endpoint  : valueEndpoint(),
    parameter1: valueParameter1(),
    parameter2: valueParameter2()
}
myProtocol = document.getElementById("protocol")
consol.log(valueProtocol());
/*alert(parser.protocol);
alert(parser.host);
alert(parser.port);
alert(parser.endpoint);
alert(parser.parameter1);
alert(parser.parameter2);*/

