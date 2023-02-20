#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of three digits
 * Return: always 0 (success)
 */

int main(void)
{
	for (int a = 0; a < 8; a++)
	{
		for (int b = a + 1; b < 9; b++)
		{
			for (int c = b + 1; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if ((a == 7) && (b == 8) && (c == 9))
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
