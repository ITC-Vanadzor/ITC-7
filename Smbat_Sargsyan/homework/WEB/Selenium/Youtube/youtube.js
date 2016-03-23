var webdriver = require('selenium-webdriver'),
    By = webdriver.By,
    until = webdriver.until;

var driver = new webdriver.Builder()
    .forBrowser('firefox')
    .build();
//create Youtube account and gign in on youtube
driver.get('http://www.youtube.com/');
driver.findElement(By.className('yt-uix-button yt-uix-button-size-default yt-uix-button-primary')).click();
driver.findElement(By.id('Email')).sendKeys('itc7vanadzor@gmail.com');
driver.findElement(By.id('next')).click();
driver.findElement(By.id('Passwd')).sendKeys('instigate');
driver.findElement(By.id('signIn')).click();
//Search video "hello"
driver.findElement(By.id('masthead-search-term')).sendKeys('hello');
driver.findElement(By.id('search-btn')).click();
//Scroll down
driver.executeScript("window.scrollTo(0, document.body.scrollHeight)", "");
driver.sleep(10000);
//Share and copy url
driver.wait(until.elementLocated(By.css('#results .item-section li:last-child .yt-lockup')), 5*1000).then(function(elm){elm.click()});
driver.sleep(20000);
driver.wait(until.elementLocated(By.css('#watch8-secondary-actions > button')),5*1000).then(function(elm){elm.click()});
driver.wait(until.elementLocated(By.css('#watch-actions-share-panel .share-panel-start-at-container label .yt-uix-form-input-checkbox-element')), 5*1000).then(function(elm){elm.click()});
driver.sleep(15000);
var url= driver.findElement(By.className("yt-uix-form-input-text share-panel-url")).getAttribute("value");
driver.sleep(20000);
//Send message from gmail
driver.navigate().to("https://gmail.com");
driver.wait(until.elementLocated(By.className("T-I J-J5-Ji T-I-KE L3")), 5*1000).then(function(elm){elm.click()});
driver.findElement(By.name("subjectbox")).sendKeys('Smbat');
driver.wait(until.elementLocated(By.name("to")), 5*1000).then(function(elm){elm.sendKeys('itc7vanadzor@gmail.com')});
driver.findElement(By.className("Am Al editable LW-avf")).sendKeys(url);
driver.findElement(By.className("T-I J-J5-Ji aoO T-I-atl L3")).click();

driver.findElement(By.className("gb_b gb_6a gb_R")).click();
driver.findElement(By.className("gb_Da gb_he gb_oe gb_pb")).click();
driver.quit();

