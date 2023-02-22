#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @a: number in question
 *
 * Return: last digit of the number
 */

int print_last_digit(int a)
{
	int b = a % 10;

	if (b < 0)
	{
		b *= -1;
	}

	_putchar(b + '0');

	return (b);
}

