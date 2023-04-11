#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number converted to binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int ans, nn;
	int i;

	nn = n;
	for (i = 31; i >= 0; i--)
	{
		ans = nn >> i;
		if (ans & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}

