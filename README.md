# alx-low_level_programming
#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, char *src)
{
    int len1 = strlen(dest);
    int len2 = strlen(src);

    for (int i = 0; i < len2; i++)
    {
        dest[len1 + i] = src[i];
    }

    dest[len1 + len2] = '\0';

    return dest;
}

int main(void)
{
    char dest[20] = "Hello";
    char src[20] = " World!";
    char *concatStr;

    concatStr = _strcat(dest, src);
    printf("Concatenated String: %s\n", concatStr);

    return 0;
}
