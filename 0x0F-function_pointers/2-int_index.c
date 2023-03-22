#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array that is searched
 * @size: size of the array
 * @cmp: pointer to a function that compares values
 *
 * Return: index of the first element for which the
 * cmp function does not return 0
 * -1 if no element matches or if siez is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}

