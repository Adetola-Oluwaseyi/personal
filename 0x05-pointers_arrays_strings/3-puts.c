#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: string that is printed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar('%c', str[i]);
	}
	_putchar('\n');
}

