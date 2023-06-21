#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print n number to 98
 *
 * Description: print the number ascending or descending
 *
 * @n: the passed value
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
	{
		printf("%d", n);

		if (n == 98)
			continue;
		printf(", ");
	}
	printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
