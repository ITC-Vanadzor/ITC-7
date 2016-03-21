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
					 driver.findElement(By.id("addPassword")).sendKeys("secretPassword22!");
					 driver.findElement(By.name("signUp")).click();
					 //driver.sleep(10000);
					 driver.get('http://127.0.0.1:8080/src/signin.html');
					 driver.findElement(By.id("iEmail")).sendKeys(email);
					 driver.findElement(By.id("iPassword")).sendKeys("secretPassword22!");
					 driver.findElement(By.linkText("Sign In")).click();
					 driver.sleep(10000);
					 driver.quit();
