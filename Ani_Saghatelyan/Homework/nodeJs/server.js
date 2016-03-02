//uses for making server
var http = require('http');
//uses for uploading file into nodeJs
var formidable = require("formidable");
//uses to work with files in nodeJs
var fs = require('fs');
//uses to show an object
var util = require('util');
//creates an web server
var server = http.createServer(function (req, res) {//callback funtion after running server to get datas
    if (req.method.toLowerCase() == 'get') {
        display(res);
    } else if (req.method.toLowerCase() == 'post') {//callback function after running server to write datas in file and store in server
        StoreDatasInFIle(req, res);
    }

});

function display(res) {
    fs.readFile('file.html', function (err, data) {
        res.writeHead(200, {
            'Content-Type': 'text/html',
                'Content-Length': data.length
        });
        res.write(data);
        res.end();
    });
}

function StoreDatasInFIle(req, res) {
    var form = new formidable.IncomingForm();

    form.parse(req, function (err, fields, files) {
        res.writeHead(200, {
            'content-type': 'text/plain'
        });
        res.write('received the data:\n\n');
        res.end(util.inspect({
            fields: fields,
            files: files
        }));
    });
}

server.listen(8080);
console.log("server listening on 8080");
