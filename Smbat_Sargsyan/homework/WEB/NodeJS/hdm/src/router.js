var express = require('express');
var router = express.Router();

router.get('/',function(req,res,next){
	res.render('index',{title: 'Express'});
});
module.exports= function() {
router.post('./signin.html',function(req,res) {
	var email = req.body.email;
	var password = req.body.password;

	User.findOne({email: email,password: password},function(err,user) {
		if(err) {
			console.log(err);
			return res.status(500).send();
		}
		if(!user) {
			return res.status(404).send();
		}
		return res.status(200).send();
	})
});


router.post('./signin.html',function(req,res){
	var username = req.body.username;
	var email = req.body.email;
	var password = req.body.password;

	var newuser = new User();
	newuser.username = username;
	newuser.email = email;
	newuser.password = password;
	newuser.save(function(err,savedUser) {
		if(err) {
			console.log(err);
			return res.status(500).send();
		}
		return res.status(200).send();
	})
})
return router;
}
