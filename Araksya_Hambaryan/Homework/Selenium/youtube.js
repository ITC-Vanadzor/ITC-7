require("chromedriver");
var webdriver = require('selenium-webdriver'),
    By = webdriver.By,
    until = webdriver.until;

var driver = new webdriver.Builder()
   .forBrowser("firefox")
   .build();

driver.get("http://www.youtube.com");
driver.findElement(By.className("yt-uix-button yt-uix-button-size-default yt-uix-button-primary")).click();
driver.findElement(By.id("Email")).sendKeys("itc7vanadzor@gmail.com");
driver.findElement(By.id("next")).click();
driver.findElement(By.id("Passwd")).sendKeys("instigate");
driver.findElement(By.id("PersistentCookie")).click();
driver.findElement(By.id("signIn")).click();
driver.findElement(By.id("masthead-search-term")).sendKeys("Beth Hart");
driver.findElement(By.id("search-btn")).click();
driver.executeScript("window.scroll(0,document.body.scrollHeight);");
driver.findElement(By.id("item-section-724536").lastChild).click();
driver.sleep(10000);
driver.quit();
