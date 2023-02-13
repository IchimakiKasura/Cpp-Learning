#include "curlHead.h"
#include <iostream>

int main(void)
{
    CURL* curl;
    CURLcode res;
    curl_global_init(CURL_GLOBAL_ALL);

    curl = curl_easy_init();

    if (curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, "https://ichimakikasura.github.io/");

        res = curl_easy_perform(curl);

        if (res != CURLE_OK)
            fprintf(stderr, "curl perform() returned %s\n", curl_easy_strerror(res));

        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();
    return 0;
}