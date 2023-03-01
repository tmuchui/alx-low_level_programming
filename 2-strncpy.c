
#include <stdio.h>
#include <string.h>

char *_strncpy(char *dest, char *src, int n)
{
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for ( ; i < n; i++)
        dest[i] = '\0';

    return dest;
}

int main()
{
    char src[] = "This is a string";
    int n = 4;
    char dest[n];
    _strncpy(dest, src, n);
    printf("Source string: %s\n", src);
    printf("Copied string: %s\n", dest);
    return 0;
}
