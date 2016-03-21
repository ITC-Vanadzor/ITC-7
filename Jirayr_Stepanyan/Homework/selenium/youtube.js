var wd = require('selenium-webdriver');
var assert = require('assert');

var URL = 'http://www.youtube.com';

var client = new wd.Builder()
   .usingServer()
   .withCapabilities({ browserName: 'firefox' })
   .build();

client.get(URL).then(function() {
    //client.findElement({ name: 'text' }).sendKeys('test');
    client.findElement({ css: '.yt-uix-button-primary' }).click();
    client.findElement({ name: 'Email' }).sendKeys('magamag95@mail.ru');
    client.findElement({ id: 'next' }).click();
    client.findElement({ id: 'Passwd' }).sendKeys('margarita1995');
    client.findElement({ name: 'signIn' }).click();
    client.findElement({ id: 'masthead-search-term' }).sendKeys('football freestyle');
    client.findElement({ id: 'search-btn' }).click();
    client.findElement({ css: '.yt-thumb-simple' }).click();
    client.findElement({ css: '.share-panel-start-at' }).click();
   // var text = client.findElement({name: '.share_url'}).getText();
    //String selectLinkOpeninNewTab = Keys.chord(Keys.CONTROL,"t");
	client.get('http://www.gmail.com').then(function() {
		
		client.findElement({ id: 'choose-account-0' }).click();
		client.findElement({ id: 'Passwd' }).sendKeys('margarita1995');
		client.findElement({ id: 'signIn' }).click();
	
	});
	


    client.quit();
});