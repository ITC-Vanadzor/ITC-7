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
