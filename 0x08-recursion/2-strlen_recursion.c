#include "main.h"

/**
 * _strlen_recursion - determines the length of a string
 * @s: string that is counted
 *
 * Return: number of bytes in the string pointed to by s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

