#include "main.h"

/**
 *  print_diagonal - draws a diagonal line on the terminal
 *  @n: determines how long the line would be
 */
void print_diagonal(int n)
{
	int i, j, k;

	k = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= k; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			k++;
		}
	}
	else
	{
		_putchar('\n');
	}
}


