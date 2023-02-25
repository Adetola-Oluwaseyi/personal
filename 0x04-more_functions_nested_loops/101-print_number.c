#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: integer that is printed
 */
void print_number(int n)
{
	int i, j, k, l, m, o;

	i = 10;
	o = n;
	if (o < 0)
	{
		o *= -1;
		_putchar('-');
	}

	while (o / i > 0)
	{
		i *= 10;
	}
	
	m = i / 10;
	l = o % 10;

	for (; m >= 10; m /= 10)
	{
		j = o / m;
		k = j % 10;
		_putchar(k + '0');
	}
	_putchar(l + '0');
}

