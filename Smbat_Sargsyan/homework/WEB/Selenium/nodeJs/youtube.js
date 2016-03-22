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
driver.findElement(By.css('#results .item-section li:last-child .yt-lockup')).click();
driver.sleep(15000);
driver.findElement(By.css('#watch8-secondary-actions > button')).click();
driver.sleep(20000);
//driver.findElement(By.css([type="checkbox"])).click();
var url= driver.findElement(By.className("yt-uix-form-input-text share-panel-url")).getAttribute("value");
driver.sleep(20000);
//Send message from gmail
driver.navigate().to("https://gmail.com");
driver.findElement(By.className("T-I J-J5-Ji T-I-KE L3")).click();
driver.findElement(By.id(":9y")).sendKeys('itc7vanadzor@gmail.com');
driver.findElement(By.id(":9i")).sendKeys('Smbat');
driver.findElement(By.id(":an")).sendKeys(url);
driver.findElement(By.id(":98")).click();
driver.quit();

