#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number converted to binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = n >> 1;
	unsigned long int ans = n & 1;

	if (n > 1)
	{
		print_binary(num);
	}
	_putchar(ans + '0');
}

