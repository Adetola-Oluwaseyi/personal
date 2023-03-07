#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing characters to match
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i, j;

	count = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		j = 0;
		while (accept[j] >= '\0')
		{
			if (s[i] == accept[j])
			{
				count += 1;
				break;
			}
			j++;
		}
	}

	return (count);
}

