//Lets require/import the HTTP module
var http = require('http');

//Lets define a port we want to listen to
const PORT=8888; 

var text='<script> function mySubmit() {var form = document.forms.myForm;form.submit();}</script>\
	<body onLoad="mySubmit()";>\
	<form > First name:\
		<br>\
		<input type="text" name="firstname">\
		<br> Last name:<br>\
		<input type="text" name="lastname">\
		<input type="submit" name="submit" value="Submit">\
		</form>\
	</body>)';

//We need a function which handles requests and send response
function handleRequest(request, response){
    response.end(text + request.url);
}

//Create a server
var server = http.createServer(handleRequest);

//Lets start our server
server.listen(PORT, function(){
    //Callback triggered when server is successfully listening. Hurray!
    console.log("My nodejs server listening on: http://localhost:%s", PORT);
});



