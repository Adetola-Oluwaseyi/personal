#include "main.h"

/**
 * print_triangle - prints a triangle of specified size
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int a, i, j, k, l;

	k = size - 1;
	l = 1;
	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (i = 0; i < k; i++)
			{
				_putchar(' ');
			}
			for (j = l; j > 0; j--)
			{
				_putchar('#');
			}
			k--;
			l++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

