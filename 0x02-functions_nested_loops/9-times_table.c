#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar(0 + '0');
		for (j = 1; j < 10; j++)
		{
			int a = i * j;

			if (a < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(a + '0');
			}
			else
			{
				int co = a / 10;
				int c = a % 10;

				_putchar(',');
				_putchar(' ');
				_putchar(co + '0');
				_putchar(c + '0');

			}
		}
		_putchar('\n');
	}
}
