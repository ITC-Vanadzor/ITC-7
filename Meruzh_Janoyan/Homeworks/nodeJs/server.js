'use strict';

var express = require('express');
var bodyParser = require('body-parser')
var app = express();
var server = require('http').createServer(app);
var router = express.Router();
var fs = require('fs');
var fileName = 'myDb.json';
var dataBase = {}




app.use(bodyParser.json());
app.use(bodyParser.urlencoded({
    extended: true
}));


var rtr = function() {

    router.post('/signIn/', function(req, res) {
        var fd = fs.open(fileName, 'r+');
        var data = JSON.parse(fs.readFileSync(fileName));

        for (var i in data) {
            if ((data[i].email == req.body.email || data[i].username == req.body.email) && data[i].password == req.body.password) {
                res.redirect('http://40return.tripod.com/imagelib/sitebuilder/pictures/headers/header9.jpg');
                res.end()
            }
        }

        res.redirect('http://www.scilogs.com/communication_breakdown/files/SciLogs-When-Sorry-Doesnt-Cut-It.jpg');
        res.end()
    });


    router.post('/signUp/', function(req, res) {
        dataBase[req.body.username] = {
            username: req.body.username,
            email: req.body.email,
            password: req.body.password
        };
        fs.writeFile(fileName, JSON.stringify(dataBase));
        res.redirect('http://40return.tripod.com/imagelib/sitebuilder/pictures/headers/header9.jpg');
        res.end();
    });


    return router;
};

app.use('/', rtr());

server.listen(8080, 'localhost', function() {
    var host = server.address().address;
    var port = server.address().port;
    console.log('Example app listening at http://%s:%s', host, port);
});