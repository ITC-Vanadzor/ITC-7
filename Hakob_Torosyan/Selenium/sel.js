var webdriver = require('selenium-webdriver'),
	By = webdriver.By,
   	 until = webdriver.until;
	
var driver = new webdriver.Builder()
    .forBrowser('firefox')
    .build();

driver.get('https://youtube.com/');
driver.findElement(By.className("yt-uix-button yt-uix-button-size-default yt-uix-button-primary")).click();
driver.findElement(By.id("account-chooser-add-account")).click();
driver.sleep(3000);
driver.findElement(By.id("Email")).sendKeys("sparapethayoc451@gmail.com");
driver.sleep(3000);
driver.findElement(By.id("next")).click();
driver.sleep(3000);
driver.findElement(By.id("Passwd")).sendKeys("avarayr451");
driver.sleep(3000);
driver.findElement(By.id("signIn")).click();
driver.sleep(3000);
driver.get('https://youtube.com/');
driver.sleep(3000);
driver.executeScript("window.scrollTo(0, document.body.scrollHeight)", "");
driver.sleep(3000);
driver.findElement(By.id("masthead-search-term")).sendKeys("Real Madrid Barcelona 4:1 ");
driver.sleep(3000);
driver.findElement(By.id("search-btn")).click();
//driver.findElement(By.className("yt-uix-sessionlink yt-uix-tile-link yt-ui-ellipsis yt-ui-ellipsis-2 spf-link ")).click();


driver.sleep(10000);
driver.quit();
