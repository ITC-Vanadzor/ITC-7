var webdriver = require('selenium-webdriver'),
    By = webdriver.By,
    until = webdriver.until;

var driver = new webdriver.Builder()
    .forBrowser('firefox')
    .build();

driver.get('http://www.gitlab.com/');
//driver.findElement(By.class('q')).sendKeys('webdriver');
driver.findElement(By.className('sign-in-up-btn')).click();
driver.findElement(By.id('user_login')).sendKeys('htorosyan.1990@gmail.com');
driver.findElement(By.id('user_password')).sendKeys('chebureki777');
driver.findElement(By.className('btn btn-save')).click();
driver.findElement(By.className('avatar project-avatar s40 identicon')).click();
driver.findElement(By.className('fa fa-download')).click();
driver.wait(10000);
driver.quit();
