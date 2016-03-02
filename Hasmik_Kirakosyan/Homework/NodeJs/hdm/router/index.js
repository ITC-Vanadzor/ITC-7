'use strict';
var router = require('../modules/router');

module.exports = function (app) {
		  	app.use('/', router());
}
