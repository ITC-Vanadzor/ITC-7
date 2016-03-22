require("chromedriver");
var webdriver = require('selenium-webdriver'),
    By = webdriver.By,
    until = webdriver.until;

var driver = new webdriver.Builder()
   .forBrowser("firefox")
   .build();

driver.get("http://www.youtube.com");
driver.findElement(By.className("yt-uix-button yt-uix-button-size-default yt-uix-button-primary")).click();
driver.sleep(6000);
driver.wait(until.elementLocated(By.id("Email")), 5*1000).then(function(elm){elm.sendKeys("itc7vanadzor@gmail.com")});
driver.findElement(By.id("next")).click();
driver.sleep(6000);
driver.findElement(By.id("Passwd")).sendKeys("instigate");
driver.findElement(By.id("PersistentCookie")).click();
driver.findElement(By.id("signIn")).click();
driver.sleep(6000);
driver.findElement(By.id("masthead-search-term")).sendKeys("Beth Hart");
driver.findElement(By.id("search-btn")).click();
driver.executeScript("window.scroll(0,document.body.scrollHeight);");
driver.sleep(8000);
	
driver.wait(until.elementLocated(By.css('#results .item-section li:last-child .yt-lockup')), 5*1000).then(function(elm){elm.click()});
driver.sleep(6000);
driver.findElement(By.css('#watch8-secondary-actions > .action-panel-trigger-share')).click();
//driver.findElement(By.css('[type=checkbox]')).click();
var url= driver.findElement(By.className("yt-uix-form-input-text share-panel-url")).getAttribute("value");
driver.sleep(15000);

driver.navigate().to("https://gmail.com");
driver.wait(until.elementLocated(By.className("T-I J-J5-Ji T-I-KE L3")), 5*1000).then(function(elm){elm.click()});
driver.sleep(6000);
driver.wait(until.elementLocated(By.id(":9y")), 5*1000).then(function(elm){elm.sendKeys('itc7vanadzor@gmail.com')});
driver.findElement(By.id(":9i")).sendKeys('Smbat');
driver.findElement(By.id(":an")).sendKeys(url);
driver.findElement(By.id(":98")).click();

driver.wait(100000);

driver.quit();
