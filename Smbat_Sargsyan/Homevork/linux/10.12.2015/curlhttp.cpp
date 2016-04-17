#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>
#include <iostream>
#include <string>

#define URL "http://www.kinopoisk.ru/"
#define FILENAME "kino.html"

int main(void)
{
 char* x=new char;
 std::cout << "x= " ;std::cin >> x; 
 CURL *curl;
 CURLcode res;
 
 FILE *stream;

 /* Открываем целевой файл для записи полученных данных */
 if ((stream = fopen (FILENAME, "wb")) == NULL) {
   /* Если файл не открылся, завершаем программу аварийно */
   fprintf (stderr, "Can't open a file for writing ");
   exit (EXIT_FAILURE);
 }
 
 /* Инициализируем cURL, получаем дескриптор */
 curl = curl_easy_init();
 
 /* Если дескриптор создан успешно */
 if (curl) {
   /* Устанавливаем URL загузки */
   curl_easy_setopt(curl, CURLOPT_URL, URL);
   /* Указываем файловый дескриптор для записи данных */
   curl_easy_setopt(curl, CURLOPT_WRITEDATA, stream);

   /* Выполняем запрос и проверяем результат*/
   res = curl_easy_perform(curl);
   if(CURLE_OK != res) {
     /* Сообщаем об ошибке */
     fprintf(stderr, "Error number %d ", res);
   }
   /* Освобождаем ресурсы cURL */
   curl_easy_cleanup(curl);
 }

 /* Закрываем файл */
 fclose(stream);
 delete x;
 return 0;
}
