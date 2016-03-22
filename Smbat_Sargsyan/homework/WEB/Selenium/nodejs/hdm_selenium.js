var webdriver = require('selenium-webdriver'),
    By = webdriver.By,
    until = webdriver.until;

var driver = new webdriver.Builder()
    .forBrowser('firefox')
    .build();

driver.get('http://127.0.0.1:8080/');
//driver.findElement(By.class('q')).sendKeys('webdriver');
driver.findElement(By.className('blueButton menuBarButtonSize')).click();
driver.findElement(By.id('addName')).sendKeys('smbat888');
driver.findElement(By.id('addEmail')).sendKeys('sargsyanyan@mail.ru');
driver.findElement(By.id('addPassword')).sendKeys('888');
driver.findElement(By.className('signInButtonSize blueButton')).click();
driver.get('http://127.0.0.1:8080/');
driver.findElement(By.className('grayButton menuBarButtonSize')).click();
driver.findElement(By.id('iEmail')).sendKeys('sargsyanyan@mail.ru');
driver.findElement(By.id('iPassord')).sendKeys('888');
driver.findElement(By.className('blueButton signInButtonSize')).click();
driver.wait(10000);
driver.quit();

