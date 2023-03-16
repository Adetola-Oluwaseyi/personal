#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number rows in the array
 * @height: number of columns in the array
 *
 * Return: pointer to the 2 dimensional array
 * NULL if width or height is less than 1 and
 * if malloc returns NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	return (array);
}

