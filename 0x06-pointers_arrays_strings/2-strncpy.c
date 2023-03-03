#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string argument
 * @src: string argument
 * @n: number of bytes to be copied from src to dest
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0' && dest[i] == '\0')
		{
			return (dest);
		}
		dest[i] = src[i];
	}
	return (dest);
}

