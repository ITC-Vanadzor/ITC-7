var webdriver = require('selenium-webdriver'),
	By = webdriver.By,
   	 until = webdriver.until;
	
var driver = new webdriver.Builder()
    .forBrowser('firefox')
    .build();

driver.get('https://youtube.com/');
driver.findElement(By.className("yt-uix-button yt-uix-button-size-default yt-uix-button-primary")).click();
driver.findElement(By.id("Email")).sendKeys("itc7vanadzor@gmail.com");
driver.findElement(By.name("next")).click();
driver.findElement(By.id("Passwd")).sendKeys("instigate");
driver.findElement(By.name("PersistentCookie")).click();
driver.findElement(By.name("signIn")).click();
driver.findElement(By.id("masthead-search-term")).sendKeys("Beth Hart");
driver.findElement(By.id("search-btn")).click();
//((JavascriptExecutor) driver).executeScript("scroll(0,250);");
driver.sleep(10000);
driver.quit();
