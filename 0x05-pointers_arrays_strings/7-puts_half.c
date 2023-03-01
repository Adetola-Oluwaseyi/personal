#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string that is manipulated
 */
void puts_half(char *str)
{
	int i, j, count, half;

	if (str[0] != '\0')
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			count = i;
		}

		if ((count + 1) % 2 == 0)
		{
			half = (count / 2) + 1;
		}
		else
		{
			half = count / 2;
		}
		for (j = half; i <= count; i++)
		{
			_putchar(str[j]);
		}
	}


	_putchar('\n');
}

