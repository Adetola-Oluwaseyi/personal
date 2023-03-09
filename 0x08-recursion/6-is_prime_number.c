#include "main.h"

int prime(int, int);
/**
 * is_prime - determines if a number is a prime number
 * @n: integer number that is tested
 *
 * Return: 1 if number is prime
 * 0 otherwise
 */
int is_prime_number(int n)
{
	int num = 2;

	return (prime(n, num));
}

/**
 * prime - performs actual computation
 * @n: number tested
 * @num: initially 2, used to test if n is prime
 *
 * Return: 1 if prime
 * 0 otherwise
 */
int prime(int n, int num)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	if (num > n / 2)
	{
		return (1);
	}
	if ((n % num) == 0)
	{
		return (0);
	}
	return (prime(n, num + 1));
}
