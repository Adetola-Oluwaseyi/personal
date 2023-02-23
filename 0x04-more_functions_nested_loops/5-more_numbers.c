#include "main.h"

/**
 * more_numbers -  prints the numbers 0 to 14 ten times
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(1 + '0');
			}
			k = j % 10;

			_putchar(k + '0');
		}
		_putchar('\n');
	}
}

