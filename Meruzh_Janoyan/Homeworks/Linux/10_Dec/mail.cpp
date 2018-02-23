//print email inbox list
#include <stdio.h>
#include <iostream>
#include <curl/curl.h>
 

 
int main(void)
{
  CURL *curl;
  CURLcode res = CURLE_OK;
 
  curl = curl_easy_init();
  if(curl) {
    char login[50],pass[50],serv[50];	
    std::cout<<"Input pop3 Server(exmp. pop3://pop.rambler.ru):"<<std::endl;
    std::cin>>serv;
    std::cout<<"Input Login:"<<std::endl;
    std::cin>>login;
    std::cout<<"Input Pass:"<<std::endl;
    std::cin>>pass;

    //Set username and password 
    curl_easy_setopt(curl, CURLOPT_USERNAME, login);
    curl_easy_setopt(curl, CURLOPT_PASSWORD, pass);
 
    curl_easy_setopt(curl, CURLOPT_URL, serv);
 
    res = curl_easy_perform(curl);
 
    //if errors
    if(res != CURLE_OK)
      fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
 
    curl_easy_cleanup(curl);
  }
 
  return 0;
}
