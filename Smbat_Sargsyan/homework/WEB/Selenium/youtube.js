var webdriver = require('selenium-webdriver'),
    By = webdriver.By,
    until = webdriver.until;

var driver = new webdriver.Builder()
    .forBrowser('firefox')
    .build();

driver.get('http://www.youtube.com/');
//driver.findElement(By.class('q')).sendKeys('webdriver');
driver.findElement(By.className('yt-uix-button yt-uix-button-size-default yt-uix-button-primary')).click();
driver.findElement(By.id('Email')).sendKeys('itc7vanadzor@gmail.com');
driver.findElement(By.id('next')).click();
driver.findElement(By.id('Passwd')).sendKeys('instigate');
driver.findElement(By.id('signIn')).click();
driver.findElement(By.id('masthead-search-term')).sendKeys('hello');
driver.findElement(By.id('search-btn')).click();
driver.executeScript("window.scrollBy(0,450)", "");
driver.findElement(By.className('yt-uix-sessionlink yt-uix-tile-link yt-ui-ellipsis yt-ui-ellipsis-2 spf-link')).click();
driver.findElement(By.className('yt-uix-button yt-uix-button-size-default yt-uix-button-opaci...n-panel-trigger-share yt-uix-tooltip yt-uix-button-toggled')).click();
//driver.findElement(By.className("yt-uix-form-input-text share-panel-url")).sendKeys(Keys.chord(Keys.Control + "t"));
//String selectAll = Keys.chord(Keys.CONTROL, "t");
//driver.findElement(By.className("yt-uix-form-input-text share-panel-url")).sendKeys(Keys.chord(Keys.CONTROL+"t"));
 driver.findElement(By.id("body")).sendKeys(Keys.CONTROL + "t");
    driver.navigate().to("https://yahoo.com");
driver.wait(10000);
driver.quit();

