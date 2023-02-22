#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @a: number in question
 *
 * Return: last digit of the number
 */

int print_last_digit(int a)
{
	if (a < 0)
	{
		a *= -1;
	}

	int b = a % 10;

	_putchar(b + '0');
	return (b);
}

