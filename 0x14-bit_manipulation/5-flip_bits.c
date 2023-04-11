#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: integer argument
 * @m: integer argument
 *
 * Return: number of bits you would need to
 * flip to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int o = n ^ m;
	unsigned long int p = 0;

	while (o > 0)
	{
		p += o & 1;
		o >>= 1;
	}

	return (p);
}

