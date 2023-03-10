#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @a: integer whose absolute value is computed
 *
 * Return: the absolute value
 */
int _abs(int a)
{
	int m = a;

	if (m < 0)
	{
		m *= -1;
	}

	return (m);
}

