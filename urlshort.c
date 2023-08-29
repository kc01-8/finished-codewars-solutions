#include <stdlib.h>
#include <string.h>

char *remove_url_anchor(const char *url_in) {
    const char *anchor_pos = strchr(url_in, '#');

    if (anchor_pos == NULL) {
        return strdup(url_in);
    }
    size_t new_length = anchor_pos - url_in;
    char *new_url = (char *)malloc(new_length + 1);
    strncpy(new_url, url_in, new_length);
    new_url[new_length] = '\0';

    return new_url;
}
