#include <stdio.h>
void print_alphabet(void);

/**
 * main - entry point
 *
 * Description: calls the print_alphabet function
 * Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
