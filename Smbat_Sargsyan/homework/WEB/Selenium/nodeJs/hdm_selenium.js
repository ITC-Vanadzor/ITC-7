var webdriver = require('selenium-webdriver'),
    By = webdriver.By,
    until = webdriver.until;

var driver = new webdriver.Builder()
    .forBrowser('firefox')
    .build();

driver.get('http://127.0.0.1:8080/');
driver.findElement(By.className('blueButton menuBarButtonSize')).click();
driver.findElement(By.id('addName')).sendKeys('smbat77788899');
driver.findElement(By.id('addEmail')).sendKeys('jack88899@mail.ru');
driver.findElement(By.id('addPassword')).sendKeys('888aaasss88899');
driver.findElement(By.css('#signUpDiv  .loginBg button')).click();
driver.navigate().back();
driver.navigate().back();
driver.findElement(By.linkText('Sign In')).click();
driver.findElement(By.id('iEmail')).sendKeys('jack88899@mail.ru');
driver.findElement(By.id('iPassword')).sendKeys('888aaasss88899');
driver.findElement(By.css('#signInDiv button')).click();
driver.wait(function() {
 return driver.getTitle().then(function(title) {
   return title === ': HDM Statistic';
 });
}, 10000);
driver.quit();

