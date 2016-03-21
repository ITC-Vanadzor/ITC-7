var wd = require('selenium-webdriver');
By = wd.By,
until = wd.until;

var driver = new wd.Builder()
	.forBrowser('firefox')
	.build();

var wait=function(){
    driver.sleep(2000);
}


driver.get('https://www.youtube.com/').then(wait());
driver.findElement(By.className('signin-container')).click().then(wait());
driver.findElement(By.id('Email')).sendKeys('itc7vanadzor@gmail.com').then(wait());
driver.findElement(By.id('next')).click().then(wait());
driver.findElement(By.id('Passwd')).sendKeys('instigate').then(wait());
driver.findElement(By.id('signIn')).click().then(wait());
driver.findElement(By.id('masthead-search-term')).sendKeys('adele').then(wait());
driver.findElement(By.id('search-btn')).click().then(wait());
driver.findElement(By.className('yt-lockup-thumbnail')).click().then(wait());
driver.findElement(By.className('yt-uix-button-content')).click().then(wait());
var elementval = driver.findElement(By.name("yt-uix-form-input-text")).getAttribute("value");
console.log(elementval);

//driver.scrollIntoView({block: "end"});

driver.quit();
