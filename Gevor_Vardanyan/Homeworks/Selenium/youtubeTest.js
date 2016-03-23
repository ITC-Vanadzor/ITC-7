var randomstring = require("randomstring");
var webDr = require('selenium-webdriver'),
By = webDr.By,
until = webDr.until;

var driver = new webdriver.Builder()
    .forBrowser('firefox')
    .build();
var wait=function(){
	driver.sleep(500);
}

var email='itc7vanadzor@gmail.com'
var pass='instigate';
      
	driver.get('https://www.youtube.com/');

	driver.findElement(By.className('signin-container')).click().then(wait());
	driver.findElement(By.id('Email')).sendKeys(email).then(wait());
	driver.findElement(By.id('next')).click().then(wait());
	driver.findElement(By.name('Passwd')).sendKeys(pass).then(wait());
	driver.findElement(By.id('signIn')).click().then(wait());

	driver.findElement(By.id('masthead-search-term')).sendKeys("The Lion Whisperer").then(wait());
	driver.findElement(By.className('search-button')).click().then(wait());
	driver.findElement(By.css('#results .item-section li:last-child .yt-lockup')).click().then(wait());
 

driver.quit();
