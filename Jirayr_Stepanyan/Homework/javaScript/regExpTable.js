function getstr() 
{
    str = prompt("Please import URL-s if you stoped inputing insert -1");
}

function removeTr(tr)
{
    tr.remove();
}

function pars() 
{ 
    //str="http://google.com:8080/search?username=hi&password=by",
    protocol=str.match(/[a-z]+(?=:\/\/)/i);
    host=str.match(/[a-z]+[.]+[a-z]+(?=:)/i);
    port=str.match(/[0-9]+(?=\/)/i);
    endpoint=str.match(/(?:)+[a-z]+(?=\?)/i);
    parameter1=str.match(/\?(.*)&/);
    parameter2=str.match(/&(.*)$/);

parser = 
{
    'protocol'	:protocol,
    'host'	:host,
    'port'	:port,
    'endpoint'	:endpoint,
    'parameter1':parameter1[1],
    'parameter2':parameter2[1],
}

    var tr = document.createElement('tr');
    for(var j in parser) 
    {
	var td = document.createElement('td');
	td.innerHTML = parser[j];
	tr.appendChild(td);
    }
    document.getElementById('table').appendChild(tr);
    var plus = document.createElement('button');
    plus.innerHTML = "+";
    tr.appendChild(plus)
    plus.addEventListener('click', function(){getstr(tr)});
    var minus = document.createElement('button');
    minus.innerHTML = "-";
    tr.appendChild(minus);
    minus.addEventListener('click', function(){removeTr(tr)});
}
