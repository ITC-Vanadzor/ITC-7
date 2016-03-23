var webdriver = require('selenium-webdriver'),
	chrome = require('chromedriver'),
	By = webdriver.By,
   	 until = webdriver.until;


var driver = new webdriver.Builder()
    .forBrowser('chrome')
    
    .build();

driver.get('http://youtube.com');

driver.findElement(By.className("yt-uix-button-content")).click();
driver.sleep(5000);
driver.findElement(By.id("Email")).sendKeys("testuser");
driver.findElement(By.id("next")).click();
driver.sleep(3000);
driver.findElement(By.id("Passwd")).sendKeys("testpassword");
driver.findElement(By.id("signIn")).click();
driver.sleep(3000);
driver.get('http://youtube.com');
driver.findElement(By.id("masthead-search-term")).sendKeys("android tutorial");
driver.findElement(By.className("search-button")).click();


driver.sleep(3000);

driver.wait(function() {
 return driver.getTitle().then(function(title) {
   return title === ': android tutorial-Youtube';
 });
}, 10000);
driver.quit();