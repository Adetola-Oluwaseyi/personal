#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int b, half;
	int j = 0;

	if (n > 2)
	{
		n -= 1;
		half = (n - (n / 2)) - 1;
		for (; n > half; n--)
		{
			b = a[j];
			a[j] = a[n];
			a[n] = b;

			j++;
		}
	}
}

