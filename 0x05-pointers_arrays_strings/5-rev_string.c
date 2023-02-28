#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, count;
	int j = 0;
	char b[] = s;

	count = 0;
	if (s[0] != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			count = i;
		}

		for (; count >= 0; count--)
		{
			b[j] = s[count];

			j++;
		}
		s = b;
	}
}

