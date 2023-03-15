#include "main.h"
#include <stdlib.h>
int _count(char *);
/**
 * str_concat - concatenates two strings and
 * places the result in a new array
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly created array if successful
 * else NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int count, i, j;

	count = _count(s1);
	count += _count(s2);
	p = malloc(count * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		p[i] = s1[i];

	for (j = 0; s2[j]; j++)
	{
		p[i] = s2[j];
		i++;
	}

	return (p);
}


/**
 * _count - computes size of an array
 * @str: pointer to array
 *
 * Return: size of array
 */
int _count(char *str)
{
	int count = 0;

	if (str == NULL)
		return (count);

	for (; str[count]; count++)
		continue;

	return (count);
}
