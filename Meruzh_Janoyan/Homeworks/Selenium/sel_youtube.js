var randomstring = require("randomstring");
var webdriver = require('selenium-webdriver'),
By = require('selenium-webdriver').By,
until = require('selenium-webdriver').until;

var wait=function(){
	driver.sleep(100);
}

var driver = new webdriver.Builder()
    .forBrowser('firefox')
    .build();


var email='itc7vanadzor@gmail.com'
var pass='instigate';
      
driver.get("https://accounts.google.com/ServiceLogin");
driver.findElement(By.id('Email')).sendKeys(email).then(wait());
driver.findElement(By.id('next')).click().then(wait());
driver.findElement(By.name('Passwd')).sendKeys(pass).then(wait());
driver.findElement(By.id('next')).click().then(wait());
driver.findElement(By.id('masthead-search-term')).sendKeys("Instigate Mobile Vanadzor-Ginosi");
driver.findElement(By.className('search-button')).click();
driver.findElement(By.xpath("//h3/a")).click();
 
 // driver.findElement(By.className('yt-uix-button-toggled')).click().then(wait());
 // driver.findElement(By.name("share_url")).click().then(wait());
 



driver.quit();
