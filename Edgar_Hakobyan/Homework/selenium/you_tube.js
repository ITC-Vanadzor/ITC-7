var wd = require('selenium-webdriver');
By = wd.By,
until = wd.until;

var driver = new wd.Builder()
	.forBrowser('firefox')
	.build();

	driver.get('https://www.youtube.com/');
	
	driver.wait(until.elementLocated(By.className('signin-container')),5000);
	driver.findElement(By.className('signin-container')).click();
	
	driver.wait(until.elementLocated(By.id('Email')),5000);
	driver.findElement(By.id('Email')).sendKeys('itc7vanadzor@gmail.com');

	driver.wait(until.elementLocated(By.id('next')),5000);
	driver.findElement(By.id('next')).click();

	driver.wait(until.elementLocated(By.id('Passwd')),5000);
	driver.findElement(By.id('Passwd')).sendKeys('instigate');

	driver.wait(until.elementLocated(By.id('signIn')),5000);
	driver.findElement(By.id('signIn')).click();

	driver.wait(until.elementLocated(By.id('masthead-search-term')),5000);
	driver.findElement(By.id('masthead-search-term')).sendKeys('adele');
	
	driver.wait(until.elementLocated(By.id('search-btn')),5000);
    driver.findElement(By.id('search-btn')).click();

	driver.wait(until.elementLocated(By.css('#results .item-section li:last-child .yt-lockup')),20000);
	driver.findElement(By.css('#results .item-section li:last-child .yt-lockup')).click();
	
	driver.wait(until.elementLocated(By.css('#watch8-secondary-actions > button')),20000);
	driver.findElement(By.css('#watch8-secondary-actions > button')).click();

//	driver.wait(until.elementLocated(By.css('[type=checkbox]')),20000);
//    driver.findElement(By.css('[type=checkbox]')).click();

	driver.wait(until.elementLocated(By.css('#watch-actions-share-panel .share-panel .share-panel-services-container .share-panel-url-container .share-panel-url-input-container .yt-uix-form-input-text')),30000);
    var elementval = driver.findElement(By.css('#watch-actions-share-panel .share-panel .share-panel-services-container .share-panel-url-container .share-panel-url-input-container .yt-uix-form-input-text')).getAttribute("value");

	driver.get('https://gmail.com/');
	driver.sleep(10000);

	driver.wait(until.elementLocated(By.className('T-I J-J5-Ji T-I-KE L3')),10000);
	driver.findElement(By.css('#:51 .z0 .T-I')).click();
	driver.sleep(10000);

	driver.wait(until.elementLocated(By.css('#:9y')),10000);
    driver.findElement(By.css('#:9y')).sendKeys('itc7vanadzor@gmail.com');

	driver.wait(until.elementLocated(By.css('#:9i')),10000);
    driver.findElement(By.css('#:9i')).sendKeys('selenium test');

	driver.wait(until.elementLocated(By.css('#:an')),10000);
    driver.findElement(By.css('#:an')).sendKeys('elementval');
	
	driver.wait(until.elementLocated(By.css('#:98')),10000);
    driver.findElement(By.css('#:98')).click();
	
	console.log(elementval);

	

driver.quit();
