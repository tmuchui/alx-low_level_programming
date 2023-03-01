#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	int lastDigit, i, j, noOfDigits;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n == 0)
		_putchar('0');

	lastDigit = n % 10;

	i = 10;
	noOfDigits = 1;
	while ((n / i) != 0)
	{
		noOfDigits++;
		i *= 10;
	}

	i /= 10;
	for (j = 0; j < noOfDigits - 1; j++)
	{
		_putchar((n / i) + '0');
		n %= i;
		i /= 10;
	}

	_putchar(lastDigit + '0');
}
