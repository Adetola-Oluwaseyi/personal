#include "main.h"

/**
 * main - entry point
 *
 * Description: prints string to standard output
 * Return: Always 0 (success)
 */

int main(void)
{
	char a[] = "_putchar";
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}

