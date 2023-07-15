#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: input int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
