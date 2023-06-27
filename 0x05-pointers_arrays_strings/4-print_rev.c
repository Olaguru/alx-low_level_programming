#include "main.h"
/**
 * print_rev - print a string in reverse
 *
 * @s: the string input to be reversed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int a, i;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	for (i = a; i >= 0; i--)
	_putchar(s[i]);
	_putchar('\n');
}
