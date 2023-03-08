#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be scanned
 * @needle: string containing characters to match
 *
 * Return: pointer to the beginning of the located substring
 * NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, count;

	for (i = 0; needle[i] != '\0'; i++)
	{
		count = i;
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0' && haystack[i + j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
				if (j == count)
				{
					return (&haystack[i]);
				}
				j++;
			}
		}
	}
	return ("\0");
}

