#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j, count, half;
	char b;

	j = 0;
	count = 0;
	if (s[0] != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			count = i;
		}

		half = (count + 1) - ((count + 1) / 2);
		for (; count > half; count--)
		{
			b = s[j];
			s[j] = s[count];
			s[count] = b;

			j++;
		}
	}
}

