var webdriver = require('selenium-webdriver'),
		By = webdriver.By,
   		until = webdriver.until;
	
var driver = new webdriver.Builder()
	.forBrowser('firefox')
	.build();

var signIn=function(driver){
	driver.findElement(By.className("yt-uix-button yt-uix-button-size-default yt-uix-button-primary")).click();
	driver.findElement(By.id("Email")).sendKeys("itc7vanadzor@gmail.com");
	driver.manage().timeouts().pageLoadTimeout(9000);
	driver.findElement(By.id("next")).click();
	driver.sleep(6000);
	driver.findElement(By.id("Passwd")).sendKeys("instigate");
	driver.sleep(6000);
	driver.findElement(By.name("PersistentCookie")).click();
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
	//here can't click on link
	driver.findElement(By.css('#results .item-section li:last-child .yt-lockup')).click();
	driver.sleep(6000);
	//click to share button
	driver.findElement(By.css('#watch8-secondary-actions > button')).click();
	// saves link to send via email
	//checkbox
	driver.findElement(By.css('[type=checkbox]')).click();
	driver.sleep(6000);
    return driver.findElement(By.name('share-url')).getAttribute("value");
}

var sendEmail=function(driver){

		driver.findElement(By.linkText('НАПИСАТЬ')).click();	
		driver.sleep(6000);
		driver.findElement(By.className('Wa')).sendKeys('itc7vanadzor@gmail.com');
		driver.sleep(6000);
		driver.findElement(By.id(':98')).sendKeys('Here is the link of minion video');
		driver.sleep(6000);
		driver.findElement(By.id(':8y')).click();
}


driver.get('https://www.youtube.com/');
signIn(driver);
var link=searchVideo(driver);
//driver.get('https://mail.google.com/');
//signIn(driver);
//sendEmail(driver);
driver.sleep(10000);
driver.quit();
