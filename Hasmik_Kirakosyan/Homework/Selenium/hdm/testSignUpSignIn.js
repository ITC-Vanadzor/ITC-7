var webdriver = require('selenium-webdriver'),
		  			 By = webdriver.By,
			   	 until = webdriver.until;
	
var driver = new webdriver.Builder()
		      .forBrowser('firefox')
				    .build();

					 driver.get('http://localhost:8080/hdm/public/index.html');
					 driver.findElement(By.className("blueButton menuBarButtonSize")).click();
					 driver.findElement(By.id("addName")).sendKeys("testName");
					 var email = "testEmail"+Math.floor(Math.random() * 57)+"@gmail.com";
					 driver.findElement(By.id("addEmail")).sendKeys(email);
					 driver.findElement(By.id("addPassword")).sendKeys("secretPassword22!");
					 driver.findElement(By.name("signUp")).click();
					 //driver.sleep(10000);
					 driver.get('http://localhost/hdm/public/src/signin.html');
					 driver.findElement(By.id("iEmail")).sendKeys(email);
					 driver.findElement(By.id("iPassword")).sendKeys("secretPassword22!");
					 driver.findElement(By.className("blueButton signInButtonSize")).click();
					 driver.quit();
