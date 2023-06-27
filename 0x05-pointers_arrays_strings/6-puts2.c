#include "main.h"
/**
 * puts2 - this will print all even of a string
 *
 * @str: the string input
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < (length - 1); i++)
	{
		if (str[i] == 0)
		{
			_putchar(str[i]);
		}
		else if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');

}
