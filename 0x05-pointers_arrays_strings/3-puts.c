#include "main.h"
/**
 * _puts - print string followed by new line
 *
 * @str: prints string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
