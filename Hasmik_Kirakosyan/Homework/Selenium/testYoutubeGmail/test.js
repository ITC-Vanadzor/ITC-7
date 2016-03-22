var webdriver = require('selenium-webdriver');

var By = webdriver.By, 
	 until = webdriver.until;
var driver = new webdriver.Builder()
		  .forBrowser('chrome')
		  .build();

// sign in
driver.get("http://www.youtube.com");
driver.findElement(By.css('#yt-masthead-signin button')).click();

driver.wait(until.elementLocated(By.id("Email")), 5*1000).then(function(elm){elm.sendKeys("itc7vanadzor@gmail.com")});
driver.findElement(By.id("next")).click();
driver.sleep(2000);
driver.findElement(By.id("Passwd")).sendKeys("instigate");
driver.findElement(By.name("PersistentCookie")).click();
driver.sleep(2000);
driver.findElement(By.id("signIn")).click();

driver.get('http://www.youtube.com');
		
// search "beatles" 
driver.findElement(By.id('masthead-search-term')).sendKeys('beatles');
driver.findElement(By.id('search-btn')).click();
driver.sleep(4000);

// scroll down
driver.executeScript("window.scrollTo(0, document.body.scrollHeight)", "");

//open the last video
driver.findElement(By.css('#results .item-section li:last-child .yt-lockup')).click();
driver.sleep(4000);

//copy share link
driver.findElement(By.css('#watch8-secondary-actions > button')).click();
driver.wait(until.elementLocated(By.css('#watch-actions-share-panel .share-panel-start-at-container label .yt-uix-form-input-checkbox-element')), 5*1000).then(function(elm){elm.click()}); 
		  
driver.sleep(4000);
		  var url = driver.findElement(By.name('share_url')).getAttribute("value");
		 
// go to gmail.com and write a mail 
driver.navigate().to('https://www.gmail.com');
drive.sleep(3000);
//driver.wait(until.elementLocated(By.linkText("НАПИСАТЬ"))).then(function(elm) {elm.click()});
//driver.findElement(By.name("to")).sendKeys("itc7vanadzor@gmail.com");
//driver.findElement(By.name("subjectbox")).sendKeys("testMail");
//driver.findElement(By.css("[aria-label='Тело письма']")).sendKeys(url);

driver.quit();
