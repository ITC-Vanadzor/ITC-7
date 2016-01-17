#include <stdio.h>
#include <curl/curl.h>
#include <string>
// html-n e gcum fayli mej
size_t write_data(void *ptr, size_t size, size_t nmemb, FILE *stream) {
    size_t written = fwrite(ptr, size, nmemb, stream);
    return written;
}

int main() {
    CURL *curl;
    FILE *fp;
    CURLcode res;
    char *url = "http://bookz.ru/authors/sent-ekzuperi-antuan/smprince.html";
    char outfilename[FILENAME_MAX] = "/home/prince.txt";
    curl = curl_easy_init();
    if (curl) {
	fp = fopen(outfilename,"wb");
	curl_easy_setopt(curl, CURLOPT_URL, url);
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
	res = curl_easy_perform(curl);
	curl_easy_cleanup(curl);
	fclose(fp);
    }
    return 0;
}
