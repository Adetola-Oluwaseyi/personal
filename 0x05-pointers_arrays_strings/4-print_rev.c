#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i, count;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = i;
	}

	if (count >= 0)
	{
		for (; count >= 0; count--)
		{
			_putchar(s[count]);
		}
	}
	_putchar('\n');
}

