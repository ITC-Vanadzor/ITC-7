var webdriver = require('selenium-webdriver'),
		By = webdriver.By,
   		until = webdriver.until;
	
var driver = new webdriver.Builder()
	.forBrowser('firefox')
	.build();

var signIn=function(driver){
	//driver.findElement(By.id('account-chooser-link')).click();
	//driver.sleep(4000);
	//driver.findElement(By.id('account-chooser-add-account')).click();
	//driver.sleep(4000);
	driver.findElement(By.className("yt-uix-button yt-uix-button-size-default yt-uix-button-primary")).click();
	
	driver.wait(until.elementLocated(By.id('Email')),6000);
	driver.findElement(By.id("Email")).sendKeys("itc7vanadzor@gmail.com");
	
	driver.wait(until.elementLocated(By.id('next')),6000);
	driver.findElement(By.id("next")).click();
	
    driver.wait(until.elementLocated(By.id('Passwd')),6000);
	driver.findElement(By.id("Passwd")).sendKeys("instigate");
	driver.wait(until.elementLocated(By.name("PersistentCookie")),6000);
	driver.findElement(By.name("PersistentCookie")).click();
	
}

var goToAccount = function(driver){
	driver.wait(until.elementLocated(By.id('Email')),6000);
	driver.findElement(By.id("Email")).sendKeys("itc7vanadzor@gmail.com");
	
	driver.wait(until.elementLocated(By.id('next')),6000);
	driver.findElement(By.id("next")).click();
	
	driver.wait(until.elementLocated(By.id('Passwd')),6000);
	driver.findElement(By.id("Passwd")).sendKeys("instigate");
	
	driver.wait(until.elementLocated(By.name("PersistentCookie")),6000);
	driver.findElement(By.name("PersistentCookie")).click();
	
	driver.wait(until.elementLocated(By.id("signIn")),6000);
	driver.findElement(By.id("signIn")).click();
	driver.sleep(6000);

}

var searchVideo=function(driver){
	driver.findElement(By.id("signIn")).click();
	driver.manage().timeouts().pageLoadTimeout(9000);
	driver.sleep(6000);
	//input data to search
	driver.findElement(By.id("masthead-search-term")).sendKeys("minions");
	//click search button
	driver.findElement(By.id("search-btn")).click();
	driver.sleep(6000);
	// scroll till the last video
	driver.executeScript("window.scrollTo(0, document.body.scrollHeight)", "");
	driver.sleep(8000);
	//click to the last video
	driver.findElement(By.css('#results .item-section li:last-child .yt-lockup')).click();
	driver.sleep(6000);
	//click to share button
	driver.findElement(By.css('#watch8-secondary-actions > button > span')).click();
	// saves link to send via email
	//checkbox cant't use
	//driver.findElement(By.css(' #watch-actions-share-panel .share-panel-url-container share-panel-reverse  .yt-uix-form-input-checkbox-container  > input')).click();
	driver.sleep(6000);
    return driver.findElement(By.name('share-url')).getAttribute("value");
    
}

var sendEmail=function(driver,link){
        driver.sleep(3000);
		driver.findElement(By.className("T-I J-J5-Ji T-I-KE L3")).click();	
		driver.sleep(6000);
		//after it is doesn;t work
		driver.findElement(By.css('#:9y')).sendKeys('itc7vanadzor@gmail.com');
		driver.sleep(6000);
		driver.findElement(By.id('#:98')).sendKeys('Here is the link of minion video'+link);
		driver.sleep(6000);
		driver.findElement(By.id('#:8y')).click();
}
driver.navigate().to('https://www.youtube.com/');
signIn(driver);
var link=searchVideo(driver);
driver.sleep(6000);
driver.get('https://mail.google.com/');
driver.sleep(6000);
sendEmail(driver, link);
driver.sleep(10000);
driver.quit();