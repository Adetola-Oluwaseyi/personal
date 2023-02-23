#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character that is checked
 *
 * Return: 0 if character is uppercase
 * 1 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 || c <= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
