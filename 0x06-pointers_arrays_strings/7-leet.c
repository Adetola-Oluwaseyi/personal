#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string argument
 *
 * Return: encoded string
 */
char *leet(char *c)
{
	int i, j;
	char words[6] = {'a', 'e', 'o', 't', 'l'};
	int num[5] = {52, 51, 48, 55, 49};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; words[j] != '\0'; j++)
		{
			if (c[i] == words[j] || (c[i] + 32) == words[j])
			{
				c[i] = num[j];
			}
		}
	}

	return (c);
}

