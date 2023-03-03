#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string argument
 * @s2: string argument
 *
 * Return: an integer less than,equal to,
 * or greater than zero if s1 (or the first n bytes
 * thereof) is found, respectively, to be less than,
 * to match, or be greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, count, count2;

	count = 0;
	count2 = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		count += s1[i];
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		count2 += s2[i];
	}

	return (count - count2);
}

