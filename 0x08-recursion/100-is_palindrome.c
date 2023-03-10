#include "main.h"
int palin(char *, int, int);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string that is checked
 *
 * Return: 1 if string is a palindrome
 * 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);
	int repeat = length / 2;

	length--;
	if (length == 0)
	{
		return (1);
	}
	if (length == 1)
	{
		return (1);
	}
	return (palin(s, repeat, length));
}

/**
 * palin - performs actual computation
 * @s: sring that is checked
 * @n: number of times recursion is performed
 * @l: length of the string
 *
 * Return: 1 if string is a palindrome
 * 0 otherwise
 */
int palin(char *s, int n, int l)
{
	if (n <= 0)
	{
		return (1);
	}
	if (*s != s[1])
	{
		return (0);
	}
	n--;
	l -= 2;
	return (palin((s + 1), n, l));
}
