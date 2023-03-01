#include <stdio.h>
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
    int dest_len = strlen(dest);
    int i;
 
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
 
    return dest;
}

int main()
{
    char dest[100] = "Hello ";
    char src[100] = "World!";
    int n = 5;
 
    printf("%s\n", _strncat(dest, src, n));
 
    return 0;
}

Output:
Hello Wo
