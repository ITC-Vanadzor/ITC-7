#include <stdio.h>
#include <curl/curl.h>
#include <iostream>
int main()
{
  CURL *curl;
  CURLcode res ;
  curl = curl_easy_init();
  if(curl) 
  {	
    char login[30] = "jiro-19944@mail.ru";
    char password[30] = "kkk123456";	
    curl_easy_setopt(curl, CURLOPT_URL, "github.com");
    curl_easy_setopt(curl, CURLOPT_USERNAME, login);
    curl_easy_setopt(curl, CURLOPT_PASSWORD, password);
    res = curl_easy_perform(curl);    
    curl_easy_cleanup(curl);
  }
  return 0;
}
