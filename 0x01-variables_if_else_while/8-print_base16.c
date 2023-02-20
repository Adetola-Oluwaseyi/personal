#include <stdio.h>

/**
  * main - entry point
  *
  * Description: prints all numbers of base 16
  * Return: Always 0 (success)
  */

int main(void)
{
	for (int a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (char a = 'a'; a < 'g'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
