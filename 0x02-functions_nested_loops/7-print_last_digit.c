#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @a: number in question
 *
 * Return: last digit of the number
 */

int print_last_digit(int a)
{
	int b;

	if (a < 0)
	{
		a *= -1;
	}

	else if (a == 0)
	{
		_putchar(a + '0');
		return (0);
	}

	else
	{
		b = a % 10;

		_putchar(b + '0');
	}
	return (b);
}

