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
	int amount, i;

	amount = 0;
	while (s[amount] != '\0')
	{
		amount++;
	}

	for (i = amount; i >= 0; i--)
	_putchar(s[i]);
	_putchar('\n');
}
