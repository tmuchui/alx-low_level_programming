#include <stdio.h>

void print_buffer(char *b, int size)
{
    int i;

    if (size <= 0)
        printf("\n");
    for (i = 0; i < size; i++)
    {
        if (i % 10 == 0)
            printf("%08x: ", i);
        if (i % 2 == 0)
            printf("%02x", b[i]);
        else
            printf("%02x ", b[i]);
        if (i % 10 == 9)
        {
            int j;

            for (j = 0; j < 10; j++)
            {
                if (b[i - j] >= 32 && b[i - j] < 127)
                    printf("%c", b[i - j]);
                else
                    printf(".");
            }
            printf("\n");
        }
    }
    if (size % 10 != 0)
    {
        int j;
        int k = 0;
        for (j = 0; j < size % 10; j
