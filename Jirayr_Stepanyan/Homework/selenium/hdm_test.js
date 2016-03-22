var str = require("randomstring");
var wd = require('selenium-webdriver');
var assert = require('assert')
By = wd.By,
until = wd.until;

var driver = new wd.Builder()
   .forBrowser('firefox')
   .build();

var email = str.generate(7)+'@'+'gmail.com';
	
driver.get('http://localhost:8080/');
	
driver.findElement(By.className('blueButton')).click();
driver.findElement(By.id('addName')).sendKeys('edgar');
driver.findElement(By.id('addEmail')).sendKeys(email);
driver.findElement(By.id('addPassword')).sendKeys('11111111');	
river.wait(driver.isElementPresent(By.css('#signUpDiv .loginBg .signInButtonSize')), 5000);    	
river.findElement(By.css('#signUpDiv .loginBg .signInButtonSize')).click();
driver.get('http://localhost:8080/src/signin.html');
driver.findElement(By.id('iEmail')).sendKeys(email);
driver.findElement(By.id('iPassword')).sendKeys('11111111');
driver.findElement(By.className('signInButtonSize')).click();

driver.wait(until.titleIs('HDM Statistic'), 5000);
driver.getTitle().then(function(title) {
	assert.ok(title.indexOf('HDM Statistic') > -1, '-------------');
});

driver.quit();