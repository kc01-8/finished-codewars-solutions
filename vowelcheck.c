#include <stddef.h>

size_t get_count(const char *s){

    unsigned int length = strlen(s);
    int n = 0;

   for (unsigned int i = 0; i < length; i++) {
       if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {n++;}
   }
  return n;
}
