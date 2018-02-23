var randomstring = require("randomstring");
var webdriver = require('selenium-webdriver'),
By = require('selenium-webdriver').By,
until = require('selenium-webdriver').until;


var driver = new webdriver.Builder()
    .forBrowser('firefox')
    .build();

var name=randomstring.generate(7);
var email=randomstring.generate(7)+'@'+randomstring.generate(4)+'.com';
var pass=randomstring.generate(6);


driver.get('http://localhost:8080');
driver.findElement(By.className('blueButton')).click();

driver.findElement(By.id('addName')).sendKeys(name);
driver.findElement(By.id('addEmail')).sendKeys(email);
driver.findElement(By.id('addPassword')).sendKeys(pass);
driver.findElement(By.css('#signUpDiv button')).click();

driver.get('http://localhost:8080/src/signin.html');
driver.findElement(By.id('iEmail')).sendKeys(email);
driver.findElement(By.id('iPassword')).sendKeys(pass);
driver.findElement(By.css('#signInDiv button')).click();

driver.wait(until.titleIs('HDM Statistic'),5000);
 

driver.quit();




