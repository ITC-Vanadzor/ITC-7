var string = require('randomstring'); 
var wd = require('selenium-webdriver');
By = wd.By,
until = wd.until;

var driver = new wd.Builder()
   .forBrowser('firefox')
   .build();

	var userName = 'edgar';
	var email = string.generate(7)+'@gmail.com';
	var password = '111111111';
	
	driver.get('http://localhost:8080/');
	
	driver.wait(until.elementLocated(By.className('blueButton')),5000);
	driver.findElement(By.className('blueButton')).click();
	
	driver.wait(until.elementLocated(By.id('addName')),5000);
	driver.findElement(By.id('addName')).sendKeys(userName);

	driver.wait(until.elementLocated(By.id('addEmail')),5000);
	driver.findElement(By.id('addEmail')).sendKeys(email);

	driver.wait(until.elementLocated(By.id('addPassword')),5000);
	driver.findElement(By.id('addPassword')).sendKeys(password);

	driver.wait(until.elementLocated(By.css('#signUpDiv .loginBg .signInButtonSize')),5000);
	driver.findElement(By.css('#signUpDiv .loginBg .signInButtonSize')).click();
	
	driver.get('http://localhost:8080/src/signin.html');

	driver.wait(until.elementLocated(By.id('iEmail')),5000);
	driver.findElement(By.id('iEmail')).sendKeys(email);

	driver.wait(until.elementLocated(By.id('iPassword')),5000);
	driver.findElement(By.id('iPassword')).sendKeys(password);

	driver.wait(until.elementLocated(By.className('signInButtonSize')),5000);
	driver.findElement(By.className('signInButtonSize')).click();

	driver.wait(until.titleIs('HDM Statistic'),5000);
    
	driver.quit();
