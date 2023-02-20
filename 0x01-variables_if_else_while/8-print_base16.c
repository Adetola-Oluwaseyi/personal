#include <stdio.h>

/**
  * main - entry point
  *
  * Description: prints all numbers of base 16
  * Return: Always 0 (success)
  */

int main(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (b = 'a'; b < 'g'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
