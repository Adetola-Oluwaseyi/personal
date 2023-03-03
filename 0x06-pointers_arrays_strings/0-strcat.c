#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string argument
 * @src: string argument
 *
 * Return:  a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int count;

	count = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		count = i;
	}
	count += 1;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[count] = src[i];
		count++;
	}
	return (dest);
}

