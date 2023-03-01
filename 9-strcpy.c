
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main()
{
    char src[] = "Hello";
    char dest[6];

    printf("Source string: %s\n", src);
    _strcpy(dest, src);
    printf("Destination string: %s\n", dest);

    return 0;
}
