#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i, count;

	count = 0;
	if (s[0] != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			count = i;
		}

		for (; count >= 0; count--)
		{
			_putchar(s[count]);
		}

		_putchar('\n');
	}
}

