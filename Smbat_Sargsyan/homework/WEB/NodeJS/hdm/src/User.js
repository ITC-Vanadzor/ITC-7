var mongoose = require('mongoose');

var userPrototype = new mongoose.Schema( {
	username: {type: String,unique: true},
	email: {type: String},
	password: {type: String}

})

var User = mongoose.model('newuser',userPrototype);
module.exports = User;