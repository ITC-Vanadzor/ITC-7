var webdriver = require('selenium-webdriver');

var driver = new webdriver.Builder()
		    // The "9515" is the port opened by chrome driver.
		    .usingServer('http://localhost:9515')
				  .forBrowser('firefox')
				    .build();

					 // open youtube.com
					 driver.get('http://www.youtube.com');

					 // search "sia" 
					 driver.findElement(webdriver.By.id('masthead-search-term')).sendKeys('beatles');
					 driver.findElement(webdriver.By.id('search-btn')).click();
					 driver.sleep(4000);
					 
					 // scroll down
					 driver.executeScript("window.scrollBy(0,2500)", "");
					 
					 //open last video
					 driver.findElement(webdriver.By.css('#section-list-987868: nth-child(2): last-child: nth-child(1): nth-child(1) > h3 > a')).click();
					 driver.sleep(4000);

					 driver.wait(function() {
								 return driver.getTitle().then(function(title) {
											   return title === 'webdriver - Google Search';
												 });
					 }, 4000);

driver.quit();
