#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: string argument
 */
void puts2(char *str)
{
	int i, j, count;

	count = 0;
	if (str[0] != '\0')
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			count = i;
		}

		count -= 1;
		_putchar(count + '0');
		for (j = 0; j <= count; j += 2)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}

