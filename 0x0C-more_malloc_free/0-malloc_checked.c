#include "main.h"
#include <stdlib.h>

#define MAX_REASONABLE_SIZE 1000000000
/**
 * malloc_checked - Main Entry
 * @b: input
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	if (b > MAX_REASONABLE_SIZE)
	{
	return (NULL);
	}
	
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
