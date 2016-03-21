var str = require("randomstring");
var wd = require('selenium-webdriver');
By = wd.By,
until = wd.until;

var driver = new wd.Builder()
   .forBrowser('firefox')
   .build();

var wait=function(){
	driver.sleep(5000);
}

	var email = str.generate(7)+'@'+'gmail.com';
	
	driver.get('http://localhost:8080/');
	
	driver.findElement(By.className('blueButton')).click();
	driver.findElement(By.id('addName')).sendKeys('edgar');
	driver.findElement(By.id('addEmail')).sendKeys(email);
	driver.findElement(By.id('addPassword')).sendKeys('11111111').then(wait());
	driver.findElement(By.className('button.signInButtonSize')).click().then(wait());
	
	driver.get('http://localhost:8080/src/signin.html');
	driver.findElement(By.id('iEmail')).sendKeys(email);
	driver.findElement(By.id('iPassword')).sendKeys('11111111');
	driver.findElement(By.className('signInButtonSize')).click();
    
	driver.quit();
