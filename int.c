#include <stdlib.h>

char* number_to_string(int number) {
    int length = snprintf(NULL, 0, "%d", number) + 1;
    char* str = (char*)malloc(sizeof(char) * length);
    sprintf(str, "%d", number);

    return str;
}
