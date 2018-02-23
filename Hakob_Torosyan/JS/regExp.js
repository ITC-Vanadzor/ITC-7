var parser={
    
    str: "http://google.com:8080/search?username=hi&password=by",
    "protocol":function(){return this.str.match(/[a-z]+(?=:\/\/)/i);},

     host :function() {
	    return this.str.match(/[a-z]+[.]+[a-z]+(?=:)/i);
     },
    port : function() {
	    return this.str.match(/[0-9]+(?=\/)/i);
	    },
    endpoint: function() {
	    return this.str.match(/(?:)+[a-z]+(?=\?)/i);
	    },
    parameter1:function() {
	    return this.str.match(/(?:username)+(?:=)+[a-z]+/i);
},

    parameter2:function() {
	    return this.str.match(/(?:password)+(?:=)+[a-z]+/i);
}
}
alert(parser.protocol());
alert(parser.host());
alert(parser.port());
alert(parser.endpoint());
alert(parser.parameter1());
alert(parser.parameter2());


var parser2=new Object();

    parser2.str= "http://google.com:8080/search?username=hi&password=by"
    parser2.protocol=function(){return this.str.match(/[a-z]+(?=:\/\/)/i);}
    parser2.host=function() {
	    return this.str.match(/[a-z]+[.]+[a-z]+(?=:)/i);
     }
    parser2.port= function() {
	    return this.str.match(/[0-9]+(?=\/)/i);
	    }
    parser2.endpoint=function() {
	    return this.str.match(/(?:)+[a-z]+(?=\?)/i);
	    }
    parser2.parameter1=function() {
	    return this.str.match(/(?:username)+(?:=)+[a-z]+/i);
}

    parser2.parameter2=function() {
	    return this.str.match(/(?:password)+(?:=)+[a-z]+/i);
}

alert(parser2.protocol());
alert(parser2.host());
alert(parser2.port());
alert(parser2.endpoint());
alert(parser2.parameter1());
alert(parser2.parameter2());


function parser3(str) {
    this.protocol=str.match(/[a-z]+(?=:\/\/)/i);
    this.host=str.match(/[a-z]+[.]+[a-z]+(?=:)/i);
    this.port=str.match(/[0-9]+(?=\/)/i);
    this.endpoint=str.match(/(?:)+[a-z]+(?=\?)/i);
    this.parameter1=str.match(/(?:username)+(?:=)+[a-z]+/i);
    this.parameter2=str.match(/(?:password)+(?:=)+[a-z]+/i);
}

    var str= "http://google.com:8080/search?username=hi&password=by";
    var pars=new parser3(str);

alert(pars.protocol);
alert(pars.host);
alert(pars.port);
alert(pars.endpoint);
alert(pars.parameter1);
alert(pars.parameter2);
