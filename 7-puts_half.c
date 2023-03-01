#include <stdio.h>

void puts_half(char *str)
{
    int i;
    int n = 0;
    while (str[n] != '\0')
    {
        n++;
    }
    if (n % 2 == 0)
    {
        for (i = n / 2; str[i] != '\0'; i++)
        {
            printf("%c", str[i]);
        }
    }
    else
    {
        for (i = (n - 1) / 2; str[i] != '\0'; i++)
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}
