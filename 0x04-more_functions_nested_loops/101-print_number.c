#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: integer that is printed
 */
void print_number(int n)
{
	int i;

	i = 10;
	while (n / i > 0)
	{
		i *= 10;
	}

	int m = i / 10;
	int j;

	for (; m >= 10; m / 10)
	{
		j = n % m;
		_putchar(j + '0')
	}
}

