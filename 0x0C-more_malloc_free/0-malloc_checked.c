#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc
 * @b: amount of memory to be allocated
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	if (b == 0)
		return (NULL);

	p = malloc(b);
	if (p == NULL)
		return (NULL);

	return (p);
}

