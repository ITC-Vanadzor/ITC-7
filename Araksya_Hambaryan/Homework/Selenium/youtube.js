require("chromedriver");
var webdriver = require('selenium-webdriver'),
    By = webdriver.By,
    until = webdriver.until;

var driver = new webdriver.Builder()
   .forBrowser("firefox")
   .build();
//maximaze the firefox window  
driver.manage().window().maximize();

driver.get("http://www.youtube.com");
//sign in gmail/youtube 
driver.findElement(By.className("yt-uix-button yt-uix-button-size-default yt-uix-button-primary")).click();

driver.wait(until.elementLocated(By.id("Email")), 5000).then(function(elm){elm.sendKeys("itc7vanadzor@gmail.com")});
driver.findElement(By.id("next")).click();

driver.wait(until.elementLocated(By.id("Passwd")), 5000).then(function(elm){elm.sendKeys("instigate")});
driver.findElement(By.id("PersistentCookie")).click();
driver.findElement(By.id("signIn")).click();

//search video
driver.wait(until.elementLocated(By.id("masthead-search-term")), 5000).then(function(elm){elm.sendKeys("Beth Hart")});
driver.findElement(By.id("search-btn")).click();
//scroll to page up
driver.executeScript("window.scroll(0,document.body.scrollHeight);");
//play last video	
driver.wait(until.elementLocated(By.css('#results .item-section li:last-child .yt-lockup')), 5*1000).then(function(elm){elm.click()});
driver.sleep(6000);
//share
driver.wait(until.elementLocated(By.css('#watch8-secondary-actions > button')), 5*1000).then(function(elm){elm.click()});
//driver.findElement(By.css(["type=checkbox"])).click();

//get url
driver.sleep(5000);
var url= driver.findElement(By.className("yt-uix-form-input-text share-panel-url")).getAttribute("value");
driver.sleep(5000);

//open gmail
driver.navigate().to("https://gmail.com");
driver.wait(until.elementLocated(By.className("T-I J-J5-Ji T-I-KE L3")), 5*1000).then(function(elm){elm.click()});
//create new letter
driver.wait(until.elementLocated(By.name("to")), 5*1000).then(function(elm){elm.sendKeys('itc7vanadzor@gmail.com')});
driver.findElement(By.name("subjectbox")).sendKeys('Araks');
driver.findElement(By.className("Am Al editable LW-avf")).sendKeys(url);
driver.findElement(By.className("T-I J-J5-Ji aoO T-I-atl L3")).click();
driver.sleep(6000);

//logout
driver.findElement(By.className("gb_b gb_6a gb_R")).click();
driver.findElement(By.className("gb_Da gb_he gb_oe gb_pb")).click();


driver.wait(100000);
driver.quit();
