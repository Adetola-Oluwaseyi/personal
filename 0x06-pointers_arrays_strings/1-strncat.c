#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string argument
 * @src: string argument
 * @n: number of bytes to be copied from src to dest
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int count = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		count = i;
	}
	count += 1;
	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			return (dest);
		}
		dest[count] = src[i];
		count++;
	}
	return (dest);
}

