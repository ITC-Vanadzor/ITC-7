var webdriver = require('selenium-webdriver'),
	By = webdriver.By,
   	 until = webdriver.until;
	
var driver = new webdriver.Builder()
    .forBrowser('firefox')
    .build();

driver.get('https://youtube.com/');
driver.executeScript("window.scrollTo(0, document.body.scrollHeight)", "");
driver.findElement(By.id("masthead-search-term")).sendKeys("Real Madrid Barcelona 4:1 ");
driver.findElement(By.id("search-btn")).click();
driver.findElement(By.id("yt-uix-sessionlink yt-uix-tile-link yt-ui-ellipsis yt-ui-ellipsis-2 spf-link")).click();

//driver.findElement(By.linkText("Sign in")).

//driver.findElement(By.id("loginbutton")).click();
//driver.sleep(10000);
//driver.findElement(By.className("project")).click();
//driver.findElement(By.className("fa fa-download")).click();
driver.sleep(10000);
driver.quit();
