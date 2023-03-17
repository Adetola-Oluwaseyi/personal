#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers containing all the
 * values from min (included) to max (included), ordered from min to max
 * @min: smallest integer in the array
 * @max: largest number in the array
 *
 * Return: pointer to the allocated memory
 * NULL if min > max and if malloc fails
 */
int *array_range(int min, int max)
{
	int i, count, *p;

	if (min > max)
		return (NULL);
	count = max - min + 1;
	p = malloc(count * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; min++)
	{
		p[i] = min;
		i++;
	}

	return (p);
}
