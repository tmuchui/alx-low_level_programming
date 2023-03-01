#include <ctype.h>

char *string_toupper(char *s) {
    int i = 0;
    while (s[i]) {
        s[i] = toupper(s[i]);
        i++;
    }
    return s;
}
