'use strict';

var express = require('express');
var app = express();
var bodyParser = require('body-parser');
var urlencodedParser = bodyParser.urlencoded({extended :false });

app.use(express.static('public'));
//app.use(bodyParser());

app.get("/simple_form.html", function(req, res) {
	res.send(__dirname + "/" + "simple_form.html");
});

// Get request
app.get('/process_get', function(req, res) {
	var response = {
		age: req.query.age,
		country: req.query.country
	}
	
	console.log(response);
	res.end(JSON.stringify(response)+"\n ----- GET----");

});
// POST request
app.post('/process_post', urlencodedParser, function(req, res) {
	var response = {
		username: req.body.username,
	   password: req.body.password
}
		console.log(response);
		res.end(JSON.stringify(response)+"\n ----- POST ----");
});


var server = app.listen(8080, function() {
	var host = server.address().address
	var port = server.address().port
	console.log("Example app listening at http://%s:%s", host, port);

});


