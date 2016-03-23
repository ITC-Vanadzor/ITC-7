var wd = require('selenium-webdriver');

var URL = 'http://www.youtube.com';
var URL_G = 'http://www.gmail.com';

By = wd.By;

var client = new wd.Builder()
   .usingServer()
   .withCapabilities({ browserName: 'firefox' })
   .build();

client.get(URL);
    
	client.wait(client.isElementPresent(By.css('.yt-uix-button-primary')), 10000);
    	client.findElement({ css: '.yt-uix-button-primary' }).click();
	client.wait(client.isElementPresent(By.id('Email')), 10000);
    	client.findElement({ id: 'Email' }).sendKeys('itc7vanadzor@gmail.com');
	client.wait(client.isElementPresent(By.id('next')), 10000);
    	client.findElement({ id: 'next' }).click();
	client.wait(client.isElementPresent(By.id('Passwd')), 10000);
    	client.findElement({ id: 'Passwd' }).sendKeys('instigate');
	client.wait(client.isElementPresent(By.id('signIn')), 10000);
    	client.findElement({ id: 'signIn' }).click();
	client.wait(client.isElementPresent(By.id('masthead-search-term')), 10000);    	
	client.findElement({ id: 'masthead-search-term' }).sendKeys('football freestyle'); 
    	client.wait(client.isElementPresent(By.id('search-btn')), 10000);
    	client.findElement({ id: 'search-btn' }).click();
    	client.wait(client.isElementPresent(By.css('.yt-lockup-content .yt-lockup-title')), 10000);
    	client.findElement({ css: '.yt-lockup-content .yt-lockup-title' }).click();
   	client.wait(client.isElementPresent(By.css('.yt-uix-button .yt-uix-button-size-default .yt-uix-button-opacity .yt-uix-button-has-icon .no-icon-markup .pause-resume-autoplay .action-panel-trigger .action-panel-trigger-share   .yt-uix-tooltip .yt-uix-button-toggled')), 10000);
    	client.findElement({ css: '.yt-uix-button .yt-uix-button-size-default .yt-uix-button-opacity .yt-uix-button-has-icon .no-icon-markup .pause-resume-autoplay .action-panel-trigger .action-panel-trigger-share   .yt-uix-tooltip .yt-uix-button-toggled' }).click();
    	client.wait(client.isElementPresent(By.css('.share-panel-url-container .share-panel-url-input-container .yt-uix-form-input-text')), 10000);
    	client.findElement({ css: '.share-panel-url-container .share-panel-url-input-container .yt-uix-form-input-text' }).click();
	client.sleep(10000);

    	client.get(URL_G);
	client.sleep(10000);	
	
	client.wait(client.isElementPresent(By.css('.z0 .T-I')), 10000);
	client.findElement({ css: '.z0 .T-I' }).click();
	client.wait(client.isElementPresent(By.id(':by')), 10000);
	client.findElement({ id: ':by' }).sendKeys('jiro-19944@mail.ru');
	client.wait(client.isElementPresent(By.id(':bi')), 10000);
	client.findElement({ id: ':bi' }).sendKeys('selenium');
	client.wait(client.isElementPresent(By.id(':cn')), 10000);
	client.findElement({ id: ':cn' }).sendKeys('barev dzez');
	client.wait(client.isElementPresent(By.id(':b8')), 10000);	
	client.findElement({ id: ':b8' }).click();	

	client.sleep(10000);
	

	client.quit();

