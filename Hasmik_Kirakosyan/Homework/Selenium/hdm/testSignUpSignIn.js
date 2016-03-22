var webdriver = require('selenium-webdriver'),
    By = webdriver.By,
    until = webdriver.until;

var driver = new webdriver.Builder()
	.forBrowser('firefox')
	.build();

driver.get('http://127.0.0.1:8080/');
driver.findElement(By.linkText("Sign Up")).click();
driver.findElement(By.id("addName")).sendKeys("testName");
var email = "testEmail"+Math.floor(Math.random() * 57)+"@gmail.com";
driver.findElement(By.id("addEmail")).sendKeys(email);
var password = "secretsecret22"
driver.findElement(By.id("addPassword")).sendKeys(password);

driver.findElement(By.css("#signUpDiv .loginBg button")).click();

driver.navigate().back();
driver.navigate().back();

driver.findElement(By.linkText("Sign In")).click();

driver.findElement(By.id("iEmail")).sendKeys(email);

driver.findElement(By.id("iPassword")).sendKeys(password);

driver.findElement(By.css("#signInDiv form button")).click();

 driver.wait(function() {
   return driver.getTitle().then(function(title) {
     return title === 'HDM Statistic';
   });
 }, 1000);
driver.sleep(4000);
driver.quit();
