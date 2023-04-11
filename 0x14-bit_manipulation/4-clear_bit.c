#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number we are operating on
 * @index: index of bit to be operated on
 *
 * Return: 1 if successful
 * -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ar = sizeof(unsigned long int) * 8;
	unsigned int i = index;
	unsigned long int *b = n;

	if (index >= ar)
	{
		return (-1);
	}

	*b &= ~(1 << i);
	return (1);
}

