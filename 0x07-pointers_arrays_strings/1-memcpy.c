#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to array where content is to copied
 * @src: pointer to data to be copied
 * @n: number of bytes to copied
 *
 * Return: pointer to memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

