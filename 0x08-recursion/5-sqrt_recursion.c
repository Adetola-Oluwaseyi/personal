#include "main.h"
int find_root(int, int);

/**
 * _sqrt_recursion - finds the natural square root of a given number
 * @n: integer whose square root is found
 *
 * Return: sqaure root of a given number
 * -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	return (find_root(n, root));
}

/**
 * find_root - function performing the actual computation
 * @n: integer whose sqaure root is found
 * @root: intial 0 zero that is potentially used to store root
 *
 * Return: square of given number
 * -1 if n has no natural square root
 */
int find_root(int n, int root)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	if (root > n / 2)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}
	return (find_root(n, root + 1));

}

