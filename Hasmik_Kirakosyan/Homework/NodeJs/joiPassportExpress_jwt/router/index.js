'use strict';
var router = require('../modules/user/router');

module.exports = function (app) {
		  	app.use('/', router());
}
