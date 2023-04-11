#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to number we are operating on
 * @index: index of bit
 *
 * Return: 1 if successful
 * -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ar = sizeof(unsigned long int) * 8;
	unsigned long int *b = n;

	if (index >= ar)
	{
		return (-1);
	}
	*b ^= 1 << index;
	return (1);
}

