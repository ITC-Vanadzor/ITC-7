require("chromedriver");
var webdriver = require("selenium-webdriver"),
    By = webdriver.By,
    until = webdriver.until;

var driver = new webdriver.Builder()
   .forBrowser("chrome")
   .build();

// for generate short non-sequential unique id   
var shortid = require("shortid"),
    email  = "test_" + shortid.generate() + "@gmail.com",
    password = "selenium";
    
driver.get("http://127.0.0.1:8080/");
//sign up button
driver.findElement(By.className('blueButton')).click(); 
//enter name
driver.findElement(By.id("addName")).sendKeys("testUser");
//enter email
driver.findElement(By.id("addEmail")).sendKeys(email);
//enter pasword
driver.findElement(By.id("addPassword")).sendKeys(password);
//create button
driver.findElement(By.css("#signUpDiv .loginBg button")).click();

//back to signin page
driver.get("http://127.0.0.1:8080/src/signin.html");
//enter email and password
driver.findElement(By.id("iEmail")).sendKeys(email);
driver.findElement(By.id("iPassword")).sendKeys(password);
//sign in button
driver.findElement(By.css("#signInDiv form button")).click();


driver.wait(function() {
   return driver.getTitle().then(function(title) {
     return title === 'HDM Statistic';
   });
 }, 1000);
 
driver.sleep(4000);
driver.quit(); 
