#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int res = 0, factor = 1, i = 0;
	
	/* iterate through string and calculate the number */
	for (; s[i] != '\0'; i++)
	{
		/* found a number */
		if (s[i] >= '0' && s[i] <= '9')
		{
			/* calculate the number */
			res = res * 10 + (s[i] - '0');
			/* found the end of number */
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		/* found a sign */
		if ((s[i] == '-' || s[i] == '+') &&
				(s[i + 1] >= '0
