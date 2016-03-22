var webdriver = require('selenium-webdriver'),
	By = webdriver.By,
   	until = webdriver.until;
var randomstring = require("randomstring");
	
var driver = new webdriver.Builder()
    .forBrowser('firefox')
    .build();

driver.get('http://localhost:8080');
driver.findElement(By.linkText("Sign Up")).click();

driver.findElement(By.id("addName")).sendKeys("chebureki");
var myEmail = randomstring.generate(7) + '@mail.ru';
driver.findElement(By.id("addEmail")).sendKeys(myEmail);
driver.findElement(By.id("addPassword")).sendKeys("chebureki");
driver.findElement(By.css("#signUpDiv .signInButtonSize")).click();

driver.navigate().back();
driver.navigate().back();

driver.findElement(By.className("grayButton")).click();
driver.findElement(By.id("iEmail")).sendKeys(myEmail);
driver.findElement(By.id("iPassword")).sendKeys("chebureki");
driver.findElement(By.css("#signInDiv .signInButtonSize")).click();
driver.wait(until.titleIs('HDM Statistic'), 10000);
driver.sleep(10000);
driver.quit();
