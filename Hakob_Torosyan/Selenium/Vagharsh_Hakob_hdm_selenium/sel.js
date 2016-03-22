var webdriver = require('selenium-webdriver'),
	By = webdriver.By,
   	 until = webdriver.until;
	
var driver = new webdriver.Builder()
    .forBrowser('firefox')
    .build();

driver.get('http://localhost:8080');

driver.findElement(By.linkText("Sign Up")).click();
driver.sleep(5000);
driver.findElement(By.id("addName")).sendKeys("Testuser1");
driver.findElement(By.id("addEmail")).sendKeys("testuser1@mail.ru");
driver.findElement(By.id("addPassword")).sendKeys("testuser1");
driver.findElement(By.css("#signUpDiv .blueButton")).click();
driver.sleep(3000);
driver.get('http://localhost:8080');
driver.sleep(5000);
driver.findElement(By.linkText("Sign In")).click();
driver.sleep(3000);
driver.findElement(By.id("iEmail")).sendKeys("testuser1@mail.ru");
driver.findElement(By.id("iPassword")).sendKeys("testuser1");
driver.findElement(By.css("#signInDiv .blueButton")).click();
driver.wait(function() {
 return driver.getTitle().then(function(title) {
   return title === ': HDM Statistic';
 });
}, 10000);
driver.quit();
