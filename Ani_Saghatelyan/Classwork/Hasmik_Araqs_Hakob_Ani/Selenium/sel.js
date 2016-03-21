var webdriver = require('selenium-webdriver'),
	By = webdriver.By,
   	 until = webdriver.until;
	
var driver = new webdriver.Builder()
    .forBrowser('firefox')
    .build();

driver.get('https://gitlab.com/');
driver.findElement(By.linkText("Sign in")).click();
driver.findElement(By.id("user_login")).sendKeys("htorosyan.1990@gmail.com");
driver.findElement(By.id("user_password")).sendKeys("chebureki777");
driver.findElement(By.name("commit")).click();
driver.findElement(By.className("project")).click();
driver.findElement(By.className("fa fa-download")).click();
driver.sleep(10000);
driver.quit();
