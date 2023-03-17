#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * and sets the memory to 2
 * @nmemb: no of elements in array
 * @size: size in bytes of each element
 *
 * Return: pointer to allocated memory
 * NULL if malloc fails and nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p, i;
	void *mn;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mn = malloc(nmemb * size);
	if (mn == NULL)
		return (NULL);
	p = mn;
	for (i = 0; i < (int)(nmemb * size); i++)
		p[i] = 0;

	return (mn);
}

