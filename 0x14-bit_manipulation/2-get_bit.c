#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: number operated on
 * @index: index of bit we want
 *
 * Return: value of bit at index
 * -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int ar = sizeof(unsigned long int) * 8;

	if (index >= ar)
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}

