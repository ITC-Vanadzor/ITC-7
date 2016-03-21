var wd = require('selenium-webdriver');

var URL = 'http://www.youtube.com';

var client = new wd.Builder()
   .usingServer()
   .withCapabilities({ browserName: 'firefox' })
   .build();

client.get(URL).then(function() {
    client.findElement({ css: '.yt-uix-button-primary' }).click();
    client.findElement({ name: 'Email' }).sendKeys('itc7vanadzor@gmail.com');
    client.findElement({ id: 'next' }).click();
    client.findElement({ id: 'Passwd' }).sendKeys('instigate');
    client.findElement({ name: 'signIn' }).click();
    client.findElement({ id: 'masthead-search-term' }).sendKeys('football freestyle');
    client.findElement({ id: 'search-btn' }).click();
    client.findElement({ css: '.yt-thumb-simple' }).click();
    client.findElement({ css: '.share-panel-start-at' }).click();
	client.get('http://www.gmail.com').then(function() {
		
		client.findElement({ id: 'choose-account-0' }).click();
		client.findElement({ id: 'Passwd' }).sendKeys('margarita1995');
		client.findElement({ id: 'signIn' }).click();
	
	});
	


    client.quit();
});
