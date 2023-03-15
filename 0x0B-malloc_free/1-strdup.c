#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string that is copied
 *
 * Return: pointer to duplicated string if successful
 * else NULL
 */
char *_strdup(char *str)
{
	int i, count;
	char *p;

	count = 0;
	if (str[0] == '\0')
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	count++;
	p = malloc(count * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	count--;
	for (; count >= 0; count--)
	{
		p[count] = str[count];
	}

	return (p);
}

