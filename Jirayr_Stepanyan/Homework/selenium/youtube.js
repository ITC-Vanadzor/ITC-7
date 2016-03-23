var wd = require('selenium-webdriver');

var URL = 'http://www.youtube.com';
var URL_G = 'http://www.gmail.com';

By = wd.By;

var client = new wd.Builder()
   .usingServer()
   .withCapabilities({ browserName: 'firefox' })
   .build();

client.get(URL);
    
    client.findElement({ css: '.yt-uix-button-primary' }).click();
    client.findElement({ name: 'Email' }).sendKeys('itc7vanadzor@gmail.com');
    client.findElement({ id: 'next' }).click();
    client.findElement({ id: 'Passwd' }).sendKeys('instigate');
    client.findElement({ id: 'signIn' }).click();
    /*client.findElement({ id: 'masthead-search-term' }).sendKeys('football freestyle'); 
    client.wait(client.isElementPresent(By.id('search-btn')), 10000);
    client.findElement({ id: 'search-btn' }).click();
    client.wait(client.isElementPresent(By.css('.yt-lockup-content .yt-lockup-title')), 10000);
    client.findElement({ css: '.yt-lockup-content .yt-lockup-title' }).click();*/
    
    client.sleep(10000);
    client.get(URL_G);
	client.sleep(10000);
	client.wait(client.isElementPresent(By.css('.z0 .T-I')), 20000);
	client.findElement({ css: '.z0 .T-I' }).click();
	client.wait(client.isElementPresent(By.id(':by')), 10000);
	client.findElement({ id: ':by' }).sendKeys('jiro-19944@mail.ru');
	//client.findElement({ id: 'signIn' }).click();
	
	


    client.quit();

