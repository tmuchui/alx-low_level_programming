#include "main.h"

/**
 * _strlen - gets the length of a given string
 * @s: the string to get the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (*(s + len))
        len++;
    return (len);
}
