#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number whose factorial is calculated
 *
 * Return: factorial of number
 * -1 if n is less that 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

