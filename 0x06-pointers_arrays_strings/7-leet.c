#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string argument
 *
 * Return: encoded string
 */
char *leet(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == 65 || c[i] == 97)
		{
			c[i] = 52;
		}
		else if (c[i] == 'e' || c[i] == 'E')
		{
			c[i] = 51;
		}
		else if (c[i] == 'o' || c[i] == 'O')
		{
			c[i] = 48;
		}
		else if (c[i] == 't' || c[i] == 'T')
		{
			c[i] = 55;
		}
		else if (c[i] == 'l' || c[i] == 'L')
		{
			c[i] = 49;
		}
	}

	return (c);
}

